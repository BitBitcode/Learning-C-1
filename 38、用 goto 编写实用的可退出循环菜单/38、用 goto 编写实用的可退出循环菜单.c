//《C语言从入门到精通》P112
// 第四章 顺序与选择结构程序设计
// 4.3 转移语句
// 38、用 goto 编写实用的可退出循环菜单

#include<stdio.h>

void main()
{
	int m;
	char c;

start:
	for (; ; )
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
		scanf_s("%d", &m);

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
			goto exit;
		}
		else
		{
			printf("请输入有效数字！\n");
		}
	}

exit:
	printf("是否确认退出？（确认：y，取消：n）\n");
	if (getchar()!='\n')
	{
		scanf_s("%c", &c, 1);
	}
	else
	{
		scanf_s("%c", &c, 1);
	}

	if (c == 'y')
	{
		printf("程序已退出，关闭窗口即可 \n");
	}
	else if (c == 'n')
	{
		goto start;
	}
}
