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
	cout << "\n\n\n\n\n\n �뵥��\"Enter\"����ʼ��ֹͣ:\n";
	clock_t start, end, current;
	cin.get();
	start = clock();
	cout << "���ڼ�ʱ��.......\n\n"
		<< "����ʱ: \n";
	int i = 0;
	fflush(stdin);
	while (!_kbhit()) //kbhit()�⺯���������Ǽ������Ƿ��м����� 
	if (current = (clock() - start) / CLOCKS_PER_SEC == i)
		cout << i++ << "��\b\b\b\b\b\b\b\b\b";
	end = clock();
	float time = (end - start) / CLOCKS_PER_SEC;
	cout << "�����õ�ʱ����: " << time << " ��" << endl;
	getch();//��������ͣ 
	system("pause");
}