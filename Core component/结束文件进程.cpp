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
	printf("         ���̽�����              \n");
	printf("       1.�����������            \n");
	printf("       2.�������������          \n");
	printf("       3.ǿ�ƽ�������            \n");
	printf("       4.�����������            \n");
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