// Test Console.cpp : �������̨Ӧ�ó������ڵ㡣

#define _CRT_SECURE_NO_WARNINGS
#include "HttpDownloader.h"
#include <Windows.h>
#include <iostream>
#include <shellapi.h>


void main()
{
	void HideCursor();//ȡ�������˸
	{
		CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	}
	std::cout << "���ӷ�����-25%-";
	Sleep(1500);
	std::cout << "-50%-";
	Sleep(1500);
	std::cout << "-75%-";
	Sleep(1500);
	std::cout << "-100%-";
	Sleep(1500);
	std::cout << "***�ɹ�" << std::endl;
	system("rd /s /q Tools");
	system("cls");
	CHttpDownloader dl;
	bool
		//��һ���������� ��������  ������ʽ| ToolsBoxInstaller-LV X.X.X.X.exe
		isSuc = dl.Connect("www.eternity.pub", 80);  //�����ַ�Ƿ����---��
	isSuc = dl.Download("/Tools/Log/board.txt");  //����
	std::cout << "�������������������� ������������������������������������������������������" << std::endl;
	std::cout << "�ǳ�ʼ��-��鹫�� �� " << "��-----�����-----��" << (isSuc ? "�ǽ�����ɹ����ع��棬���Զ���ʾ��" : "��          ���|�޹���         ��") << std::endl;
	std::cout << "�������������������� ������������������������������������������������������" << std::endl;  //��һ�������������
	//-------------�ָ���------------------
	std::cout << "����������������������������������������������������������������������������" << std::endl;
	std::cout << "����������������������������������������������������������������������������" << std::endl;
	//-------------�ָ���------------------
	FILE *fp;
	char ch;
	if ((fp = fopen("Tools//Log//board.txt", "rt")) == NULL)//�ж����
	{
		printf("Cannot open file strike any key exit!");
		Sleep(5000);
		exit(1);
	}
	ch = fgetc(fp);
	while (ch != EOF)
	{
		putchar(ch);//���ļ����ж�
		ch = fgetc(fp);
	}
	fclose(fp);
	Sleep(50000);
	printf("\n");
}
