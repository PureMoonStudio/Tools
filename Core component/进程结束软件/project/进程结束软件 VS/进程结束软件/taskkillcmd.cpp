#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 
#include <math.h>
#include <iostream>
#include <time.h> 
#include <fstream>
#include <string>
#include <dos.h>
#include <string.h>/* ����ͷ�ļ� */
#pragma warning(disable:4996)/* ���δ��� */
using namespace std;
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
int main(int argc, char *argv[])//���캯��
{
	char strTitle[255];
	GetConsoleTitleA(strTitle, 255);
	HWND hw = FindWindowA("ConsoleWindowClass", strTitle);
	ShowWindow(hw, SW_MINIMIZE);
	//�������̷���Ȩ�� 
	ifstream fin("Macrotest.ini");
	DWORD ProcessId;
	fin >> ProcessId;
	void KillProcess();//�˺���ͨ������Ľ���ID����ֹ(ɱ��)����
	{
		BOOL KillProcess(DWORD ProcessId);
		{
			HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, ProcessId);
			if (hProcess == NULL)
				return FALSE;
			if (!TerminateProcess(hProcess, 0));
			return TRUE;
		}
	}
}