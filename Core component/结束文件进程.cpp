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
	printf("---------------------------------\n");
	printf("         进程结束器              \n");
	printf("       1.常规结束进程            \n");
	printf("       2.常规结束进程树          \n");
	printf("       3.强制结束进程            \n");
	printf("       4.暴力句柄结束            \n");
	printf("---------------------------------\n");
	int Kill;
	cin >> Kill;
	if (Kill == 1)
	{
		system("start Kill1.cmd");
	}
	else if (Kill == 2)
	{
		printf("start Kill2.cmd");
	}
	else if (Kill == 3)
	{
		system("start Kill3.cmd");
	}
	else if (Kill == 4)
	{
		system("start Kill4.cmd");
	}
}