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
	system("title �๦�ܼ����� ������TZY    LYC");
	void HideCursor();
	{
		CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	}
Q1:
	printf("1.����һ�����Ŀ���\n");
	printf("2.����һ������ƽ��\n");
	printf("3.����һ���������η�\n");
	printf("4.����һ�����Ŀ�����\n");
	printf("5.����ϵ��������\n");
	printf("6.����һ������N�η�\n");
	printf("7.��һ������N�η�\n");
	printf("8.���ù��ɶ������б�߳�\n");
	printf("9.ʹ�ú��׹�ʽ�������\n");
	printf("10.ʹ�üӼ��˳�������\n");
	printf("11.����Բ���ܳ������\n");
	printf("12.������ɫ����\n");
	printf("13.����������ˮ�е�ѹǿ\n");
	printf("14.�������嶯��\n");
	printf("���������ѡ����س�ȷ�ϣ�");
	long int num;
	cin >> num;
	switch (num)
	{
	case 1:
	{
		  C1:
			  int num1;
			  printf("��������Ҫ����������");
			  cin >> num1;
			  if (num1 >= 0)
			  {
				  printf("����ǣ�");
				  cout << sqrt(num1) << endl;
			  }
			  else if (num1 < 0)
			  {
				  printf("���󣡿���������С��0����");
			  }
			  printf("����1���ż��㿪��������2�����ϼ��˵�������3�˳�����\n");
			  printf("���������ѡ����س�ȷ�ϣ�");
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
			  printf("��������Ҫƽ��������\n");
			  cin >> num3;
			  num4 = num3*num3;
			  printf("���Ϊ%.10f", num4);
			  printf("����1���ż���ƽ��������2�����ϼ��˵�������3�˳�����\n");
			  printf("���������ѡ����س�ȷ�ϣ�");
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
			  printf("��������Ҫ����������");
			  cin >> num5;
			  num6 = num5*num5*num5;
			  printf("�������ǣ�%.10f", num6);
			  printf("����1���ż�������������2�����ϼ��˵�������3�˳�����\n");
			  printf("���������ѡ����س�ȷ�ϣ�");
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
			  printf("��������Ҫ������������");
			  cin >> num7;
			  cout << pow(num7, 1.0 / 3);
			  printf("\n");
			  printf("����1���ż���ƽ��������2�����ϼ��˵�������3�˳�����\n");
			  printf("���������ѡ����س�ȷ�ϣ�");
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
			  printf("�������һ�������Xֵ��");
			  cin >> x1;
			  printf("\n");
			  printf("�������һ�������Yֵ��");
			  cin >> y1;
			  printf("\n");
			  printf("������ڶ��������Xֵ��");
			  cin >> x2;
			  printf("\n");
			  printf("������ڶ��������Yֵ��");
			  cin >> y2;
			  printf("\n");
			  printf("���Ժ�...\n");
			  printf("���ڼ���...\n");
			  long double x3, y3;
			  x3 = x2 - x1;
			  y3 = y2 - y1;
			  long double k;
			  k = x3 / y3;
			  long double z;
			  z = k*x1;
			  long double b;
			  b = y1 - z;
			  printf("KֵΪ��%.2f", k);
			  printf("    ");
			  printf("BֵΪ��%.2f", b);
			  printf("    ");
			  printf("��������ʽΪ��y=%.2f", k);
			  printf("x+%.2f", b);
			  printf("\n");
			  printf("����1�����ô���ϵ��������������2�����ϼ��˵�������3�˳�����\n");
			  printf("���������ѡ����س�ȷ�ϣ�");
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
			  printf("��������ҪN�η�������");
			  cin >> num8;
			  printf("��������Ҫ��NΪ��");
			  cin >> num9;
			  l = pow(num8, num9);
			  cout << l << endl;
			  printf("����1���ż���һ������N�η�������2�����ϼ��˵�������3�˳�����\n");
			  printf("���������ѡ����س�ȷ�ϣ�");
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
			  printf("��������Ҫ��������");
			  long double num10, num11, num12;
			  cin >> num10;
			  printf("��������Ҫ����NΪ��");
			  cin >> num11;
			  num12 = pow(num10, 1.0 / num11);
			  cout << num12 << endl;
			  printf("����1���ż��㿪һ������N�η�������2�����ϼ��˵�������3�˳�����\n");
			  printf("���������ѡ����س�ȷ�ϣ�");
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
			  printf("����������ֱ�Ǳ���ֵ:\n");
			  printf("����:3 4\n");
			  scanf("%f%f", &a2, &b2);
			  c2 = hypot(a2, b2);
			  printf("б����:%5.2f\n", c2);
			  printf("����1�������ù��ɶ������б�߳�������2�����ϼ��˵�������3�˳�����\n");
			  printf("���������ѡ����س�ȷ�ϣ�");
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
			  float a2, b, c;
			  float s, area;
			  printf("�����1���߳���\n");
			  cin >> a2;
			  printf("�����2���߳���\n");
			  cin >> b;
			  printf("�����3���߳���\n");
			  cin >> c;
			  if (a2 + b > c && b + c > a2 && a2 + c > b)
			  {
				  s = (a2 + b + c) / 2;
				  area = (float)sqrt(s *(s - a2)*(s - b)*(s - c));
				  printf("The area is: %f\n", area);
				  if (a2 == b && a2 == c)
					  printf("�ȱ�������\n");
				  else if (a2 == b || a2 == c || b == c)
					  printf("����������\n");
				  else if ((a2 *a2 + b * b == c* c) || (a2 *a2 + c * c == b*b) || (b *b + c*c == a2*a2))
					  printf("ֱ��������\n");
				  else
					  printf("��ͨ������");
			  }
			  else
				  printf("����һ��������");
			  printf("����1��������ʹ�ú��׹�ʽ�������������2�����ϼ��˵�������3�˳�����\n");
			  printf("���������ѡ����س�ȷ�ϣ�");
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
				  system("pause");
			  }
			  break;
	case 10:
	{
		   C10:
			   printf("���������ʽ: a+(-,*,/)b \n");
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
				   printf("����1��������ʹ������������2�����ϼ��˵�������3�˳�����\n");
				   printf("���������ѡ����س�ȷ�ϣ�");
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
			   printf("������뾶(r)��");
			   scanf("%f", &r);
			   area1 = 3.1415926535*r*r;
			   circumfereence = 2 * 3.1415926535*r;
			   printf("���=%.10f\n", area);
			   printf("�ܳ�=%.10f\n", circumfereence);
			   printf("����1���ż���Բ���ܳ������������2�����ϼ��˵�������3�˳�����\n");
			   printf("���������ѡ����س�ȷ�ϣ�");
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
			   printf("����1������Ϊ�ڵװ���\n");
			   printf("����2����Ϊ��ʼ��ɫ\n");
			   int k;
			   cin >> k;
			   if (k == 1)
			   {
				   p1 = 0;
				   o1 = 0;
				   fpo = fopen("color.txt", "w");
				   fprintf(fpo, "%d, %d\n", p1, o1);
				   fclose(fpo);
				   printf("�����ѳɹ��������������Ч��\n");
				   Sleep(2000);
			   }
			   else if (k == 2)
			   {
				   FILE *fp1;
				   fp1 = fopen("TEMP1.cmd", "w");
				   fprintf(fp1, "@echo off\n");
				   fprintf(fp1, "@start TEMP2.cmd\n");
				   fclose(fp1);
				   printf("�����ѳɹ��������������Ч��\n");
				   Sleep(2000);
				   system("start /min TEMP1.cmd");
				   FILE *fp;
				   fp = fopen("TEMP2.cmd", "w");
				   fprintf(fp, "@echo off\n");
				   fprintf(fp, "@echo ����Ӧ�������õ���ɫ...\n");
				   fprintf(fp, "@echo ���Ժ�...n");
				   fprintf(fp, "@ping www.baidu.com -n 5\n");
				   fprintf(fp, "@del /F /S /Q color.txt\n");
				   fprintf(fp, "@echo ����ɣ�\n");
				   fprintf(fp, "@taskkill /f /im cmd.exe\n");
				   fclose(fp);
				   printf("�����ѳɹ��������������Ч��\n");
			   }
			   break;
	}
	}
	case 13:
	{
		   C13:
			   printf("��������������Һ����ܶ�(kg/ÿ����)��");
			   long double L;
			   cin >> L;
			   printf("---------------------------------------------\n");
			   printf("gȡֵΪ9.8����10������1Ϊ9.8������2Ϊ10��\n");
			   short a;
			   cin >> a;
			   if (a == 1)
			   {
				   printf("gȡֵ9.8�ɹ���");
				   Sleep(1000);
				   system("cls");
				   double g = 9.8;
				   printf("�������������Һ�����(M)��\n");
				   long double h;
				   cin >> h;
				   printf("-------------------------\n");
				   printf("������������ˮ�еĵ��������(ƽ����)��");
				   long double s;
				   cin >> s;
				   printf("������ɣ�\n");
				   system("cls");
				   Sleep(1000);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��");
				   Sleep(100);
				   printf("��\n");
				   long double P;
				   P = L*g*h;
				   long double F;
				   F = P*s;
				   printf("���Ϊ��%f\n", F);
				   printf("������ɣ�\n");
				   system("pause");
				   printf("����1���ż��㣬����2�����ϼ��˵�������3�˳�����\n");
				   printf("���������ѡ����س�ȷ�ϣ�");
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

			   printf("��������������(��λKG)��");
			   long double m;
			   cin >> m;
			   printf("������������ٶ� (ǧ��ÿСʱ)��");
			   long double v;
			   cin >> v;
			   printf("������ɣ����ڼ���...\n");
			   long double vv;
			   vv = v*v;
			   long double Ek;
			   Ek = m / 2 * vv;
			   printf("���Ϊ�� %f\n", Ek);
			   printf("������ɣ�\n");
			   system("pause");
			   int a;
			   cin >> a;
			   break;
	}
	default:
	{
			   printf("��������Ч��ѡ���\n");
			   printf("�������س���...\n");
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




