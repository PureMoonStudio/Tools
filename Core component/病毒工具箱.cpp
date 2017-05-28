#include <stdio.h> 
#include <stdlib.h> 
#include <windows.h> 
#include<math.h>
#include <tchar.h>
#include <iostream>
#include <time.h> 
#include<dos.h>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
	system("title 病毒工具箱 制作：TZY    LYC");
	void HideCursor();
	{
		CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	}
	/*printf("该功能过于危险，所以请获取密码！");
	int res = MessageBox(NULL, TEXT("是否获取密码？"), TEXT("程序的提醒"), MB_YESNO);
	if (res == IDYES)
	{
		system("start http://eternity.pub/Tools/");
		printf("请输入密码：");
		long int d;
		cin >> d;
		SYSTEMTIME sys;
		GetLocalTime(&sys);
		long int d2, d3, d4, d5, d6, d7, d8;
		d2 = sys.wYear;
		d3 = sys.wHour;
		d4 = sys.wMonth;
		d5 = sys.wMinute;
		d6 = d2*d3;
		d7 = d5*d5;
		d8 = d6 + d4 - d2 + d7;
		if (d == d8)
		{
			goto Q;
		}
		else if (d != d8)
		{
			printf("ERROE!!\n");
			Sleep(1000);
			system("cls");
			exit(1);
		}
	}
	else return 0;*/
	printf("============================================================\n");
	printf("|                      病毒分析箱                          |\n");
	printf("|----------------------------------------------------------|\n");
	printf("|                    1.文件分析                            |\n");
	printf("============================================================\n");
	printf("请输入您的选项并摁回车继续: ");
	short a;
	cin >> a;
	if (a == 1)
	{
		printf("============================================================\n");
		printf("|                    1.火眼                                |\n");
		printf("|                    2.腾讯哈勃文件分析爱系统              |\n");
		printf("|                    3.多引擎在线扫描                      |\n");
		printf("============================================================\n");
		int a1;
		cin >> a1;
		if (a1 == 1)
		{
			system("start https://fireeye.ijinshan.com/");
		}
		else if (a1 == 2)
		{
			system("start http://habo.qq.com/");
		}
		else if (a1 == 3)
		{
			system("start http://www.virscan.org/");
		}
	}
}