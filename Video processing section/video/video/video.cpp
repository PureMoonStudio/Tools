#define _CRT_SECURE_NO_DEPRECATE  //ʹ�ú궨��Ԥ���������
#include <math.h> //����ͷ�ļ�
#include<stdlib.h> //����ͷ�ļ�
#include<stdio.h> //����ͷ�ļ�
#include<Windows.h> //����ͷ�ļ�
#include<dos.h> //����ͷ�ļ�
#include <iostream> //����ͷ�ļ�
using namespace std; //����C++�ڴ��ʼ��
int main() //������
{
	system("title ��Ƶ���״����� ������TZY    LYC"); //C++����SYSTEM�����������ñ���
	void HideCursor(); //����һ������
	{
		CONSOLE_CURSOR_INFO cursor_info = { 1, 0 }; //��������
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info); //��������
	}
A: //�������÷��ط��ű�ǣ��Ա��ڵ��³������ʱ����
	printf("__________________________________________________\n"); //����ַ�
	printf("|    ��1����ȡ��Ƶ         ��2���ϲ���Ƶ         |\n"); //����ַ�
	printf("--------------------------------------------------\n"); //����ַ�
	printf("����������ѡ��:"); //����ַ�
	short enter; //ʹ�ö̵��������������������Խ�ʡ������ڴ�
	cin >> enter; //ʹ��C++��ͷ�ļ����û��Ӽ���������ַ����и�ֵ
	switch (enter) //SWITCH....CASE�ж����
	{
	case 1: //��������ֵΪ1
	{
				FILE *fpi; //����һ���ļ�ָ��Ϊfp1
				if ((fpi = fopen("TEMP.ini", "r")) == NULL) //����ļ���ָ��δ�ҵ��ļ���
		 {
			 printf("����Ϊ�״����г�ʼ����׼��..\n");
			 printf("��ȷ���״γ�ʼ����װ��λ�ã�");
			 printf("\n");
			 printf("  ��1��C��  ��2��D��  ��3��E��   ��4��F��    ��5��H��\n");
			 printf("  ��6��Z��  ��7��P��  ��8��G��   ��9��I��    ��10��J��\n");
			 short a; //�����ͣ�ͬ��
			 printf("��������Ҫ��װ��λ�ã�");
			 cin >> a;
			 switch (a) //ͬ��
			 {
			 case 1:{system("XCOPY \"zmpeg.exe\" \"C:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "C"; fprintf(FP1, "%s", Q1); fclose(FP1); }break; //ͬ�ϣ�ֻ����д��ʽ��ͬ
			 case 2:{system("XCOPY \"zmpeg.exe\" \"D:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "D"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 3:{system("XCOPY \"zmpeg.exe\" \"E:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "E"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 4:{system("XCOPY \"zmpeg.exe\" \"F:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "F"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 5:{system("XCOPY \"zmpeg.exe\" \"H:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "H"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 6:{system("XCOPY \"zmpeg.exe\" \"Z:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "Z"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 7:{system("XCOPY \"zmpeg.exe\" \"P:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "P"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 10:{system("XCOPY \"zmpeg.exe\" \"J:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "J"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 8:{system("XCOPY \"zmpeg.exe\" \"G:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "G"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 case 9:{system("XCOPY \"zmpeg.exe\" \"I:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "I"; fprintf(FP1, "%s", Q1); fclose(FP1); }break;
			 printf(" \n");
			 default: //��������ֵû��һ�������Ӧ����ô�������µ����
			 {
				printf("��������ȷ����ֵ��������ʼ��ʧ�ܣ���");
				Sleep(3000); //����3000���룬Ҳ����3��
				system("cls");//����SYSTEM��������ָ���DOS�������ָ��Ϊ����
				goto A;//��������ı�ʶ��
			 }
			 }
		 }
		 else
		 {
			 printf("��ʼ����ɣ�\n");
		 }
		 FILE *fp1;//����һ�����ؼ�ָ��
		 char P[8192];//��ֵP
		 char p1[] = "Judgment";//��ֵ
		 char p2[] = "initialization ";//��ֵ
		 sprintf(P, "%s\n%s\n", p1, p2);//�Ը�ֵ����������ʹ�ú������кϲ�
		 fp1 = fopen("TEMP.ini", "w");//ʹ���ļ�ָ����ļ���������
		 fprintf(fp1, "%s", P);//Ҫ����TXT�ĵ�������
		 fclose(fp1);//�ر��ļ�ָ�룬��ֹ�ڴ�й¶
		 system("cls");
		 printf("�ϴ��㰲װ�ļ���λ��Ϊ��");
		 FILE *fp;
		 char ch;
		 if ((fp = fopen("TMP.txt", "rt")) == NULL)//�ж����
		 {
			 printf("Cannot open file strike any key exit!");
			 exit(1);
		 }
		 ch = fgetc(fp);
		 while (ch != EOF)
		 {
			 putchar(ch);//���ļ����ж�
			 ch = fgetc(fp);
		 }
		 fclose(fp);
		 printf("\n");
		 printf("����������ʼ����װ�ļ���λ�ã�");
		 char c;
		 cin >> c;
		 printf("�������ȡ��Ƶ����ʼʱ��(�����ȡΪ15��Ϊ00��00��15)��");
		 char starttime[8460];
		 cin >> starttime;													
		 printf("\n");
		 printf("�������ȡ��Ƶ����ֹʱ��(ͬ�ϣ���");
		 char overtime[8460];
		 cin >> overtime;
		 printf("\n");
		 printf("�������ȡ��Ƶ��λ��(���磺C:\\zzz.mp4)");
		 char path1[8460];
		 cin >> path1;
		 printf("\n");
		 printf("�������ȡ��������Ƶ��λ��(ͬ�ϣ���");
		 char path2[8460];
		 cin >> path2;
		 printf("\n");
		 FILE *fp3;
		 char P1[8192];
		 sprintf(P1, "%c:\\zmpeg\\zmpeg.exe -ss %s -t %s -i %s %s&&exit",c,starttime,overtime,path1,path2);
		 fp3 = fopen("TMP1.cmd", "w");
		 fprintf(fp3, "%s", P1);
		 fclose(fp3);
		 printf("Please wait!");
		 Sleep(1500);
		 system("start TMP1.cmd");
		 MessageBoxA(NULL, "�������ڽ��У���ɺ��Զ��ر�", "��Ƶ����ģ��", MB_OK);
		 break;
	}
	case 2:
	{
			  system("del /s /q videotemp1.mpg&&del /s /q videotemp2.mpg&&del /s /q videotemp3.mpg");
			  system("cls");
			  printf("������ϳ���Ƶ1��Ƶ��λ��(���磺C:\\zzz.mp4)");
			  char patha[8460];
			  cin >> patha;
			  printf("\n");
			  printf("������ϳ���Ƶ2��Ƶ��λ��(���磺C:\\zzz.mp4)");
			  char pathb[8460];
			  cin >> pathb;
			  printf("\n");
			  printf("������������Ƶ��λ��(ͬ�ϣ���");
			  char pathc[8460];
			  cin >> pathc;
			  printf("\n");
			  FILE *fp3;
			  char P1[8192];
			  sprintf(P1, "zmpeg  -i %s -f mpeg  videotemp1.mpg&&zmpeg  -i %s -f mpeg videotemp2.mpg&&copy /b \"videotemp1.mpg\"+\"videotemp2.mpg\" videotemp3.mpg&&zmpeg -i \"videotemp3.mpg\" -f mp4 \"%s\"&&exit ", patha, pathb, pathc);
			  fp3 = fopen("TMP1.cmd", "w");
			  fprintf(fp3, "%s", P1);
			  fclose(fp3);
			  printf("Please wait!");
			  Sleep(1500);
			  system("start TMP1.cmd");
			  MessageBoxA(NULL, "�������ڽ��У���ɺ��Զ��ر�", "��Ƶ����ģ��", MB_OK);
			  break;
	}
	}
}