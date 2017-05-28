//Region�۵����
#pragma region name
#pragma endregion comment
//END ����  
#pragma region Region_including
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 
#include <math.h>
#include <iostream>
#include <time.h> 
#include <fstream>
#include <string>
#include <dos.h>
#include<Tlhelp32.h>
#include <string.h>/* ����ͷ�ļ� */



BOOL FindProcessPid(LPCSTR ProcessName, DWORD& dwPid);
#pragma warning(disable:4996)/* ���δ��� */

using namespace std;


//�������̷���Ȩ�� 
BOOL juesProcess_EnableDebugPriv()
{

	HANDLE hToken;
	LUID sedebugnameValue;
	TOKEN_PRIVILEGES tkp;

	if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken))
		return FALSE;
	if (!LookupPrivilegeValue(NULL, SE_DEBUG_NAME, &sedebugnameValue))
	{

		CloseHandle(hToken);
		return FALSE;

	}
	tkp.PrivilegeCount = 1;
	tkp.Privileges[0].Luid = sedebugnameValue;
	tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
	if (!AdjustTokenPrivileges(hToken, FALSE, &tkp, sizeof(tkp), NULL, NULL))
		CloseHandle(hToken);

	return TRUE;
}

#pragma region Region_clrscr()
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
}
#pragma endregion clrscr()

int main()
{
#pragma region Region_WelocmeGUI
	SetConsoleTitle("Program termination");
S :
	clrscr();
	system("cacls TEMP1.ini  /e /p everyone:f");
	clrscr();
	FILE *fp;
	if ((fp = fopen("TEMP1.ini", "r")) != NULL)
	{
		ifstream fin("TEMP1.ini");
		int numberCOLOR;
		fin >> numberCOLOR;
		HANDLE hOut;
		//  ��ȡ������ľ��
		hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		if (numberCOLOR == 1)
		{
			system("color 17");
		}
		else if (numberCOLOR == 2)
		{
			
		}
		else if (numberCOLOR == 3)
		{
			SetConsoleTextAttribute(hOut,
				BACKGROUND_GREEN |      // ǰ��ɫ_��ɫ
				BACKGROUND_INTENSITY |
				FOREGROUND_INTENSITY); // ǰ��ɫ_��ǿ
		}
		else if (numberCOLOR != 1 && numberCOLOR != 2 && numberCOLOR != 3)
		{
			exit(EXIT_FAILURE);
		}
		system("cacls TEMP1.ini /e /p administrator:n");
		system("cacls TEMP1.ini /e /p everyone:n");
		system("cacls TEMP1.ini /e /p SYSTEM:n");
		clrscr();
	}
	else
	//��ӡ�������
	printf("*************************************************************************\n");
	printf("*                       1.ʹ�ý�������������                            *\n");
	printf("*                       2.ʹ��PID��������                               *\n");
	printf("*                       3.����������ɫ                                  *\n");
	printf("*                       4.�˳��ó���                                    *\n");
	printf("*************************************************************************\n");
	printf("��"); Sleep(150);
	printf("��"); Sleep(150);
	printf("��"); Sleep(150);
	printf("��"); Sleep(150);
	printf("��"); Sleep(150);
	printf("ѡ"); Sleep(150);
	printf("��"); Sleep(150);
	printf("��");
	//END
	short int number1;//short int��Ϊshort������unsign int���׳�int)����ʡ�ڴ档��Ȼ����΢�����������ȻҪ���������Ա��������ñ��ϰ�ߡ�
	cin >> number1;
	switch (number1)
	{
#pragma endregion Region_WelocmeGUI
#pragma region Region_case1
	case 1:
	{
			  printf("������һ����������");
			  char PID;
			  char ID[2000];
			  cin >> PID;
			  sprintf(ID, "tasklist /FI \"IMAGENAME eq  %s\"", PID);
			  system(ID);//��ʱ������ȡPID������˼����ʽ����
			  printf("\n");
			  printf("�������������PID����Ҫ�����Ľ���PID��");
			  void KillProcess();//�˺���ͨ������Ľ���ID����ֹ(ɱ��)����
			  {
				  BOOL KillProcess(DWORD ProcessId);
				  {
					  DWORD ProcessId;
					  cin >> ProcessId;
					  HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, ProcessId);
					  if (hProcess == NULL)
						  return FALSE;
					  if (!TerminateProcess(hProcess, 0));
					  return TRUE;
				  }
			  }
			  break;
	}
#pragma endregion case1
#pragma region case 2
case 2:
{
		  void KillProcess();//�˺���ͨ������Ľ���ID����ֹ(ɱ��)����
		  {
			  BOOL KillProcess(DWORD ProcessId);
			  {
				  printf("��������Ҫ�����Ľ���ID��");
				  DWORD ProcessId;
				  cin >> ProcessId;
				  HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, ProcessId);
				  if (hProcess == NULL)
					  return FALSE;
				  if (!TerminateProcess(hProcess, 0));
				  return TRUE;
			  }
		  }
		  break;
}
#pragma endregion case2
#pragma region case3
	case 3:
	{
			  printf("*************************************************************************\n");
			  printf("*                       1.���װ���                                      *\n");
			  printf("*                       2.�ڵװ���                                      *\n");
			  printf("*                       3.�ڵ�����                                      *\n");
			  printf("*                       4.������һ���˵�                                *\n");
			  printf("*************************************************************************\n");
			  printf("��"); Sleep(150);
			  printf("��"); Sleep(150);
			  printf("��"); Sleep(150);
			  printf("��"); Sleep(150);
			  printf("��"); Sleep(150);
			  printf("ѡ"); Sleep(150);
			  printf("��"); Sleep(150);
			  printf("��");
			  short a1;
			  cin >> a1;
			  if (a1 == 1)
			  {
				  system("cacls TEMP1.ini  /e /p everyone:f");
				  remove("TEMP.ini");
				  short b = 1;
				  FILE *fp1;
				  fp1 = fopen("TEMP1.ini", "w");
				  fprintf(fp1, "%d",b);
				  fclose(fp1);
				  system("cacls TEMP1.ini /e /p administrator:n");
				  system("cacls TEMP1.ini /e /p everyone:n");
				  system("cacls TEMP1.ini /e /p SYSTEM:n");
				  goto S;
			  }
			  else if (a1 == 2)
			  {
				  system("cacls TEMP1.ini  /e /p everyone:f");
				  remove("TEMP.ini");
				  short b = 2;
				  FILE *fp2;
				  fp2 = fopen("TEMP1.ini", "w");
				  fprintf(fp2, "%d", b);
				  fclose(fp2);
				  system("cacls TEMP1.ini /e /p administrator:n");
				  system("cacls TEMP1.ini /e /p everyone:n");
				  system("cacls TEMP1.ini /e /p SYSTEM:n");
				  goto S;
			  }
			  else if (a1 == 3)
			  {
				  system("cacls TEMP1.ini  /e /p everyone:f");
				  remove("TEMP.ini");
				  short b = 3;
				  FILE *fp3;
				  fp3 = fopen("TEMP1.ini", "w");
				  fprintf(fp3, "%d", b);
				  fclose(fp3);
				  system("cacls TEMP1.ini /e /p administrator:n");
				  system("cacls TEMP1.ini /e /p everyone:n");
				  system("cacls TEMP1.ini /e /p SYSTEM:n");
				  goto S;
			  }
			  else if (a1 != 1 && a1 != 2 && a1 != 3)
			  {
				  goto S;
			  }
	}
#pragma endregion case3
#pragma region case4
	case 4:
	{
			  exit(EXIT_SUCCESS);
	}
#pragma endregion case4
#pragma region Region_case else
	default:
	{
		printf("����������������룡");
		Sleep(1500);
		goto S;
	}
#pragma endregion case else
	}
}