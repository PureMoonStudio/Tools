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
	printf("���������Խ�FAT32���̸�ʽתΪNIFS��ʽ��\n");
	printf("����FAT32�޷�֧�ֵ���4GB���ϵ��ļ����Խ���ת����\n");
	printf("ת��������������ļ�������ñ�������");
	system("set /p A=��������Ҫת�����̷�:");
	system("Convert %A%/fs:ntfs");
	printf("�ɹ���");
	system("pause");
}