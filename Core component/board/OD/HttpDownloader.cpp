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
* 功  能: 连接到服务器
* 参  数: [IN] szServer: 服务器路径 (注意:不需要http://前缀,如:http://www.baidu.com/soft,只传www.baidu.com/soft即可)
*         [IN] nPort: 端口      默认为80
*         [IN] szUser: 用户名   默认为空
*         [IN] szPw: 密码       默认为空
* 返回值: : true: 连接成功。否则返回flase
--------------------------------------------------------------------------------
* 修改记录 :
 日期     版本 作者    内容
 13-01-16 1.0  Joeson  创建
*******************************************************************************/
bool CHttpDownloader::Connect( char const *szServer, int nPort /*= 80*/, char const *szUser /*= NULL*/, char const *szPw /*= NULL*/ )
{
    assert(NULL != szServer && 0 != nPort);

    if (0 == m_hWinINet)
    {
        // [MSDN] 在使用WinINet函数之前, 程序应该使用InternetAttemptConnect函数来尝试连接到网络。该函数会检测网络是否存在，
        // 若不存在则会打开拨号面板
        if (ERROR_SUCCESS != InternetAttemptConnect(0))
        {
            return false;
        }

        // 检查网站是否通畅
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
    // [MSDN]为了高效率,程序使用HTTP协议应该尽量少地调用InternetConnect，避免每次传输请求都调用这个函数，当用户向先前请
    // 求过的服务器请求数据时，原来的会话ID依旧可用.
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
* 功  能: 从服务器下载文件
* 参  数: [IN] szFileWithPath: 服务器文件名(含路径)
* 返回值: 无
--------------------------------------------------------------------------------
* 修改记录 :
 日期     版本 作者    内容
 13-01-16 1.0  Joeson  创建
*******************************************************************************/
bool CHttpDownloader::Download( char const *szFileWithPath )
{
    // 网络未初始化
    if (NULL == m_hWinINet || NULL == m_hSession)
    {
        return false;
    }

    DWORD const LEN_BUFFER = 8192;              // 该值是调试时观察InternetQueryDataAvailable的NumberOfBytes返回值得来的
    static char szBuffer[LEN_BUFFER] = {};
    szBuffer[0] = 0;

    //
    // [MSDN]HttpOpenRequest开启一个请求(会组装HTTP请求协议)并返回一个该请求的句柄。但它不会发送该请求，HttpSendRequest
    // 函数发送请求并与服务器建立连接。该函数之后，还可以使用HttpAddRequestHeaders了添加请求头
    //
    // 掠过首的路径符号
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

    // 向服务器请求
    if (!HttpSendRequest(hRequest, NULL, 0, NULL, 0))
    {
        DWORD dwError = GetLastError();
        InternetCloseHandle(hRequest);
        return false;
    }

    // 获得服务器返回的状态码
    DWORD dwTmp1 = 0;
    DWORD dwTmp2 = LEN_BUFFER;
    if (!HttpQueryInfo(hRequest, HTTP_QUERY_STATUS_CODE, szBuffer, &dwTmp2, &dwTmp1) || 
        HTTP_STATUS_OK != atoi(szBuffer))
    {
        InternetCloseHandle(hRequest);        
        return false;
    }

    // 创建路径 先记录后缀名位置
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

    // 创建文件并读取
    DeleteFile(szFileWithPath);
    HANDLE hFile = CreateFile(szFileWithPath, FILE_ALL_ACCESS, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, 0);
    if (INVALID_HANDLE_VALUE == hFile)
    {
        DWORD dwError = GetLastError();
        InternetCloseHandle(hRequest);   
        return false;
    }
    DWORD dwNumberOfBytesAvailable = 0;         // 保存当前网络中可读的值
    DWORD dwCurReaded   = 0;                    // 保存本次读取的长度
    DWORD dwCurWrited   = 0;                    // 保存本次写了的长度
    DWORD dwTotalReaded = 0;                    // 保存总共读了的长度
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
    // 可以使用InternetSetFilePointer函数来设置文件读写位置，从而可以实现断点续传

    // 下载完成，要关闭请求句柄
    CloseHandle(hFile);
    InternetCloseHandle(hRequest);

    return true;
}

/********************************************************************************
* 功  能: 创建链接服务器的会话
* 参  数: 无
* 返回值: true: 连接成功。否则返回flase
--------------------------------------------------------------------------------
* 修改记录 :
 日期     版本 作者    内容
 13-01-16 1.0  Joeson  创建
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
        // [MSDN]对于HTTP,InternetConnect并不会立即建立连接知道其他函数试图从服务器获得数据。如果在调用InternetOpen时，传
        // 递了INTERNET_FLAG_ASYNC标识，那么InternetConnect函数需要一个非0的上下文值(context value)
        //
        m_hSession = InternetConnect(m_hWinINet, m_szServerName, m_nPort, m_szUser, m_szPW, 
                                     INTERNET_SERVICE_HTTP, 0, m_dwContextValue);
    }

    return NULL != m_hSession;
}

/********************************************************************************
* 功  能: 解析URL
* 参  数: [IN] szUrl: URL链接
*         [OUT] szName: 传出服务器名字. 传入的buff要保证能容下字符串，函数内部不做安全检查
*         [OUT] szPath: 传出服务器路径
* 返回值: 无
--------------------------------------------------------------------------------
* 修改记录 :
 日期     版本 作者    内容
 13-01-16 1.0  Joeson  创建
*******************************************************************************/
void CHttpDownloader::_ParseUrl( char const *szUrl, char *szName, char *szPath )
{
    assert(NULL != szUrl);

#pragma warning(disable: 4996)
    // 略过http前缀
    if (NULL != strstr(szUrl, "http://"))
    {
        szUrl += strlen("http://");
    }

    // 查找到/符
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

    // 检查path末尾，自动补/
    int nPostfix = strlen(szPath);
    if ('/' != szPath[0 == nPostfix ? 0 : nPostfix - 1])
    {
        szPath[nPostfix] = '/';
        szPath[++nPostfix] = 0;
    }
#pragma warning(default: 4996)
}

/********************************************************************************
* 功  能: 创建目录
* 参  数: [IN] szPath: 目录路径
* 返回值: true:  创建成功
*         false: 创建失败
--------------------------------------------------------------------------------
* 修改记录 :
 日期     版本 作者    内容
 13-01-17 1.0  Joeson  创建
*******************************************************************************/
bool CHttpDownloader::_CreateDirectory( char const *szPath )
{
    // 略过首部的分隔符
    if (_IsPathSeparator(szPath[0]))
    {
        ++szPath;
    }

    // 从前向后,创建逐个目录
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
    // 若末尾没有目录分隔符,要单独创建一次
    if (!_IsPathSeparator(szPath[strlen(szPath) - 1]))
    {
        if (!CreateDirectory(szPath, NULL) && ERROR_ALREADY_EXISTS != GetLastError())
        {
            return false;
        }
    }

    return true;
}
