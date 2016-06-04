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
	system("cls");
	printf("这个程序可以将FAT32磁盘格式转为NIFS格式！\n");
	printf("由于FAT32无法支持单个4GB以上的文件所以建议转换！\n");
	printf("转换不会损伤你的文件！但最好备份数据");
	system("set /p A=请输入你要转换的盘符:");
	system("Convert %A%/fs:ntfs");
	printf("成功！");
	system("pause");
}