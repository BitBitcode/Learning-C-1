//《C语言从入门到精通》P98
// 第四章 顺序与选择结构程序设计
// 4.1 while及do while语句
// 31、求某数的阶乘

#include<stdio.h>

void main()
{
	int i = 1;
	int s = 1;
	int n = 0;

	printf("请输入要计算的阶乘：\n");
	scanf_s("%d", &n);

	// 需要处理一下 0! = 1 的特殊情况
	if (n==0)
	{
		printf("%d! = 1 \n", n);
	}
	else
	{
		while (i <= n)
		{
			s = s * i;
			i = i++;
		}
		printf("%d! = %d \n", n, s);
	}
}
