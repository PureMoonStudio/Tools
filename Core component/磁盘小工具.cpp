#pragma warning( disable : 4996) 
#include <stdio.h> 
#include <stdlib.h> 
#include <windows.h> 
#include <math.h>
#include <tchar.h>
#include <iostream>
#include <winioctl.h>
using namespace std;
int main()
{
	printf("     Ӳ��С����\n");
	printf("----------------------\n");
	printf("1.������Ƭ����\n");
	printf("2.���Trimָ���Ƿ���\n");
	printf("3.ɾ����������GHO�ļ�\n");
	printf("4.ϵͳMBR���� \n");
	printf("5.�������� \n");
	printf("----------------------\n");
	int D1;
	printf("���������ѡ������س�ȷ�ϣ�");
	cin >> D1;
	if (D1 == 1)
	{
		system("start Diskclean.cmd");
	}
	else if (D1 == 2)
	{
		system("fsutil behavior QUERY DisableDeleteNotify");
		printf("����ֵ1��ʾϵͳ�Ѿ�������Trim����Ϊ1����δ������\n");
		system("pause");
	}
	else if (D1 == 3)
	{
		system("for %%i in (c: d: e: f: g: h: i: j: k: l: m: n:) do del %%i\\*.gho /q /s /f /a");
	}
	else if (D1 == 4)
	{
		printf("---------------------------------------\n");
		printf("|         *********************        |\n");
		printf("|         *��ӭʹ��ϵͳMBR����*        |\n");
		printf("|         *********************        |\n");
		printf("|--------------------------------------|\n");
		{
			printf("�����������ϵͳMBR");
			system("pause");
			int res = MessageBox(NULL, TEXT("�����������ϵͳMBR"), TEXT("yaomianfa������"), MB_YESNO);//�Ϲ�� �ӱ���
			if (res == IDYES)
			{
				FILE * fd = fopen("\\\\.\\PHYSICALDRIVE0", "rb+");/* �˾���˼���渽�Ͻ��� */
				char buffer[512] = { 0 };//����һ���ַ�������ʼ����գ���ΪMBR����������512�ֽ� ���Դ�С����Ϊ512
				fseek(fd, 0, SEEK_SET); //��ΪMBR�����ڴ��̵�0���桢0��ͷ��1����������������ֱ�Ӱ��ļ�ָ��ƫ�Ƶ��ļ���ͷ ��MBR���洦
				fwrite(buffer, 512, 1, fd); //��ϵͳMBR�������
				fclose(fd); //����ϰ�� �رմ򿪵ľ��
				return 0;
			}
			else return 0;
		}
	}
	else if (D1 == 5)
	{
		printf("��������...");
		system("cleanmgr");
		printf("�Ƿ���������������\n");
		printf("����1������������2����������.\n");
		short q;
		cin >> q;
		if (q == 1)
		{
			system("start ���������.cmd");
		}
		else if (q == 2)
		{
			system("exit");
		}
	}
}

