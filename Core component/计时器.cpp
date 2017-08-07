#include <iostream>  
#include<stdio.h>
#include <Windows.h> 
#include <math.h>
#include <time.h>  
#include <stdio.h> 
#include <stdlib.h> 
#include <windows.h> 
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:4244)
#include <tchar.h>
#include <time.h> 
#include<conio.h>
#include<cmath>
//#include <QFile>  
//#include <QString>  
//#include <QByteArray>  
using namespace std;
class MyTimer
{

private:
	LARGE_INTEGER large_integer;
	__int64 IntStart;
	__int64 IntEnd;
	double DobDff;
	double DobMillseconds;

public:
	MyTimer(){};

	void TimerStart()
	{
		QueryPerformanceFrequency(&large_integer);
		DobDff = large_integer.QuadPart;

		QueryPerformanceCounter(&large_integer);
		IntStart = large_integer.QuadPart;
	}

	double TimerFinish()
	{
		QueryPerformanceCounter(&large_integer);
		IntEnd = large_integer.QuadPart;
		DobMillseconds = (IntEnd - IntStart) * 1000 / DobDff; //转为ms  
		return DobMillseconds;
	}
};
int main()
{
	cout << "\n\n\n\n\n\n 请单击\"Enter\"键开始或停止:\n";
	cin.get();
	cout << "正在计时中.......\n\n";
	MyTimer timer;
	timer.TimerStart();
	long double d1 = 65.25654;
	long double e1 = 59.325665;
	int a1 = 2;
	int b1 = 3;
	int T2 = 1;
	int T1 = 91474831;
	int  i;
	double pi = 0.0, k = 1.0, t = 1.0;
	i = 1;
	while (fabs(t) >= 1e-6)
	{
		pi += t;//pi=pi+t;
		k = -k;
		i += 2;
		t = k / i;
	}
	pi *= 4;
	while (T2 <= T1)
	{
		++T2;
		int c1 = a1 + b1;
		long double f1 = d1 + e1;
		while (fabs(t) >= 1e-6)
		{
			pi += t;//pi=pi+t;
			k = -k;
			i += 2;
			t = k / i;
		}
		pi *= 4;
	}
	printf("按 Enter 键暂停计时\n");
	getchar();
	double tm = timer.TimerFinish();
	std::cout << tm << std::endl;
	system("pause");
}
