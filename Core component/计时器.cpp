#include <stdio.h> 
#include <stdlib.h> 
#include <windows.h> 
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:4244)
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
	cout << "\n\n\n\n\n\n 请单击\"Enter\"键开始或停止:\n";
	clock_t start, end, current;
	cin.get();
	start = clock();
	cout << "正在计时中.......\n\n"
		<< "已用时: \n";
	int i = 0;
	fflush(stdin);
	while (!_kbhit()) //kbhit()库函数的作用是检测键盘是否有键按下 
	if (current = (clock() - start) / CLOCKS_PER_SEC == i)
		cout << i++ << "秒\b\b\b\b\b\b\b\b\b";
	end = clock();
	float time = (end - start) / CLOCKS_PER_SEC;
	cout << "你所用的时间是: " << time << " 秒" << endl;
	getch();//将程序暂停 
	system("pause");
}