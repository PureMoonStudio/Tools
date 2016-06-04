// Test Console.cpp : 定义控制台应用程序的入口点。

#define _CRT_SECURE_NO_WARNINGS
#include "HttpDownloader.h"
#include <Windows.h>
#include <iostream>
#include <shellapi.h>


void main()
{
	void HideCursor();//取消光标闪烁
	{
		CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	}
	std::cout << "连接服务器-25%-";
	Sleep(1500);
	std::cout << "-50%-";
	Sleep(1500);
	std::cout << "-75%-";
	Sleep(1500);
	std::cout << "-100%-";
	Sleep(1500);
	std::cout << "***成功" << std::endl;
	system("rd /s /q Tools");
	system("cls");
	CHttpDownloader dl;
	bool
		//第一个下载任务 “主程序”  命名格式| ToolsBoxInstaller-LV X.X.X.X.exe
		isSuc = dl.Connect("www.eternity.pub", 80);  //检测网址是否存在---↓
	isSuc = dl.Download("/Tools/Log/board.txt");  //下载
	std::cout << "┏━━━━━━━━┓ ┏━━━━━━━━┓┏━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┣初始化-检查公告 ┫ " << "┣-----检测中-----┫" << (isSuc ? "┣结果：成功下载公告，将自动显示┫" : "┣          结果|无公告         ┫") << std::endl;
	std::cout << "┗━━━━━━━━┛ ┗━━━━━━━━┛┗━━━━━━━━━━━━━━━┛" << std::endl;  //第一个下载任务结束
	//-------------分割线------------------
	std::cout << "▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲" << std::endl;
	std::cout << "▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼" << std::endl;
	//-------------分割线------------------
	FILE *fp;
	char ch;
	if ((fp = fopen("Tools//Log//board.txt", "rt")) == NULL)//判断语句
	{
		printf("Cannot open file strike any key exit!");
		Sleep(5000);
		exit(1);
	}
	ch = fgetc(fp);
	while (ch != EOF)
	{
		putchar(ch);//对文件进行读
		ch = fgetc(fp);
	}
	fclose(fp);
	Sleep(50000);
	printf("\n");
}
