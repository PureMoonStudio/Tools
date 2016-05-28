/********************************************************************************
* ��    Ȩ: Copyright (c) Joeson. All rights reserved
* ģ �� ��: ��
* �� �� ��: HttpDownloader.h
* �����ļ�: HttpDownloader.cpp
* ��    ��: ����WinINetʵ��http������
* ��    ע: 
--------------------------------------------------------------------------------
* �޸ļ�¼ :
 ����     �汾  ����    ����
 13-01-16 1.0   Joeson  ����
*******************************************************************************/
#pragma once

#ifndef HINTERNET
typedef void *HINTERNET;
#endif
#ifndef INTERNET_DEFAULT_HTTP_PORT
#define INTERNET_DEFAULT_HTTP_PORT 80
#endif

class CHttpDownloader
{
    static int const LEN_SERVNAME = 128;            // ���������ֳ���
    static int const LEN_SERVPATH = 256;            // ��������·��
    static int const LEN_USERNAME = 64;             // �û�������
    static int const LEN_PW       = 64;             // ���볤��
public:
    CHttpDownloader();
    ~CHttpDownloader();

    bool    Connect(char const *szServer, int nPort = INTERNET_DEFAULT_HTTP_PORT, 
                    char const *szUser = 0, char const *szPw = 0);          // ���ӵ�������
    bool    Download(char const *szFileWithPath);                           // �����ļ�

private:
    bool    _CreateSession();                       // �������ӷ������ĻỰ
    void    _ParseUrl(char const *szUrl, char *szName, char *szPath);       // ����URL
    bool    _CreateDirectory(char const *szPath);   // ����Ŀ¼

    inline bool _IsPathSeparator(char chr);         // �ж��ַ��Ƿ���·���ָ���

private:
    HINTERNET       m_hWinINet;                     // WinInet�ľ��
    HINTERNET       m_hSession;                     // ���ӵľ��
    char            m_szServerName[LEN_SERVNAME];   // ��������
    char            m_szServerPath[LEN_SERVPATH];   // ������·��   �����������Ĺ�ϵ: http://[��������]/[������·��]
    char            m_szUser[LEN_USERNAME];         // �û���
    char            m_szPW[LEN_PW];                 // ����
    int             m_nPort;                        // �������˿�
    unsigned const  m_dwContextValue;               // context value
};




// �ж��ַ��Ƿ���·���ָ���
bool CHttpDownloader::_IsPathSeparator(char chr)
{
    return '\\' == chr || '/' == chr;
}