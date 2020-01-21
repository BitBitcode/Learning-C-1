//《C语言从入门到精通》P109
// 第四章 顺序与选择结构程序设计
// 4.3 转移语句
// 37、用 goto 与 if 计算输入的字符个数

#include<stdio.h>

void main()
{
	int i = 0;
	char c = 0;

	printf("尽情输入吧：\n");

	lable:
		if ((c = getchar()) != '\n')
		{
			i++;
			goto lable;
		}
	
	printf("您一共输入了 %d 个字节，消费过万，打钱！\n", i);
}
