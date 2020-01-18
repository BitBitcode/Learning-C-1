//《C语言从入门到精通》P58
// 第二章 C语言基础
// 2.4 运算符与表达式
// 12、判断整数倍.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include<stdio.h>

void main()
{
	int num;
	printf("请输入要判断的数：\n");
	scanf_s("%d", &num);

	if ((num % 5 == 0) && (num % 7 == 0))
	{
		printf("该数是5和7的倍数");
	}
	else
	{
		printf("该数不是5和7的倍数");
	}
}