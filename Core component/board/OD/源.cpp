// Test Console.cpp : 定义控制台应用程序的入口点。

#define _CRT_SECURE_NO_WARNINGS
#include "HttpDownloader.h"
#include <Windows.h>
#include <iostream>
#include <shellapi.h>
#include <fstream>
#include <cassert>
#include <string>
using namespace std;

/*清屏函数*/
//由MSDN和CSDN进行改编
#define PERR(bSuccess, api){if(!(bSuccess)) printf("%s:Error %d from %s on line %d\n", __FILE__, GetLastError(), api, __LINE__);}
void MyCls(HANDLE);
inline void clrscr(void)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	MyCls(hStdOut);
	return;
}
void MyCls(HANDLE hConsole)
{
	COORD coordScreen = { 0, 0 };//设置清屏后光标返回的屏幕左上角坐标
	BOOL bSuccess;
	DWORD cCharsWritten;
	CONSOLE_SCREEN_BUFFER_INFO csbi;//保存缓冲区信息
	DWORD dwConSize;//当前缓冲区可容纳的字符数
	bSuccess = GetConsoleScreenBufferInfo(hConsole, &csbi);//获得缓冲区信息
	PERR(bSuccess, "GetConsoleScreenBufferInfo");
	dwConSize = csbi.dwSize.X * csbi.dwSize.Y;//缓冲区容纳字符数目
	//用空格填充缓冲区
	bSuccess = FillConsoleOutputCharacter(hConsole, (TCHAR)' ', dwConSize, coordScreen, &cCharsWritten);
	PERR(bSuccess, "FillConsoleOutputCharacter");
	bSuccess = GetConsoleScreenBufferInfo(hConsole, &csbi);//获得缓冲区信息
	PERR(bSuccess, "ConsoleScreenBufferInfo");
	//填充缓冲区属性
	bSuccess = FillConsoleOutputAttribute(hConsole, csbi.wAttributes, dwConSize, coordScreen, &cCharsWritten);
	PERR(bSuccess, "FillConsoleOutputAttribute");
	//光标返回屏幕左上角坐标
	bSuccess = SetConsoleCursorPosition(hConsole, coordScreen);
	PERR(bSuccess, "SetConsoleCursorPosition");
	return;
}//要调用此函数，请用clrscr()调用.

void main()
{
	void HideCursor();//取消光标闪烁
	{
		CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	}
	system("cls");
	printf("请耐心等待...");
	Sleep(2000);
	system("cls");
	CHttpDownloader dl;
	bool
		
		isSuc = dl.Connect("toolsbox.p-m.studio", 80);  //检测网址是否存在---↓
	isSuc = dl.Download("/board.txt");  //下载
	std::cout << "┏━━━━━━━━┓ ┏━━━━━━━━┓┏━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┣初始化-检查更新 ┫ " << "┣-----检测中-----┫" << (isSuc ? "┣结果：成功下载更新，将自动安装┫" : "┣          结果|无更新         ┫") << std::endl;
	std::cout << "┗━━━━━━━━┛ ┗━━━━━━━━┛┗━━━━━━━━━━━━━━━┛" << std::endl;  //第一个下载任务结束
	//-------------分割线------------------
	std::cout << "▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲" << std::endl;
	std::cout << "▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼" << std::endl;
	//-------------分割线------------------
	//第二个下载任务 “更新记录” 命名格式| UpdataLog-LV X.X.X.X.txt  
	isSuc = dl.Connect("up.lyc.science", 80);  //检测网址是否存在---↓
	isSuc = dl.Download("/toolsbox/UpdataLogLV1.1.4.txt"); //下载
	std::cout << "┏━━━━━━━━┓ ┏━━━━━━━━┓┏━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┣初始化-检测日志 ┫ " << "┣-----检测中-----┫" << (isSuc ? "┣结果：成功下载日志，将自动打开┫" : "┣          结果|无日志         ┫") << std::endl;
	std::cout << "┗━━━━━━━━┛ ┗━━━━━━━━┛┗━━━━━━━━━━━━━━━┛" << std::endl;  //第一个下载任务结束
	std::cout << "                         ◇----------------◇                         " << std::endl;
	std::cout << "                         ◇如有升级自动打开◇                         " << std::endl;
	std::cout << "                         ◇若无升级自动进入◇                         " << std::endl;
	std::cout << "                         ◇----------------◇                         " << std::endl;
	clrscr();
	ifstream in;
	string filename;
	filename = "board.txt";
	in.open(filename);
	char ch;
	while (!in.eof())
	{
		in.read(&ch, 1);
		cout << ch;
	}
	printf("\n");
	printf("\n");
	system("pause");
}
/*
.....@---------------@
--@ @ @ --------- @ @ @ --
.@ @\@/@ @-------@ @\@/@ @.
.\@|@|@|@/-....--\@|@|@|@/.
. \\\|/// --..--- \\\|/// -
-- \\|// --..----- \\|//.--         佛祖保我成功编译
--- \|/--..---.---- \|/---.                         2017年8月3日22点46分 TZY
--- =&= ---..------ =&= ---
--- /|\ --------.---/|\ -.-
}
*/
