/********************************************************************************
* 版    权: Copyright (c) Joeson. All rights reserved
* 模 块 名: 略
* 文 件 名: HttpDownloader.h
* 关联文件: HttpDownloader.cpp
* 功    能: 利用WinINet实现http的下载
* 备    注: 
--------------------------------------------------------------------------------
* 修改记录 :
 日期     版本  作者    内容
 13-01-16 1.0   Joeson  创建
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
    static int const LEN_SERVNAME = 128;            // 服务器名字长度
    static int const LEN_SERVPATH = 256;            // 服务器上路径
    static int const LEN_USERNAME = 64;             // 用户名长度
    static int const LEN_PW       = 64;             // 密码长度
public:
    CHttpDownloader();
    ~CHttpDownloader();

    bool    Connect(char const *szServer, int nPort = INTERNET_DEFAULT_HTTP_PORT, 
                    char const *szUser = 0, char const *szPw = 0);          // 连接到服务器
    bool    Download(char const *szFileWithPath);                           // 下载文件

private:
    bool    _CreateSession();                       // 创建链接服务器的会话
    void    _ParseUrl(char const *szUrl, char *szName, char *szPath);       // 解析URL
    bool    _CreateDirectory(char const *szPath);   // 创建目录

    inline bool _IsPathSeparator(char chr);         // 判断字符是否是路径分隔符

private:
    HINTERNET       m_hWinINet;                     // WinInet的句柄
    HINTERNET       m_hSession;                     // 链接的句柄
    char            m_szServerName[LEN_SERVNAME];   // 服务器名
    char            m_szServerPath[LEN_SERVPATH];   // 服务器路径   这两个变量的关系: http://[服务器名]/[服务器路径]
    char            m_szUser[LEN_USERNAME];         // 用户名
    char            m_szPW[LEN_PW];                 // 密码
    int             m_nPort;                        // 服务器端口
    unsigned const  m_dwContextValue;               // context value
};




// 判断字符是否是路径分隔符
bool CHttpDownloader::_IsPathSeparator(char chr)
{
    return '\\' == chr || '/' == chr;
}