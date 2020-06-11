//《C语言从入门到精通》P72
// 第三章 顺序与选择结构程序设计
// 3.2 字符数据输入/输出
// 18、使用字符函数输入输出字符

#include<stdio.h>

int main()
{
	char c1, c2, c3, c;
	
	printf("使用scanf()函数接收。\n");
	scanf_s("%c", &c, 1);
	printf("scanf()函数接收到：%c \n", c);
	
	// getche()从键盘中读入一个字符，然后直接运行下一条语句
	printf("（1）输入一个字符，使用getche()函数接收。\n");
	c1 = getche();
	printf("\n");
	
	// getch()从键盘中读入一个字符，但是不在屏幕上显示，并直接运行下一条语句
	printf("（2）输入一个字符，使用getch()函数接收。\n");
	c2 = getch();
	printf("\n");

	// getchar()从内存中读入一个字符，等待输入是否结束，按下Enter后运行下一条语句
	// 所以和scanf()等函数混用的时候，由于scanf()输入后要按下回车，这个回车被getchar()从内存中直接接收，出现错误
	printf("（3）输入一个字符，使用getchar()函数接收。\n");
	c3 = getchar();
	printf("\n");

	printf("getche()函数接收到：%c \n", c1);
	//putchar(c1);
	printf("getch()函数接收到：%c \n", c2);
	//putchar(c2);
	printf("getchar()函数接收到：%c \n", c3);
	//putchar(c3);

	return 0;
}

// 运行后发现scanf()函数仅对getchar()函数有影响
// 书中原先的代码没有scanf()输入的部分，原代码最后三行是注释掉的putchar()