//《C语言从入门到精通》P108
// 第四章 顺序与选择结构程序设计
// 4.2 for 语句
// 34、用循环语句打印一个金字塔

#include<stdio.h>

void main()
{
	int i;		// 空格的计数变量
	int j = 1;	// 星号的计数变量
	int n;		// 想打印的层数
	int m = 1;	// 当前的层数

	printf("输入想打印的层数：\n");
	scanf_s("%d", &n);

	for (m = 1; m <= n; m++)
	{
		for (i = 1; i <= (n - m); i++)					// 第 m 层的空格数是 (n-m) 个
		{
			printf(" ");
		}
									
		for (j = 1; j <= (2 * m - 1); j++)		// 第 m 层的星号数是 (2m-1) 个
		{
			printf("*");
		}
		printf("\n");
	}
}


// 也可以用while写，但for更简练，这里是星号的部分，空格同理
/*	while (j <= (2 * m - 1))		// 第 m 层的星号数是 (2m-1) 个
	{
		printf("*");
		j++;
	}
	j = 1;
*/