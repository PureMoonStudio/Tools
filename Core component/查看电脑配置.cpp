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
	system("title 配置");
	printf("________________________________________________\n");
	printf("|               1.粗略查看电脑配置             |\n");
	printf("|               2.CPU-Z                        |\n");
	printf("|               3.GPU-Z                        |\n");
	printf("|               4.国际象棋测试                 |\n");
	printf("|               5.GPU计算圆周率                |\n");
	printf("|               6.CPU计算圆周率                |\n");
	printf("------------------------------------------------\n");
	short a;
	cin >> a;
	if (a == 1)
	{
		system("cls");
		printf("获取CPU资料:");
		system("wmic cpu get name,addresswidth,processorid");
		Sleep(1500);
		system("pause");
		printf("获取磁盘资料：");
		system("wmic DISKDRIVE get deviceid,Caption,size,InterfaceType");
		Sleep(1500);
		system("pause");
		printf("获取主板资料:");
		system("wmic BaseBoard get Manufacturer,Product,Version,SerialNumber");
		Sleep(1500);
		system("pause");
		printf("获取内存数:");
		system("wmic memlogical get totalphysicalmemory");
		Sleep(1500);
		system("pause");
		printf("获取屏幕分辨率:");
		system("wmic DESKTOPMONITOR where Status='ok' get ScreenHeight,ScreenWidth");
		Sleep(1500);
		system("pause");
		printf("获取分区资料：");
		system("wmic LOGICALDISK get name,Description,filesystem,size,freespace");
		Sleep(1500);
	}
	else if (a == 2)
	{
		system("start CPU.exe");
	}
	else if (a == 3)
	{
		system("start GPU.exe");
	}
	else if (a == 4)
	{
		system("start Fritz Chess Benchmark.EXE");
	}
	else if (a == 5)
	{
		system("start GPiWindows.exe");
	}
	else if (a == 6)
	{
		system("start 圆周率π计算分析程序.exe");
	}
	else if (a !=2&&a!=3&&a!=4&&a!=5&&a!=6)
	{
		printf("ERROR!");
		Sleep(2000);
	}
}