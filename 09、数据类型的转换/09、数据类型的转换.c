//《C语言从入门到精通》P48
// 第二章 C语言基础
// 2.4 运算符与表达式
// 9、数据类型的转换

#include <stdio.h>

void main()
{
	int a, b = 105;			// 定义整型变量a、b，并给b赋值为：105
	char c, d = 'a';		// 定义字符变量c、d，并给d赋值为：“a”
	float x, y = 96.22;		// 定义实型变量x、y，并给y赋值为：96.22

	a = y;					// 实型变量y赋值给整型变量a，数据类型转换为整型，取整为2
	c = b;					// 整型变量b赋值给字符型变量c，数据类型被转换为int
	x = d;					// 字符型d变量赋值给实型变量x

	printf("数据类型将自动转换：\n");
	printf("a=%d \n", a);
	printf("a=%c \n", c);
	printf("a=%f \n", x);
	// 在“错误列表”窗口有警告显示“数据可能被截断”

	char latter;
	short int num_1;
	int num_2;
	printf("强制转换数据类型：\n");
	latter = (char)y;
	num_1 = (short)y;
	num_2 = (int)y;
	printf("字符是：%c \n", latter);
	printf("短整型数据是：%d \n", num_1);
	printf("整型数据是：%d \n", num_2);
}

// 注意：无论是自动转换还是强制转换，都只是转换了本次运算时的数据类型，而数据的原始类型并没有被改变！