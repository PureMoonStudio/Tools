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
	//system("rd /s /q Tools");
	system("cls");
	printf("请耐心等待...");
	Sleep(2000);
	system("cls");
    CHttpDownloader dl;
    bool
		//第一个下载任务 “主程序”  命名格式| ToolsBoxInstaller-LV X.X.X.X.exe
		isSuc = dl.Connect("www.eternity.pub", 80);  //检测网址是否存在---↓
	isSuc = dl.Download("/Tools/tool/ToolsBoxInstallerLV1.1.4.exe");  //下载
	std::cout << "┏━━━━━━━━┓ ┏━━━━━━━━┓┏━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┣初始化-检查更新 ┫ " << "┣-----检测中-----┫" << (isSuc ? "┣结果：成功下载更新，将自动安装┫" : "┣          结果|无更新         ┫") << std::endl;
	std::cout << "┗━━━━━━━━┛ ┗━━━━━━━━┛┗━━━━━━━━━━━━━━━┛" << std::endl;  //第一个下载任务结束
	//-------------分割线------------------
	std::cout << "▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲▲" << std::endl;
	std::cout << "▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼" << std::endl;
	//-------------分割线------------------
	//第二个下载任务 “更新记录” 命名格式| UpdataLog-LV X.X.X.X.txt  
	isSuc = dl.Connect("www.eternity.pub", 80);  //检测网址是否存在---↓
	isSuc = dl.Download("/Tools/Log/UpdataLogLV1.1.4.txt"); //下载
	std::cout << "┏━━━━━━━━┓ ┏━━━━━━━━┓┏━━━━━━━━━━━━━━━┓" << std::endl;
	std::cout << "┣初始化-检测日志 ┫ " << "┣-----检测中-----┫" << (isSuc ? "┣结果：成功下载日志，将自动打开┫" : "┣          结果|无日志         ┫") << std::endl;
	std::cout << "┗━━━━━━━━┛ ┗━━━━━━━━┛┗━━━━━━━━━━━━━━━┛" << std::endl;  //第一个下载任务结束
	std::cout << "                         ◇----------------◇                         " << std::endl;
	std::cout << "                         ◇如有升级自动打开◇                         " << std::endl;
	std::cout << "                         ◇若无升级自动进入◇                         " << std::endl;
	std::cout << "                         ◇----------------◇                         " << std::endl;

	Sleep(5000);

	//判断是否有安装包
	FILE *fp1;//赋值一个打开文件指针
	if ((fp1 = fopen("Tools//tool//ToolsBoxInstallerLV1.1.4.exe", "r")) != NULL) //if..else...判断语句.如果fp1文件指针找到文件名为ToolsBoxInstaller-LV 1.1.3.exe的程序则执行下面的代码.
	{
		int res = MessageBox(NULL, TEXT("是否安装该程序的更新版本？"), TEXT("更新程序的提醒"), MB_YESNO);//定义一个数值为res，并弹出窗口
		if (res == IDYES)  //如果res数值为IDYES则执行下列代码
		{
			PROCESS_INFORMATION ProcessInfo;
			STARTUPINFO StartupInfo; //This is an [in] parameter
			ZeroMemory(&StartupInfo, sizeof(StartupInfo));
			StartupInfo.cb = sizeof StartupInfo; //Only compulsory field
			if (CreateProcess("Tools//tool//ToolsBoxInstallerLV1.1.4.exe", NULL, NULL, NULL, FALSE, 0, NULL, NULL, &StartupInfo, &ProcessInfo))
			{
				WaitForSingleObject(ProcessInfo.hProcess, INFINITE);
				CloseHandle(ProcessInfo.hThread);
				CloseHandle(ProcessInfo.hProcess);
			}
			else
				MessageBox(NULL, "The process could not be started", NULL, NULL);
		}
		else exit(0);   //如果res数值不是IDYES则退出
	}
	else //if..else...判断语句.如果fp1文件指针未找到文件名为ToolsBoxInstaller-LV 1.1.3.exe的文件则执行下面的代码.
	{
		MessageBoxA(NULL, "暂时未发现更新安装包！", "更新安装包模块", MB_OK);
	}
}
/*
.....@---------------@
--@ @ @ --------- @ @ @ --
.@ @\@/@ @-------@ @\@/@ @.
.\@|@|@|@/-....--\@|@|@|@/.
. \\\|/// --..--- \\\|/// -
-- \\|// --..----- \\|//.--         佛祖保我成功编译
--- \|/--..---.---- \|/---.                         2015年9月16日18:25:53 LYC
--- =&= ---..------ =&= ---
--- /|\ --------.---/|\ -.-
}
*/
