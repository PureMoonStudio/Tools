#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:4244)
#pragma warning(disable:4046)
#pragma warning(disable:4060)
#pragma warning(disable:4129)
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
	system("title ���ý��̿���̨");
A:
	printf("|-----------------------------------------------------|\n");
	printf("|                   ���ý��̿���̨                    |\n");
	printf("|-----------------------------------------------------|\n");
	printf("|            *******************************          |\n");
	printf("|            *     1.�������������        *          |\n");
	printf("|            *     2.�������������        *          |\n");
	printf("|            *******************************          |\n");
	printf("|-----------------------------------------------------|\n");
	printf("����������ѡ������س�������");
	short num1;
	cin >> num1;
	if (num1 == 1)
	{
		system("start RENwu.vbs");
		system("pause");
	}
	else if (num1 == 2)
	{
		system("taskkill /f /im wscript.exe");
		system("pause");
	}
	else if (num1 != 1 && num1 != 2 )
	{
		printf("ERROR!\n");
		printf("��������ȷ��ѡ����������س���");
		Sleep(3000);
		system("cls");
		goto A;
	}
}