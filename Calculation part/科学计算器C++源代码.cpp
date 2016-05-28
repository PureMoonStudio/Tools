#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#pragma warning(disable:4244)
#pragma warning(disable:4046)
#pragma warning(disable:4060)
#pragma warning(disable:4129)
#include <stdio.h> 
#include <stdlib.h> 
#include <windows.h> 
#include<math.h>
#include <iostream>
#include <time.h> 
#include<dos.h>
#include<conio.h>
#include<cmath>
#include <string.h>
#include<conio.h>
using namespace std;
int main()
{
	system("del TEMP1.cmd");
	system("del TEMP2.cmd");
	system("cls");
	int p1, o1;
	FILE *fpi, *fpo;
	extern int main(int  a, int b);
	if ((fpi = fopen("color.txt", "r")) == NULL)
	{
		system("color 87");
	}
	else
	{
		fscanf(fpi, "%d%d", &p1, &o1);
		fclose(fpi);
		system("color 07");
	}
	system("title 多功能计算器 制作：TZY    LYC");
	void HideCursor();
	{
		CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	}
Q1:
	printf("1.计算一个数的开方\n");
	printf("2.计算一个数的平方\n");
	printf("3.计算一个数的三次方\n");
	printf("4.计算一个数的开立方\n");
	printf("5.待定系数法求函数\n");
	printf("6.计算一个数的N次方\n");
	printf("7.开一个数的N次方\n");
	printf("8.运用勾股定理计算斜边长\n");
	printf("9.使用海伦公式计算面积\n");
	printf("10.使用加减乘除计算器\n");
	printf("11.计算圆的周长与面积\n");
	printf("12.程序颜色更改\n");
	printf("13.计算物体在水中的压强\n");
	printf("14.计算物体动能\n");
	printf("请输入你的选项并摁回车确认：");
	short num;
	cin >> num;
	switch (num)
	{
	case 1:
	{
		  C1:
			  int num1;
			  printf("请输入你要开方的数：");
			  cin >> num1;
			  if (num1 >= 0)
			  {
				  printf("结果是：");
				  cout << sqrt(num1) << endl;
			  }
			  else if (num1 < 0)
			  {
				  printf("错误！开方数不能小于0！！");
			  }
			  printf("输入1接着计算开方，输入2返回上级菜单，输入3退出程序。\n");
			  printf("请输入你的选项并摁回车确认：");
			  int a;
			  cin >> a;
			  if (a == 1)
			  {
				  system("cls");
				  goto C1;
			  }
			  else if (a == 2)
			  {
				  system("cls");
				  goto Q1;
			  }
			  else if (a == 3)
			  {
				  system("exit");
			  }
			  break;
	case 2:
	{
		  C2:
			  long double num3;
			  long double num4;
			  printf("请输入你要平方的数：\n");
			  cin >> num3;
			  num4 = num3*num3;
			  printf("结果为%.10f", num4);
			  printf("输入1接着计算平方，输入2返回上级菜单，输入3退出程序。\n");
			  printf("请输入你的选项并摁回车确认：");
			  int a;
			  cin >> a;
			  if (a == 1)
			  {
				  system("cls");
				  goto C2;
			  }
			  else if (a == 2)
			  {
				  system("cls");
				  goto Q1;
			  }
			  else if (a == 3)
			  {
				  system("exit");
			  }
			  break;
	}
	case 3:
	{
		  C3:
			  long double num5, num6;
			  printf("请输入你要立方的数：");
			  cin >> num5;
			  num6 = num5*num5*num5;
			  printf("计算结果是：%.10f", num6);
			  printf("输入1接着计算立方，输入2返回上级菜单，输入3退出程序。\n");
			  printf("请输入你的选项并摁回车确认：");
			  int a;
			  cin >> a;
			  if (a == 1)
			  {
				  system("cls");
				  goto C3;
			  }
			  else if (a == 2)
			  {
				  system("cls");
				  goto Q1;
			  }
			  else if (a == 3)
			  {
				  system("exit");
			  }
			  break;
	}
	case 4:
	{
		  C4:
			  long double num7;
			  printf("请输入你要开立方的数：");
			  cin >> num7;
			  cout << pow(num7, 1.0 / 3);
			  printf("\n");
			  printf("输入1接着计算平方，输入2返回上级菜单，输入3退出程序。\n");
			  printf("请输入你的选项并摁回车确认：");
			  int a;
			  cin >> a;
			  if (a == 1)
			  {
				  system("cls");
				  goto C4;
			  }
			  else if (a == 2)
			  {
				  system("cls");
				  goto Q1;
			  }
			  else if (a == 3)
			  {
				  system("exit");
			  }
			  break;
	}
	case 5:
	{
		  C5:
			  long double x1, x2, y1, y2;
			  printf("请输入第一个坐标的X值：");
			  cin >> x1;
			  printf("\n");
			  printf("请输入第一个坐标的Y值：");
			  cin >> y1;
			  printf("\n");
			  printf("请输入第二个坐标的X值：");
			  cin >> x2;
			  printf("\n");
			  printf("请输入第二个坐标的Y值：");
			  cin >> y2;
			  printf("\n");
			  printf("请稍后...\n");
			  printf("正在计算...\n");
			  long double x3, y3;
			  x3 = x2 - x1;
			  y3 = y2 - y1;
			  long double k;
			  k = x3 / y3;
			  long double z;
			  z = k*x1;
			  long double b;
			  b = y1 - z;
			  printf("K值为：%.2f", k);
			  printf("    ");
			  printf("B值为：%.2f", b);
			  printf("    ");
			  printf("函数解析式为：y=%.2f", k);
			  printf("x+%.2f", b);
			  printf("\n");
			  printf("输入1接着用待定系数法求函数，输入2返回上级菜单，输入3退出程序。\n");
			  printf("请输入你的选项并摁回车确认：");
			  int a;
			  cin >> a;
			  if (a == 1)
			  {
				  system("cls");
				  goto C5;
			  }
			  else if (a == 2)
			  {
				  system("cls");
				  goto Q1;
			  }
			  else if (a == 3)
			  {
				  system("exit");
			  }
			  break;
	}
	case 6:
	{
		  C6:
			  long double num8;
			  long double num9;
			  long double l;
			  printf("请输入你要N次方的数：");
			  cin >> num8;
			  printf("请输入你要的N为：");
			  cin >> num9;
			  l = pow(num8, num9);
			  cout << l << endl;
			  printf("输入1接着计算一个数的N次方，输入2返回上级菜单，输入3退出程序。\n");
			  printf("请输入你的选项并摁回车确认：");
			  int a;
			  cin >> a;
			  if (a == 1)
			  {
				  system("cls");
				  goto C6;
			  }
			  else if (a == 2)
			  {
				  system("cls");
				  goto Q1;
			  }
			  else if (a == 3)
			  {
				  system("exit");
			  }
			  break;
	}
	case 7:
	{
		  C7:
			  printf("请输入你要开的数：");
			  long double num10, num11, num12;
			  cin >> num10;
			  printf("请输入你要开的N为：");
			  cin >> num11;
			  num12 = pow(num10, 1.0 / num11);
			  cout << num12 << endl;
			  printf("输入1接着计算开一个数的N次方，输入2返回上级菜单，输入3退出程序。\n");
			  printf("请输入你的选项并摁回车确认：");
			  int a;
			  cin >> a;
			  if (a == 1)
			  {
				  system("cls");
				  goto C7;
			  }
			  else if (a == 2)
			  {
				  system("cls");
				  goto Q1;
			  }
			  else if (a == 3)
			  {
				  system("exit");
			  }
			  break;
	}
	case 8:
	{
		  C8:
			  float a2, b2, c2;
			  printf("请输入两个直角边数值:\n");
			  printf("比如:a b\n");
			  scanf("%f%f", &a2, &b2);
			  c2 = hypot(a2, b2);
			  printf("斜边是:%5.2f\n", c2);
			  printf("输入1接着运用勾股定理计算斜边长，输入2返回上级菜单，输入3退出程序。\n");
			  printf("请输入你的选项并摁回车确认：");
			  int a;
			  cin >> a;
			  if (a == 1)
			  {
				  system("cls");
				  goto C8;
			  }
			  else if (a == 2)
			  {
				  system("cls");
				  goto Q1;
			  }
			  else if (a == 3)
			  {
				  system("exit");
			  }
			  break;
	}
	case 9:
	{
		  C9:
			  printf("输入3条边长计算面积\n");
			  float a2, b, c;
			  float s, area;
			  scanf("%f,%f,%f", &a2, &b, &c);
			  if (a2 + b > c && b + c > a2 && a2 + c > b)
			  {
				  s = (a2 + b + c) / 2;
				  area = (float)sqrt(s *(s - a2)*(s - b)*(s - c));
				  printf("The area is: %f\n", area);
				  if (a2 == b && a2 == c)
					  printf("等边三角形\n");
				  else if (a2 == b || a2 == c || b == c)
					  printf("等腰三角形\n");
				  else if ((a2 *a2 + b * b == c* c) || (a2 *a2 + c * c == b*b) || (b *b + c*c == a2*a2))
					  printf("直角三角形\n");
				  else
					  printf("普通三角形");
			  }
			  else
				  printf("不是一个三角形");
			  printf("输入1接着运用使用海伦公式计算面积，输入2返回上级菜单，输入3退出程序。\n");
			  printf("请输入你的选项并摁回车确认：");
			  int a1;
			  cin >> a1;
			  if (a1 == 1)
			  {
				  system("cls");
				  goto C9;
			  }
			  else if (a1 == 2)
			  {
				  system("cls");
				  goto Q1;
			  }
			  else if (a1 == 3)
			  {
				  system("exit");
			  }
			  break;
	case 10:
	{
		   C10:
			   printf("请输入代数式: a+(-,*,/)b \n");
			   float a, b;
			   char t;
			   scanf("%f%c%f", &a, &t, &b);
			   switch (t)
			   {
			   case '+':printf("%f\n", a + b); break;
			   case '-':printf("%f\n", a - b); break;
			   case '*':printf("%f\n", a - b); break;
			   case '/':
				   if (!b)
					   printf("Divisor can not be 0");
				   else
					   printf("%f\n", a / b);
				   break;
			   default:printf("Input error! \n");
				   printf("输入1接着运用使用海伦公式计算面积，输入2返回上级菜单，输入3退出程序。\n");
				   printf("请输入你的选项并摁回车确认：");
				   int a;
				   cin >> a;
				   if (a == 1)
				   {
					   system("cls");
					   goto C10;
				   }
				   else if (a == 2)
				   {
					   system("cls");
					   goto Q1;
				   }
				   else if (a == 3)
				   {
					   system("exit");
				   }
				   break;
			   }
	}
	case 11:
	{
		   C11:
			   long double r, area1, circumfereence;
			   printf("请输入半径(r)：");
			   scanf("%f", &r);
			   area1 = 3.1415926535*r*r;
			   circumfereence = 2 * 3.1415926535*r;
			   printf("面积=%.10f\n", area);
			   printf("周长=%.10f\n", circumfereence);
			   printf("输入1接着计算圆的周长与面积，输入2返回上级菜单，输入3退出程序。\n");
			   printf("请输入你的选项并摁回车确认：");
			   int a;
			   cin >> a;
			   if (a == 1)
			   {
				   system("cls");
				   goto C11;
			   }
			   else if (a == 2)
			   {
				   system("cls");
				   goto Q1;
			   }
			   else if (a == 3)
			   {
				   system("exit");
			   }
			   break;
	}
	}
	case 12:
	{
			   printf("输入1将更改为黑底白字\n");
			   printf("输入2更改为初始颜色\n");
			   int k;
			   cin >> k;
			   if (k == 1)
			   {
				   p1 = 0;
				   o1 = 0;
				   fpo = fopen("color.txt", "w");
				   fprintf(fpo, "%d, %d\n", p1, o1);
				   fclose(fpo);
				   printf("设置已成功！重启程序后将生效！\n");
				   Sleep(2000);
			   }
			   else if (k == 2)
			   {
				   FILE *fp1;
				   fp1 = fopen("TEMP1.cmd", "w");
				   fprintf(fp1, "@echo off\n");
				   fprintf(fp1, "@start TEMP2.cmd\n");
				   fclose(fp1);
				   printf("设置已成功！重启程序后将生效！\n");
				   Sleep(2000);
				   system("start /min TEMP1.cmd");
				   FILE *fp;
				   fp = fopen("TEMP2.cmd", "w");
				   fprintf(fp, "@echo off\n");
				   fprintf(fp, "@echo 正在应用您设置的颜色...\n");
				   fprintf(fp, "@echo 请稍后...n");
				   fprintf(fp, "@ping www.baidu.com -n 5\n");
				   fprintf(fp, "@del /F /S /Q color.txt\n");
				   fprintf(fp, "@echo 已完成！\n");
				   fprintf(fp, "@taskkill /f /im cmd.exe\n");
				   fclose(fp);
				   printf("设置已成功！重启程序后将生效！\n");
			   }
			   break;
	}
	}
	case 13:
	{
		   C13:
			   printf("请输入物体所在液体的密度(kg/每立方)：");
			   long double L;
			   cin >> L;
			   printf("---------------------------------------------\n");
			   printf("g取值为9.8还是10？输入1为9.8，输入2为10。\n");
			   short a;
			   cin >> a;
			   if (a == 1)
			   {
				   printf("g取值9.8成功！");
				   Sleep(1000);
				   system("cls");
				   float g = 9.8;
				   printf("请输入物体浸入液体深度(M)：\n");
				   long double h;
				   cin >> h;
				   printf("-------------------------\n");
				   printf("请输入物体在水中的的受力面积(平方米)：");
				   long double s;
				   cin >> s;
				   printf("输入完成！\n");
				   system("cls");
				   Sleep(1000);
				   printf("正");
				   Sleep(100);
				   printf("在");
				   Sleep(100);
				   printf("计");
				   Sleep(100);
				   printf("算\n");
				   long double P;
				   P = L*g*h;
				   long double F;
				   F = P*s;
				   printf("结果为：%f\n", F);
				   printf("计算完成！\n");
				   system("pause");
				   printf("输入1接着计算，输入2返回上级菜单，输入3退出程序。\n");
				   printf("请输入你的选项并摁回车确认：");
				   int a;
				   cin >> a;
				   if (a == 1)
				   {
					   system("cls");
					   goto C13;
				   }
				   else if (a == 2)
				   {
					   system("cls");
					   goto Q1;
				   }
				   else if (a == 3)
				   {
					   system("exit");
				   }
				   break;
			   }
	case 14:
	{

			   printf("请输入物体重量(单位KG)：");
			   long double m;
			   cin >> m;
			   printf("请输入物体的速度 (千米每小时)：");
			   long double v;
			   cin >> v;
			   printf("输入完成，正在计算...\n");
			   long double vv;
			   vv = v*v;
			   long double Ek;
			   Ek = m / 2 * vv;
			   printf("结果为： %f\n", Ek);
			   printf("计算完成！\n");
			   system("pause");
			   int a;
			   cin >> a;
			   break;
	}
	default:
	{
			   printf("请输入有效的选项！！\n");
			   printf("即将返回程序...\n");
			   printf("3\n");
			   Sleep(1000);
			   printf("2\n");
			   Sleep(1000);
			   printf("1\n");
			   Sleep(1000);
			   FILE *fp;
			   fp = fopen("TEMP.cmd", "w");
			   fprintf(fp, "@echo off\n");
			   fprintf(fp, "@start Multifunctioncalculator.exe\n");
			   fclose(fp);
			   system("TEMP.cmd");
			   system("del TEMP.cmd");

	}
	}
		return 0;
	}
}




