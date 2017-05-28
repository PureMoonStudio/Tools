//Region折叠语句
#pragma region name
#pragma endregion comment
//END 结束  
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
#include <string.h>/* 调用头文件 */



BOOL FindProcessPid(LPCSTR ProcessName, DWORD& dwPid);
#pragma warning(disable:4996)/* 屏蔽错误 */

using namespace std;


//提升进程访问权限 
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
		//  获取输出流的句柄
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
				BACKGROUND_GREEN |      // 前景色_绿色
				BACKGROUND_INTENSITY |
				FOREGROUND_INTENSITY); // 前景色_加强
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
	//打印界面语句
	printf("*************************************************************************\n");
	printf("*                       1.使用进程名结束进程                            *\n");
	printf("*                       2.使用PID结束进程                               *\n");
	printf("*                       3.更换程序颜色                                  *\n");
	printf("*                       4.退出该程序                                    *\n");
	printf("*************************************************************************\n");
	printf("请"); Sleep(150);
	printf("输"); Sleep(150);
	printf("入"); Sleep(150);
	printf("您"); Sleep(150);
	printf("的"); Sleep(150);
	printf("选"); Sleep(150);
	printf("项"); Sleep(150);
	printf("：");
	//END
	short int number1;//short int即为short，它比unsign int（俗称int)更节省内存。虽然当今微不足道，但依然要引起重视以便养成良好编程习惯。
	cin >> number1;
	switch (number1)
	{
#pragma endregion Region_WelocmeGUI
#pragma region Region_case1
	case 1:
	{
			  printf("请输入一个进程名：");
			  char PID;
			  char ID[2000];
			  cin >> PID;
			  sprintf(ID, "tasklist /FI \"IMAGENAME eq  %s\"", PID);
			  system(ID);//临时方案获取PID，正在思考正式方案
			  printf("\n");
			  printf("请根据所给出的PID输入要结束的进程PID：");
			  void KillProcess();//此函数通过传入的进程ID来终止(杀死)进程
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
		  void KillProcess();//此函数通过传入的进程ID来终止(杀死)进程
		  {
			  BOOL KillProcess(DWORD ProcessId);
			  {
				  printf("请输入您要结束的进程ID：");
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
			  printf("*                       1.蓝底白字                                      *\n");
			  printf("*                       2.黑底白字                                      *\n");
			  printf("*                       3.黑底绿字                                      *\n");
			  printf("*                       4.返回上一级菜单                                *\n");
			  printf("*************************************************************************\n");
			  printf("请"); Sleep(150);
			  printf("输"); Sleep(150);
			  printf("入"); Sleep(150);
			  printf("您"); Sleep(150);
			  printf("的"); Sleep(150);
			  printf("选"); Sleep(150);
			  printf("项"); Sleep(150);
			  printf("：");
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
		printf("输入错误，请重新输入！");
		Sleep(1500);
		goto S;
	}
#pragma endregion case else
	}
}