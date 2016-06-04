#define _CRT_SECURE_NO_DEPRECATE  //使用宏定义预编译的设置
#include <math.h> //调用头文件
#include<stdlib.h> //调用头文件
#include<stdio.h> //调用头文件
#include<Windows.h> //调用头文件
#include<dos.h> //调用头文件
#include <iostream> //屌用头文件
using namespace std; //定义C++内存初始化
int main() //主函数
{
	system("title 视频简易处理工具 制作：TZY    LYC"); //C++调用SYSTEM函数进行设置标题
	void HideCursor(); //定义一个函数
	{
		CONSOLE_CURSOR_INFO cursor_info = { 1, 0 }; //隐藏桌面
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info); //隐藏桌面
	}
A: //这里设置返回符号标记，以便于等下程序出错时跳回
	printf("__________________________________________________\n"); //输出字符
	printf("|    【1】截取视频         【2】合并视频         |\n"); //输出字符
	printf("--------------------------------------------------\n"); //输出字符
	printf("请输入您的选项:"); //输出字符
	short enter; //使用短的整形正整数，这样可以节省宝贵的内存
	cin >> enter; //使用C++的头文件对用户从键盘输入的字符进行赋值
	switch (enter) //SWITCH....CASE判断语句
	{
	case 1: //如果输入的值为1
	{
				FILE *fpi; //定义一个文件指针为fp1
				if ((fpi = fopen("TEMP.ini", "r")) == NULL) //如果文件打开指针未找到文件则
		 {
			 printf("正在为首次运行初始化做准备..\n");
			 printf("请确认首次初始化安装的位置：");
			 printf("\n");
			 printf("  【1】C盘  【2】D盘  【3】E盘   【4】F盘    【5】H盘\n");
			 printf("  【6】Z盘  【7】P盘  【8】G盘   【9】I盘    【10】J盘\n");
			 short a; //不解释，同上
			 printf("请输入你要安装的位置：");
			 cin >> a;
			 switch (a) //同上
			 {
			 case 1:{system("XCOPY \"zmpeg.exe\" \"C:\\zmpeg\\\" "); FILE *FP1; FP1 = fopen("TMP.txt", "wt");  char Q1[] = "C"; fprintf(FP1, "%s", Q1); fclose(FP1); }break; //同上，只是书写格式不同
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
			 default: //如果输入的值没有一个与其对应，那么运行以下的语句
			 {
				printf("请输入正确的数值！！！初始化失败！！");
				Sleep(3000); //休眠3000毫秒，也就是3秒
				system("cls");//调用SYSTEM函数传输指令给DOS，传输的指令为清屏
				goto A;//返回上面的标识符
			 }
			 }
		 }
		 else
		 {
			 printf("初始化完成！\n");
		 }
		 FILE *fp1;//定义一个我呢间指针
		 char P[8192];//赋值P
		 char p1[] = "Judgment";//赋值
		 char p2[] = "initialization ";//赋值
		 sprintf(P, "%s\n%s\n", p1, p2);//对赋值的两个变量使用函数进行合并
		 fp1 = fopen("TEMP.ini", "w");//使用文件指针对文件进行生成
		 fprintf(fp1, "%s", P);//要生成TXT文档的内容
		 fclose(fp1);//关闭文件指针，防止内存泄露
		 system("cls");
		 printf("上次你安装文件的位置为：");
		 FILE *fp;
		 char ch;
		 if ((fp = fopen("TMP.txt", "rt")) == NULL)//判断语句
		 {
			 printf("Cannot open file strike any key exit!");
			 exit(1);
		 }
		 ch = fgetc(fp);
		 while (ch != EOF)
		 {
			 putchar(ch);//对文件进行读
			 ch = fgetc(fp);
		 }
		 fclose(fp);
		 printf("\n");
		 printf("请输入您初始化安装文件的位置：");
		 char c;
		 cin >> c;
		 printf("请输入截取视频的起始时间(例如截取为15秒为00：00：15)：");
		 char starttime[8460];
		 cin >> starttime;													
		 printf("\n");
		 printf("请输入截取视频的终止时间(同上）：");
		 char overtime[8460];
		 cin >> overtime;
		 printf("\n");
		 printf("请输入截取视频的位置(例如：C:\\zzz.mp4)");
		 char path1[8460];
		 cin >> path1;
		 printf("\n");
		 printf("请输入截取后生成视频的位置(同上）：");
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
		 MessageBoxA(NULL, "操作正在进行，完成后将自动关闭", "视频剪辑模块", MB_OK);
		 break;
	}
	case 2:
	{
			  system("del /s /q videotemp1.mpg&&del /s /q videotemp2.mpg&&del /s /q videotemp3.mpg");
			  system("cls");
			  printf("请输入合成视频1视频的位置(例如：C:\\zzz.mp4)");
			  char patha[8460];
			  cin >> patha;
			  printf("\n");
			  printf("请输入合成视频2视频的位置(例如：C:\\zzz.mp4)");
			  char pathb[8460];
			  cin >> pathb;
			  printf("\n");
			  printf("请输入生成视频的位置(同上）：");
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
			  MessageBoxA(NULL, "操作正在进行，完成后将自动关闭", "视频剪辑模块", MB_OK);
			  break;
	}
	}
}