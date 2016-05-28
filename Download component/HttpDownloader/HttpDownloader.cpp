#include "HttpDownloader.h"
#include <assert.h>
#include <stdio.h>
#include <Windows.h>
#include <Wininet.h>

#pragma comment(lib, "Wininet.lib")

CHttpDownloader::CHttpDownloader() : m_hWinINet(0), m_nPort(0), m_hSession(0), m_dwContextValue(20130116)
{
    m_szServerName[0] = 0;
    m_szServerPath[0] = 0;
    m_szUser[0] = 0;
    m_szPW[0] = 0;
}

CHttpDownloader::~CHttpDownloader()
{
    if (NULL != m_hWinINet)
    {
        InternetCloseHandle(m_hWinINet);
    }
    if (NULL != m_hSession)
    {
        InternetCloseHandle(m_hSession);
    }
}

/********************************************************************************
* ��  ��: ���ӵ�������
* ��  ��: [IN] szServer: ������·�� (ע��:����Ҫhttp://ǰ׺,��:http://www.baidu.com/soft,ֻ��www.baidu.com/soft����)
*         [IN] nPort: �˿�      Ĭ��Ϊ80
*         [IN] szUser: �û���   Ĭ��Ϊ��
*         [IN] szPw: ����       Ĭ��Ϊ��
* ����ֵ: : true: ���ӳɹ������򷵻�flase
--------------------------------------------------------------------------------
* �޸ļ�¼ :
 ����     �汾 ����    ����
 13-01-16 1.0  Joeson  ����
*******************************************************************************/
bool CHttpDownloader::Connect( char const *szServer, int nPort /*= 80*/, char const *szUser /*= NULL*/, char const *szPw /*= NULL*/ )
{
    assert(NULL != szServer && 0 != nPort);

    if (0 == m_hWinINet)
    {
        // [MSDN] ��ʹ��WinINet����֮ǰ, ����Ӧ��ʹ��InternetAttemptConnect�������������ӵ����硣�ú������������Ƿ���ڣ�
        // �����������򿪲������
        if (ERROR_SUCCESS != InternetAttemptConnect(0))
        {
            return false;
        }

        // �����վ�Ƿ�ͨ��
        char szBuff[256] = {};
        sprintf_s(szBuff, "http://%s", szServer);
        if (!InternetCheckConnection(szBuff, FLAG_ICC_FORCE_CONNECTION, 0))
        {
            DWORD dwError = GetLastError();
            return false;
        }

        m_hWinINet = InternetOpen("MyHttpDownloader", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0/*INTERNET_FLAG_ASYNC*/);
        assert(NULL != m_hWinINet);
    }

    //
    // [MSDN]Ϊ�˸�Ч��,����ʹ��HTTPЭ��Ӧ�þ����ٵص���InternetConnect������ÿ�δ������󶼵���������������û�����ǰ��
    // ����ķ�������������ʱ��ԭ���ĻỰID���ɿ���.
    //
    char szServName[LEN_SERVNAME] = {};
    char szServPath[LEN_SERVPATH] = {};
    _ParseUrl(szServer, szServName, szServPath);
    if (NULL != m_hSession && 
        (0 != strcmp(szServName, m_szServerName) || 0 != strcmp(szServPath, m_szServerPath) || nPort != m_nPort))
    {
        InternetCloseHandle(m_hSession);
        m_hSession = 0;
    }

    strcpy_s(m_szServerName, szServName);
    strcpy_s(m_szServerPath, szServPath);
    m_nPort = nPort;
    if (NULL != szUser)
    {
        strcpy_s(m_szUser, szUser);
    }
    if (NULL != szPw)
    {
        strcpy_s(m_szPW, szPw);
    }

    return _CreateSession();
}

/********************************************************************************
* ��  ��: �ӷ����������ļ�
* ��  ��: [IN] szFileWithPath: �������ļ���(��·��)
* ����ֵ: ��
--------------------------------------------------------------------------------
* �޸ļ�¼ :
 ����     �汾 ����    ����
 13-01-16 1.0  Joeson  ����
*******************************************************************************/
bool CHttpDownloader::Download( char const *szFileWithPath )
{
    // ����δ��ʼ��
    if (NULL == m_hWinINet || NULL == m_hSession)
    {
        return false;
    }

    DWORD const LEN_BUFFER = 8192;              // ��ֵ�ǵ���ʱ�۲�InternetQueryDataAvailable��NumberOfBytes����ֵ������
    static char szBuffer[LEN_BUFFER] = {};
    szBuffer[0] = 0;

    //
    // [MSDN]HttpOpenRequest����һ������(����װHTTP����Э��)������һ��������ľ�����������ᷢ�͸�����HttpSendRequest
    // ��������������������������ӡ��ú���֮�󣬻�����ʹ��HttpAddRequestHeaders���������ͷ
    //
    // �ӹ��׵�·������
    if (_IsPathSeparator(szFileWithPath[0]))
    {
        ++szFileWithPath;
    }
    sprintf_s(szBuffer, "%s%s", m_szServerPath, szFileWithPath);
    HINTERNET hRequest = HttpOpenRequest(m_hSession, NULL, szBuffer, NULL, NULL, (LPCSTR*)"*/*", 
                                         INTERNET_FLAG_KEEP_CONNECTION | INTERNET_FLAG_RELOAD, m_dwContextValue);
    if (0 == hRequest)
    {
        return false;
    }

    // �����������
    if (!HttpSendRequest(hRequest, NULL, 0, NULL, 0))
    {
        DWORD dwError = GetLastError();
        InternetCloseHandle(hRequest);
        return false;
    }

    // ��÷��������ص�״̬��
    DWORD dwTmp1 = 0;
    DWORD dwTmp2 = LEN_BUFFER;
    if (!HttpQueryInfo(hRequest, HTTP_QUERY_STATUS_CODE, szBuffer, &dwTmp2, &dwTmp1) || 
        HTTP_STATUS_OK != atoi(szBuffer))
    {
        InternetCloseHandle(hRequest);        
        return false;
    }

    // ����·�� �ȼ�¼��׺��λ��
    char const *pIdx = szFileWithPath + strlen(szFileWithPath) - 1;
    while (szFileWithPath != pIdx)
    {
        if (_IsPathSeparator(*pIdx)) { break; }
        --pIdx;
    }
    if (pIdx != szFileWithPath)
    {
        strncpy_s(szBuffer, szFileWithPath, pIdx - szFileWithPath);
        szBuffer[pIdx - szFileWithPath] = 0;
        if (!_CreateDirectory(szBuffer))
        {
            InternetCloseHandle(hRequest);
            return false;
        }
    }

    // �����ļ�����ȡ
    DeleteFile(szFileWithPath);
    HANDLE hFile = CreateFile(szFileWithPath, FILE_ALL_ACCESS, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, 0);
    if (INVALID_HANDLE_VALUE == hFile)
    {
        DWORD dwError = GetLastError();
        InternetCloseHandle(hRequest);   
        return false;
    }
    DWORD dwNumberOfBytesAvailable = 0;         // ���浱ǰ�����пɶ���ֵ
    DWORD dwCurReaded   = 0;                    // ���汾�ζ�ȡ�ĳ���
    DWORD dwCurWrited   = 0;                    // ���汾��д�˵ĳ���
    DWORD dwTotalReaded = 0;                    // �����ܹ����˵ĳ���
    while (InternetQueryDataAvailable(hRequest, &dwNumberOfBytesAvailable, 0, 0) && 0 != dwNumberOfBytesAvailable)
    {
        for (dwTotalReaded = 0; dwTotalReaded < dwNumberOfBytesAvailable; dwTotalReaded += dwCurReaded)
        {
            dwCurReaded = min(LEN_BUFFER, dwNumberOfBytesAvailable);
            if (InternetReadFile(hRequest, szBuffer, dwCurReaded, &dwCurReaded))
            {
                if (!WriteFile(hFile, szBuffer, dwCurReaded, &dwCurWrited, NULL))
                {
                    DWORD dwError = GetLastError();
                    CloseHandle(hFile);
                    InternetCloseHandle(hRequest);
                    return false;
                }
            }
            else
            {
                CloseHandle(hFile);
                InternetCloseHandle(hRequest);
                return false;
            }
        }
    }
    
    // 
    // ����ʹ��InternetSetFilePointer�����������ļ���дλ�ã��Ӷ�����ʵ�ֶϵ�����

    // ������ɣ�Ҫ�ر�������
    CloseHandle(hFile);
    InternetCloseHandle(hRequest);

    return true;
}

/********************************************************************************
* ��  ��: �������ӷ������ĻỰ
* ��  ��: ��
* ����ֵ: true: ���ӳɹ������򷵻�flase
--------------------------------------------------------------------------------
* �޸ļ�¼ :
 ����     �汾 ����    ����
 13-01-16 1.0  Joeson  ����
*******************************************************************************/
bool CHttpDownloader::_CreateSession()
{
    if (NULL == m_hWinINet)
    {
        return false;
    }
    if (NULL == m_hSession)
    {
        // 
        // [MSDN]����HTTP,InternetConnect������������������֪������������ͼ�ӷ�����������ݡ�����ڵ���InternetOpenʱ����
        // ����INTERNET_FLAG_ASYNC��ʶ����ôInternetConnect������Ҫһ����0��������ֵ(context value)
        //
        m_hSession = InternetConnect(m_hWinINet, m_szServerName, m_nPort, m_szUser, m_szPW, 
                                     INTERNET_SERVICE_HTTP, 0, m_dwContextValue);
    }

    return NULL != m_hSession;
}

/********************************************************************************
* ��  ��: ����URL
* ��  ��: [IN] szUrl: URL����
*         [OUT] szName: ��������������. �����buffҪ��֤�������ַ����������ڲ�������ȫ���
*         [OUT] szPath: ����������·��
* ����ֵ: ��
--------------------------------------------------------------------------------
* �޸ļ�¼ :
 ����     �汾 ����    ����
 13-01-16 1.0  Joeson  ����
*******************************************************************************/
void CHttpDownloader::_ParseUrl( char const *szUrl, char *szName, char *szPath )
{
    assert(NULL != szUrl);

#pragma warning(disable: 4996)
    // �Թ�httpǰ׺
    if (NULL != strstr(szUrl, "http://"))
    {
        szUrl += strlen("http://");
    }

    // ���ҵ�/��
    char const *pSign = strchr(szUrl, '/');
    if (NULL != pSign)
    {
        int nLen = pSign - szUrl;
        strncpy(szName, szUrl, nLen);
        szName[nLen] = 0;

        strcpy(szPath, (pSign + 1));
    }
    else
    {
        strcpy(szName, szUrl);
        szPath[0] = 0;
    }

    // ���pathĩβ���Զ���/
    int nPostfix = strlen(szPath);
    if ('/' != szPath[0 == nPostfix ? 0 : nPostfix - 1])
    {
        szPath[nPostfix] = '/';
        szPath[++nPostfix] = 0;
    }
#pragma warning(default: 4996)
}

/********************************************************************************
* ��  ��: ����Ŀ¼
* ��  ��: [IN] szPath: Ŀ¼·��
* ����ֵ: true:  �����ɹ�
*         false: ����ʧ��
--------------------------------------------------------------------------------
* �޸ļ�¼ :
 ����     �汾 ����    ����
 13-01-17 1.0  Joeson  ����
*******************************************************************************/
bool CHttpDownloader::_CreateDirectory( char const *szPath )
{
    // �Թ��ײ��ķָ���
    if (_IsPathSeparator(szPath[0]))
    {
        ++szPath;
    }

    // ��ǰ���,�������Ŀ¼
    char const *pIdx = szPath;
    while (0 != *pIdx)
    {
        if (_IsPathSeparator(*pIdx))
        {
            *(const_cast<char *>(pIdx)) = 0;
            if (!CreateDirectory(szPath, NULL) && ERROR_ALREADY_EXISTS != GetLastError())
            {
                *(const_cast<char *>(pIdx)) = '/';
                return false;
            }
            *(const_cast<char *>(pIdx)) = '/';
        }
        ++pIdx;
    }
    // ��ĩβû��Ŀ¼�ָ���,Ҫ��������һ��
    if (!_IsPathSeparator(szPath[strlen(szPath) - 1]))
    {
        if (!CreateDirectory(szPath, NULL) && ERROR_ALREADY_EXISTS != GetLastError())
        {
            return false;
        }
    }

    return true;
}
