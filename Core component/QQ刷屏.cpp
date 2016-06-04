#define _CRT_SECURE_NO_DEPRECATE
#pragma warning(disable:4996)
#pragma warning(disable:4244)
#pragma warning(disable:4046)
#define COMMAND(NAME) {#NAME,NAME##_command}
#define PRINT(NAME) printf("token"#NAME"=%d\n", token##NAME)
#include <stdio.h>          /*调用头文件*/
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
#include <cmath>            /*调用头文件*/
using namespace std;//初始化内存命名空间
int main()
{
	int T3 = 0;
	system("cls");
	printf("若QQ发送消息快捷键为ENTER输入1若不是输入2 ");
	int N;
	cin >> N;
	if (N == 1)
	{
		printf("请输入你要刷屏的次数： ");
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
		printf("请输入你要刷屏的次数： ");
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
			keybd_event(VK_RETURN, 0, 0, 0);//输入ENTER
			keybd_event(0x56, 0, 2, 0); //release v
			keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);//输入ENTER
		}
	}
}