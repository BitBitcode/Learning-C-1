//《C语言从入门到精通》P112
// 第四章 顺序与选择结构程序设计
// 4.3 转移语句
// 38、用 goto 编写实用的可退出循环菜单

#include<stdio.h>
#include<stdlib.h>		// system() 函数需要的头文件

void main()
{
	int m;			// 选择菜单模式的数字变量
	char c;			// 选择确认或取消的字符变量

Start:				// 标签：菜单选择部分
	for (; ; )		// 为了能多次选择菜单，用了无条件循环的 for，但是后边的分支语句有退出循环的代码，所以不是死循环
	{
		printf("---------- 菜  单 ---------- \n");
		printf("        1、文  件 \n");
		printf("        2、编  辑 \n");
		printf("        3、插  入 \n");
		printf("        4、分  享 \n");
		printf("\n");
		printf("        0、退  出 \n");
		printf("---------------------------- \n\n");

		printf("输入对应数字以选择：\n");
	RE1:scanf_s("%d", &m);
	// Switch 版本（推荐）
	switch (m)
		{
		case 1:
			system("cls");	// 清屏
			printf("当前位置：RGB → #FFFFFF \n");
			printf("------------------------------------------------------------\n\n");
			RGB_to_XXX();	// 调用 RGB 转换为 十六进制 的函数
		case 2:
			system("cls");	// 清屏
			printf("当前位置：RGB → CMYK \n");
			printf("------------------------------------------------------------\n\n");
			RGB_to_CMYK();	// 调用 RGB 转换为 CMYK 的函数
		case 3:
			system("cls");	// 清屏
			printf("当前位置：RGB → HSV \n");
			printf("------------------------------------------------------------\n\n");
		case 4:
			system("cls");	// 清屏
			printf("当前位置：#FFFFFF → RGB \n");
			printf("------------------------------------------------------------\n\n");
		case 5:
			system("cls");	// 清屏
			printf("当前位置：CMYK → RGB \n");
			printf("------------------------------------------------------------\n\n");
		case 6:
			system("cls");	// 清屏
			printf("当前位置：HSV → RGB \n");
			printf("------------------------------------------------------------\n\n");
		case 9:
			system("cls");	// 清屏
			goto Start;
		case 0:
			system("cls");	// 清屏
			goto Exit;
		default:
			printf("请输入有效数字！\n");
			goto RE1;
		}

		// if 版本
		/*
		if (m == 1)
		{
			printf("当前位置：文  件 \n");
		}
		else if (m == 2)
		{
			printf("当前位置：编  辑 \n");
		}
		else if (m == 3)
		{
			printf("当前位置：插  入 \n");
		}
		else if (m == 4)
		{
			printf("当前位置：分  享 \n");
		}
		else if (m == 0)
		{
			goto Exit;
		}
		else
		{
			printf("请输入有效数字！\n");
		}
		*/
	
	}

Exit:				// 标签：菜单“退出”的确认部分
	{
		printf("是否确认退出？（确认：y，取消：n）\n");
	RE2:scanf_s("%c", &c, 1);
		if (c == '\n')
		{
			goto RE2;
		}
		else if (c == 'y')
		{
			printf("程序已退出，关闭窗口即可 \n");
			goto End;
		}
		else if (c == 'n')
		{
			goto Start;
		}
		else
		{
			printf("请输入“y”或“n”！\n");
			goto RE2;
		}
	}
// 退出部分还可以用“massagebox”和“exit()”来写（用到了其他的库）

End:return 0;		// 标签：程序结束，主函数返回
}
