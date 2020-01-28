//《C语言从入门到精通》P118
// 第四章 顺序与选择结构程序设计
// 4.4 经典范例
// 40、打印乘法口诀表

#include<stdio.h>

int main()
{
	int i;
	int j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)	// 注意此处的精妙处理：j <= i 即第一行只有 1 个，第二行 2 个 。。。以此类推
		{
			printf("%d×%d=%d  ", i, j, (i*j));
		}
		printf("\n");				// 注意换行符的位置
	}

	return 0;
}