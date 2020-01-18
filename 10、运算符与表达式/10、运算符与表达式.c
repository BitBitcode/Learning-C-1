//《C语言从入门到精通》P50
// 第二章 C语言基础
// 2.4 运算符与表达式
// 10、运算符与表达式

#include <stdio.h>

void main()
{
	int a;
	printf("输入一个不为6的整数");
	scanf_s("%d", &a);
	a += a *= a /= a - 6;
	printf("a += a *= a /= a - 6 的结果是：%d", a);		// 复合运算符的结合方向自右向左
}