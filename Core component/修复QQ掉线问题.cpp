#pragma warning(disable:4996)
#include <stdio.h> 
#include <stdlib.h> 
#include <windows.h> 
#include <iostream>
using namespace std;
int main()
{
	system("color 87");
	void HideCursor();
	{
		CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	}
	system("title 修复QQ掉线问题");
	int a1 = 201;
	int a2 = 187;
	int a3 = 188;
	int a4 = 200;
	int a5 = 205;
	int a6 = 186;
	printf("____________________________________________________\n");//此处为输出函数，可以输出想要的字符。
	printf("|                 修复QQ掉线问题                   |\n");
	printf("----------------------------------------------------\n");
	printf("|                1.开始检查问题                    |\n");
	printf("|               2.查看上次检查结果                 |\n");
	printf("|--------------------------------------------------|\n");
	short num1;
	cin >> num1;
	if (num1 == 1)
	{
		system("cls");
		printf("即将检查网络...\n");
		printf("3\n");
		Sleep(1000);
		printf("2\n");
		Sleep(1000);
		printf("1\n");
		Sleep(1000);
		printf("0");
		system("cls");
	Q:
		system("ping 180.97.33.107 -n 30");
		printf("如果您的返回结果为中文，则把丢失=X 中X代表的数输入进去\n");
		printf("若为您的返回结果为英文，则把Lost=X 中X代表的数输入进去\n");
		double num2;
		cin >> num2;
		if (num2 > 100 && num2 < 0)
		{
			printf("请确认您输入的数值正确！");
			Sleep(1000);
			printf("\n");
			printf("程序即将返回上一级！\n");
			Sleep(3000);
			system("cls");
			goto Q;
		}
		else if (num2 == 0)
		{
			printf("网络未发现异常\n");
		}
		else if (num2 > 0 && num2 <= 15)
		{
			printf("网络基本正常，但不稳定！不排除网络原因！\n");
			printf("您可以重启路由器，电脑，并询问您的运营商查看问题是否解决。");
		}
		else if (num2 <= 100 && num2 > 15)
		{
			printf("您的网络异常！即将修复！");
			printf("由于该程序的行为敏感，可能会被误报为危险，允许即可。\n");
			printf("即将为你重置IP！\n");
			Sleep(1000);
			char bt[2048];
			char bt1[] = "@echo off";
			char bt2[] = "netsh interface ip set dns name = \"本地连接\" source = dhcp ";
			sprintf(bt, "%s\n%s\n", bt1, bt2);
			system(bt);
			system("pause");
		}
		printf("请再次打开QQ查看是否掉线，请不要关闭该程序！");
		system("pause");
		printf("若成功请输入1，不成功请输入2：");
		short num3;
		cin >> num3;
		if (num3 == 1)
		{
			printf("本次修复已成功！\n");
			printf("欢迎再次使用改程序，程序会操作完成后自动退出！\n");
			printf("请稍后...\n");
			FILE *fp;
			fp = fopen("report.txt", "wt");
			fprintf(fp, "___________________________________________________________________\n");
			fprintf(fp, "|                           检测报告                              |\n");
			fprintf(fp, "|*****************************************************************|\n");
			fprintf(fp, "|*上次原因为网络不稳定（已修复成功），可以尝试重置DNS或者重置IP解*|\n");
			fprintf(fp, "|*决                                                             *|\n");
			fprintf(fp, "|*****************************************************************|\n");
			fprintf(fp, "-------------------------------------------------------------------\n");
			fclose(fp);
			system("exit");
		}
		else if (num3 == 2)
		{
			E:
			printf("即将为您重新检测网络...\n");
			Sleep(1000);
			system("ping 180.97.33.107 -n 30");
			printf("如果您的返回结果为中文，则把丢失=X 中X代表的数输入进去\n");
			printf("若为您的返回结果为英文，则把Lost=X 中X代表的数输入进去\n");
			double num4;
			cin >> num4;
			if (num4 > 100 && num4 < 0)
			{
				printf("请确认您输入的数值正确！");
				Sleep(1000);
				printf("\n");
				printf("程序即将返回上一级！\n");
				Sleep(3000);
				system("cls");
				goto E;
			}
			else if (num4 == 0)
			{
				printf("网络未发现异常\n");
				printf("请检查是否开启QQ使用的端口或者是否使用不稳定的代理服务器");
				system("pause");
				system("cls");
				printf("请清理垃圾查看情况是否解决...\n");
				printf("请再次打开QQ查看是否掉线，请不要关闭该程序！");
				system("pause");
				printf("若成功请输入1，不成功请输入2：");
				short num5;
				cin >> num5;
				if (num5 == 1)
				{
					printf("本次修复已成功！\n");
					printf("欢迎再次使用改程序，程序会操作完成后自动退出！\n");
					printf("请稍后...\n");
					FILE *fp;
					fp = fopen("report.txt", "wt");
					fprintf(fp, "___________________________________________________________________\n");
					fprintf(fp, "|                           检测报告                              |\n");
					fprintf(fp, "|*****************************************************************|\n");
					fprintf(fp, "|*上次原因为未开启QQ使用的端口或者是否使用不稳定的代理服务器（已 *|\n"); 
					fprintf(fp, "|*修复成功），可以尝试重置DNS或者重置IP解决                      *|\n");
					fprintf(fp, "|*****************************************************************|\n");
					fprintf(fp, "-------------------------------------------------------------------\n");
					fclose(fp);
					system("exit");
				}
				else if (num5 == 2)
				{
					printf("请确认是否为病毒！");
					printf("请再次打开QQ查看是否掉线，请不要关闭该程序！");
					system("pause");
					printf("若成功请输入1，不成功请输入2：");
					short num6;
					cin >> num6;
					if (num6 == 1)
					{
						printf("本次修复已成功！\n");
						printf("欢迎再次使用改程序，程序会操作完成后自动退出！\n");
						printf("请稍后...\n");
						FILE *fp;
						fp = fopen("report.txt", "wt");
						fprintf(fp, "___________________________________________________________________\n");
						fprintf(fp, "|                           检测报告                              |\n");
						fprintf(fp, "|*****************************************************************|\n");
						fprintf(fp, "|*                 上次原因为电脑带有病毒（已修复成功)           *|\n");
						fprintf(fp, "|*****************************************************************|\n");
						fprintf(fp, "-------------------------------------------------------------------\n");
						fclose(fp);
						system("exit");
					}
					else if (num6 == 2)
					{
						printf("抱歉，没发现原因...");
						printf("欢迎再次使用改程序，程序会操作完成后自动退出！\n");
						printf("请稍后...\n");
						FILE *fp;
						fp = fopen("report.txt", "wt");
						fprintf(fp, "___________________________________________________________________\n");
						fprintf(fp, "|                           检测报告                              |\n");
						fprintf(fp, "|*****************************************************************|\n");
						fprintf(fp, "|*                         没有发现原因                          *|\n");
						fprintf(fp, "|*****************************************************************|\n");
						fprintf(fp, "-------------------------------------------------------------------\n");
						fclose(fp);
						system("exit");
					}
					else if (num6 != 1 && num6 != 2)
					{
						printf("输入错误程序即将推出！！");
						Sleep(5000);
						system("exit");
					}
				}
			}
			else if (num4 > 0 && num4 <= 15)
			{
				printf("网络基本正常，但不稳定！不排除网络原因！\n");
				printf("您可以重启路由器，电脑，并询问您的运营商查看问题是否解决。");
				printf("请检查是否开启QQ使用的端口或者是否使用不稳定的代理服务器");
				system("pause");
				system("cls");
				printf("请清理垃圾查看情况是否解决...\n");
				printf("请再次打开QQ查看是否掉线，请不要关闭该程序！");
				system("pause");
				printf("若成功请输入1，不成功请输入2：");
				short num5;
				cin >> num5;
				if (num5 == 1)
				{
					printf("本次修复已成功！\n");
					printf("欢迎再次使用改程序，程序会操作完成后自动退出！\n");
					printf("请稍后...\n");
					FILE *fp;
					fp = fopen("report.txt", "wt");
					fprintf(fp, "___________________________________________________________________\n");
					fprintf(fp, "|                           检测报告                              |\n");
					fprintf(fp, "|*****************************************************************|\n");
					fprintf(fp, "|*上次原因为未开启QQ使用的端口或者是否使用不稳定的代理服务器（已 *|\n");
					fprintf(fp, "|*修复成功），可以尝试重置DNS或者重置IP解决                      *|\n");
					fprintf(fp, "|*****************************************************************|\n");
					fprintf(fp, "-------------------------------------------------------------------\n");
					fclose(fp);
					system("exit");
				}
				else if (num5 == 2)
				{
					printf("请确认是否为病毒！");
					printf("请再次打开QQ查看是否掉线，请不要关闭该程序！");
					system("pause");
					printf("若成功请输入1，不成功请输入2：");
					short num6;
					cin >> num6;
					if (num6 == 1)
					{
						printf("本次修复已成功！\n");
						printf("欢迎再次使用改程序，程序会操作完成后自动退出！\n");
						printf("请稍后...\n");
						FILE *fp;
						fp = fopen("report.txt", "wt");
						fprintf(fp, "___________________________________________________________________\n");
						fprintf(fp, "|                           检测报告                              |\n");
						fprintf(fp, "|*****************************************************************|\n");
						fprintf(fp, "|*                 上次原因为电脑带有病毒（已修复成功)           *|\n");
						fprintf(fp, "|*****************************************************************|\n");
						fprintf(fp, "-------------------------------------------------------------------\n");
						fclose(fp);
						system("exit");
					}
					else if (num6 == 2)
					{
						printf("为网络问题！");
						printf("欢迎再次使用改程序，程序会操作完成后自动退出！\n");
						printf("请稍后...\n");
						FILE *fp;
						fp = fopen("report.txt", "wt");
						fprintf(fp, "___________________________________________________________________\n");
						fprintf(fp, "|                           检测报告                              |\n");
						fprintf(fp, "|*****************************************************************|\n");
						fprintf(fp, "|*                       网络不稳定（未修复成功)                 *|\n");
						fprintf(fp, "|*****************************************************************|\n");
						fprintf(fp, "-------------------------------------------------------------------\n");
						fclose(fp);
						system("exit");
					}
					else if (num6 != 1 && num6 != 2)
					{
						printf("输入错误程序即将推出！！");
						Sleep(5000);
						system("exit");
					}
				}
			}
			else if (num4 <= 100 && num4 > 15)
			{
				printf("您的网络异常！请立即修复！\n");
				printf("经确认，你无法使用QQ的原因为网络问题，请使用其他程序修复。\n");
				printf("欢迎再次使用改程序，程序会操作完成后自动退出！\n");
				printf("请稍后...\n");
				FILE *fp;
				fp = fopen("report.txt", "wt");
				fprintf(fp, "___________________________________________________________________\n");
				fprintf(fp, "|                           检测报告                              |\n");
				fprintf(fp, "|*****************************************************************|\n");
				fprintf(fp, "|*  上次原因为网络（未修复成功），可以尝试重置DNS或者重置IP解决  *|\n");
				fprintf(fp, "|*****************************************************************|\n");
				fprintf(fp, "-------------------------------------------------------------------\n");
				fclose(fp);
				system("exit");
			}
		}
	}
	else if (num1 == 2)
	{
		FILE *fp1; int report;
		if ((fp1 = fopen("report.txt", "rt")) == NULL)
		{
			printf("没有发现检测报告！");
			Sleep(3000);
			exit(1);
		}
			report = fgetc(fp1);
			while (report != EOF)
			{
				putchar(report);
				report = fgetc(fp1);
			}
			fclose(fp1);
			system("pause");
	}
}
