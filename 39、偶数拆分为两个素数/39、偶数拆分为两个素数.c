//《C语言从入门到精通》P112
// 第四章 顺序与选择结构程序设计
// 4.3 转移语句
// 39、偶数拆分为两个素数

// 素数：大于1的自然数，如果除了1和它本身外没有别的因数，称为素数

#include<stdio.h>
#include<math.h>

void main()
{
	int a, b, c, d;
	int flag = 0;

REC:printf("请输入一个偶数：\n");
	scanf_s("%d", &a);
	if ((a % 2) != 0)
	{
		printf("你输入的不是偶数！请重新输入：\n");
		goto REC;
	}

	for (b = 2; b <= (a / 2); b += 2)
	{
		for (c = 2; c <= sqrt(b); c++)
		{
			if (b % c == 0)
			{
				break;
			}
			if (c > sqrt(b))
			{
				d = a - b;
			}
			else
			{
				continue;
			}
			for (c = 2; c <= sqrt(d); c++)
			{
				if (d % c == 0)
				{
					break;
				}
				if (c > sqrt(d))
				{
					printf("拆分结果为：%d = %d + %d \n", a, b, d);
					flag = 1;
				}
			}
		}
	}
	if (flag == 0)
	{
		printf("不能拆分！\n");
	}
}
