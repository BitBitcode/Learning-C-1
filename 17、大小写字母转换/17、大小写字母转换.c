//《C语言从入门到精通》P69
// 第三章 顺序与选择结构程序设计
// 3.2 字符数据输入/输出
// 17、大小写字母转换

#include<stdio.h>

void main()
{
	char latter;
	int m;
	printf("输入数字以选择模式：\n");
	printf("1、小写字母转换为大写字母；\n");
	printf("2、大写字母转换为小写字母；\n");
	scanf_s("%d", &m);
	
	printf("输入要转换的小写字母（一次仅能输入一个）：\n");
	latter = getche();
	
	printf("\n");
	if (m == 1)
	{
		latter = latter - 32;
		printf("大写字母为：%c \n", latter);
	}
	else if (m == 2)
	{
		latter = latter + 32;
		printf("小写字母为：%c \n", latter);
	}
}

// 注意：scanf()和getchar()混用的时候容易出现错误（getchar()取走了内存中的字符，如果内存中有字符，就会发生没有输入但是继续运行的情况）