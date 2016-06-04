#include<Windows.h>
#include<stdio.h>
int main()
{
	system("title 小时钟");
	SYSTEMTIME sys;
	while (1)
	{
		system("cls");
		GetLocalTime(&sys);
		printf("前面为日期,提示：后面的时间从左到右依次为小时，分钟，毫秒。（无秒数）\n");
		printf("%4d/%02d/%02d %02d:%02d:%02d.%3d\n", sys.wYear, sys.wMonth, sys.wDay, sys.wHour, sys.wMinute, sys.wMilliseconds);
		Sleep(1);
	}
	return 1;
}