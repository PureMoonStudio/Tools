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
	system("title   ");
	printf("________________________________________________\n");
	printf("|              1.关闭系统桌面进程              |\n");
	printf("|              2.启动系统桌面进程              |\n");
	printf("|              3.关闭系统输入法进程            |\n");
	printf("|              4.启动桌面输入法进程            |\n");
	printf("|              5.系统用户助手			   	   |\n");
	printf("------------------------------------------------\n");
	short num1;
	printf("请输入您的选项后并摁回车继续：");
	cin >> num1;
	if (num1 == 1)
	{
		system("taskkill /f /im explorer.exe");
	}
	else if (num1 == 2)
	{
		system("start C:\\Windows\\explorer.exe");
		system("%systemroot%\\explorer.exe");
	}
	else if (num1 == 3)
	{
		system("taskkill /im ctfmon.exe");
	}
	else if (num1 == 4)
	{
		system("start C:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start D:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start E:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start F:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start G:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start H:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start I:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start J:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start K:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start L:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start M:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start N:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start O:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start P:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start Q:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start R:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start S:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start T:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start U:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start V:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start W:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start W:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start Y:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
		system("start W:\\Windows\\ctfmon.exe");
		keybd_event(VK_RETURN, 0, 0, 0);
		keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
	}
	else if (num1 == 5)
	{
		system("start 用户工具.bat");
	}
}