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
	system("title ����");
	printf("________________________________________________\n");
	printf("|               1.���Բ鿴��������             |\n");
	printf("|               2.CPU-Z                        |\n");
	printf("|               3.GPU-Z                        |\n");
	printf("|               4.�����������                 |\n");
	printf("|               5.GPU����Բ����                |\n");
	printf("|               6.CPU����Բ����                |\n");
	printf("------------------------------------------------\n");
	short a;
	cin >> a;
	if (a == 1)
	{
		system("cls");
		printf("��ȡCPU����:");
		system("wmic cpu get name,addresswidth,processorid");
		Sleep(1500);
		system("pause");
		printf("��ȡ�������ϣ�");
		system("wmic DISKDRIVE get deviceid,Caption,size,InterfaceType");
		Sleep(1500);
		system("pause");
		printf("��ȡ��������:");
		system("wmic BaseBoard get Manufacturer,Product,Version,SerialNumber");
		Sleep(1500);
		system("pause");
		printf("��ȡ�ڴ���:");
		system("wmic memlogical get totalphysicalmemory");
		Sleep(1500);
		system("pause");
		printf("��ȡ��Ļ�ֱ���:");
		system("wmic DESKTOPMONITOR where Status='ok' get ScreenHeight,ScreenWidth");
		Sleep(1500);
		system("pause");
		printf("��ȡ�������ϣ�");
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
		system("start Բ���ʦм����������.exe");
	}
	else if (a !=2&&a!=3&&a!=4&&a!=5&&a!=6)
	{
		printf("ERROR!");
		Sleep(2000);
	}
}