#define _CRT_SECURE_NO_DEPRECATE
#pragma warning(disable:4996)
#pragma warning(disable:4244)
#pragma warning(disable:4046)
#define COMMAND(NAME) {#NAME,NAME##_command}
#define PRINT(NAME) printf("token"#NAME"=%d\n", token##NAME)
#include <stdio.h>          /*����ͷ�ļ�*/
#include <stdlib.h> 
#include <windows.h> 
#include <math.h>
#include <iostream>
#include <time.h> 
#include <winioctl.h>
#include <dos.h> 
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <aclapi.h>
#include <iostream>
#include <time.h> 
#include <dos.h>
#include <conio.h>
#include <cmath>
#include <string.h>
#include <conio.h>
#include <cmath>            /*����ͷ�ļ�*/
using namespace std;//��ʼ���ڴ������ռ�
int main()
{
	int T3 = 0;
	system("cls");
	printf("��QQ������Ϣ��ݼ�ΪENTER����1����������2 ");
	int N;
	cin >> N;
	if (N == 1)
	{
		printf("��������Ҫˢ���Ĵ����� ");
		int T1;
		std::cin >> T1;
		int T2 = 1;
		Sleep(5000);
		while (T2 <= T1)
		{
			++T2;
			Sleep(80);//Simulation of quiet
			keybd_event(0x11, 0, 0, 0);// press ctrl
			keybd_event(0x56, 0, 0, 0); // press v
			keybd_event(0x56, 0, 2, 0); //release v
			keybd_event(0x11, 0, 2, 0); //release ctrl   
			keybd_event(VK_RETURN, 0, 0, 0);
			keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		}
	}
	else if (N == 2)
	{
		printf("��������Ҫˢ���Ĵ����� ");
		int T1;
		std::cin >> T1;
		int T2 = 1;
		Sleep(5000);
		while (T2 <= T1)
		{
			++T2;
			Sleep(80);//Simulation of quiet
			keybd_event(0x11, 0, 0, 0);// press ctrl
			keybd_event(0x56, 0, 0, 0); // press v
			keybd_event(0x56, 0, 2, 0); //release v
			keybd_event(0x11, 0, 2, 0); //release ctrl   
			keybd_event(0x11, 0, 0, 0);// press ctrl
			keybd_event(VK_RETURN, 0, 0, 0);//����ENTER
			keybd_event(0x56, 0, 2, 0); //release v
			keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);//����ENTER
		}
	}
}