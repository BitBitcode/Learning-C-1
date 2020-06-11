//《C语言从入门到精通》P85
// 第三章 顺序与选择结构程序设计
// 3.4 if 语句
// 23、判断偶数

#include<stdio.h>

int main()
{
	int num;

	printf("请输入一个整数：\n");
	scanf_s("%d", &num);
	if (num % 2 == 0)
	{
		printf("你输入的是偶数！\n");
	}
	else
	{
		printf("你输入的是奇数！\n");
	}

	return 0;
}
