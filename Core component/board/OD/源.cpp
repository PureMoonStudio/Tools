// Test Console.cpp : �������̨Ӧ�ó������ڵ㡣

#define _CRT_SECURE_NO_WARNINGS
#include "HttpDownloader.h"
#include <Windows.h>
#include <iostream>
#include <shellapi.h>
#include <fstream>
#include <cassert>
#include <string>
using namespace std;

/*��������*/
//��MSDN��CSDN���иı�
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
	COORD coordScreen = { 0, 0 };//�����������귵�ص���Ļ���Ͻ�����
	BOOL bSuccess;
	DWORD cCharsWritten;
	CONSOLE_SCREEN_BUFFER_INFO csbi;//���滺������Ϣ
	DWORD dwConSize;//��ǰ�����������ɵ��ַ���
	bSuccess = GetConsoleScreenBufferInfo(hConsole, &csbi);//��û�������Ϣ
	PERR(bSuccess, "GetConsoleScreenBufferInfo");
	dwConSize = csbi.dwSize.X * csbi.dwSize.Y;//�����������ַ���Ŀ
	//�ÿո���仺����
	bSuccess = FillConsoleOutputCharacter(hConsole, (TCHAR)' ', dwConSize, coordScreen, &cCharsWritten);
	PERR(bSuccess, "FillConsoleOutputCharacter");
	bSuccess = GetConsoleScreenBufferInfo(hConsole, &csbi);//��û�������Ϣ
	PERR(bSuccess, "ConsoleScreenBufferInfo");
	//��仺��������
	bSuccess = FillConsoleOutputAttribute(hConsole, csbi.wAttributes, dwConSize, coordScreen, &cCharsWritten);
	PERR(bSuccess, "FillConsoleOutputAttribute");
	//��귵����Ļ���Ͻ�����
	bSuccess = SetConsoleCursorPosition(hConsole, coordScreen);
	PERR(bSuccess, "SetConsoleCursorPosition");
	return;
}//Ҫ���ô˺���������clrscr()����.

void main()
{
	void HideCursor();//ȡ�������˸
	{
		CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	}
	system("cls");
	printf("�����ĵȴ�...");
	Sleep(2000);
	system("cls");
	CHttpDownloader dl;
	bool
		
		isSuc = dl.Connect("toolsbox.p-m.studio", 80);  //�����ַ�Ƿ����---��
	isSuc = dl.Download("/board.txt");  //����
	std::cout << "�������������������� ������������������������������������������������������" << std::endl;
	std::cout << "�ǳ�ʼ��-������ �� " << "��-----�����-----��" << (isSuc ? "�ǽ�����ɹ����ظ��£����Զ���װ��" : "��          ���|�޸���         ��") << std::endl;
	std::cout << "�������������������� ������������������������������������������������������" << std::endl;  //��һ�������������
	//-------------�ָ���------------------
	std::cout << "����������������������������������������������������������������������������" << std::endl;
	std::cout << "����������������������������������������������������������������������������" << std::endl;
	//-------------�ָ���------------------
	//�ڶ����������� �����¼�¼�� ������ʽ| UpdataLog-LV X.X.X.X.txt  
	isSuc = dl.Connect("up.lyc.science", 80);  //�����ַ�Ƿ����---��
	isSuc = dl.Download("/toolsbox/UpdataLogLV1.1.4.txt"); //����
	std::cout << "�������������������� ������������������������������������������������������" << std::endl;
	std::cout << "�ǳ�ʼ��-�����־ �� " << "��-----�����-----��" << (isSuc ? "�ǽ�����ɹ�������־�����Զ��򿪩�" : "��          ���|����־         ��") << std::endl;
	std::cout << "�������������������� ������������������������������������������������������" << std::endl;  //��һ�������������
	std::cout << "                         ��----------------��                         " << std::endl;
	std::cout << "                         �����������Զ��򿪡�                         " << std::endl;
	std::cout << "                         �����������Զ������                         " << std::endl;
	std::cout << "                         ��----------------��                         " << std::endl;
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
-- \\|// --..----- \\|//.--         ���汣�ҳɹ�����
--- \|/--..---.---- \|/---.                         2017��8��3��22��46�� TZY
--- =&= ---..------ =&= ---
--- /|\ --------.---/|\ -.-
}
*/
