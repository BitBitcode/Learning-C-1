//《C语言从入门到精通》P86
// 第三章 顺序与选择结构程序设计
// 3.4 if 语句
// 24、平方和值判断

// 要求：输入两个数，如果平方和大于100，输出平方和；若小于100，输出两数和

#include<stdio.h>

void main()
{
	int a, b, x, y;
	printf("请输入a和b的值：（例：2,3）\n");
	scanf_s("%d, %d", &a, &b);

	x = a * a + b * b;
	y = a + b;

	if (x > 100)
	{
		printf("a^2 + b^2 = %d \n", x);
	}
	else
	{
		printf("a + b = %d \n", y);
	}
}
