//《C语言从入门到精通》P84
// 第三章 顺序与选择结构程序设计
// 3.4 if 语句
// 21、用 if 编写控制台菜单

#include<stdio.h>

void main()
{
	int m;

	printf("---------- 菜  单 ---------- \n");
	printf("        1、文  件 \n");
	printf("        2、编  辑 \n");
	printf("        3、插  入 \n");
	printf("        4、分  享 \n");
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
	else
	{
		printf("请输入有效数字！\n");
	}
}
