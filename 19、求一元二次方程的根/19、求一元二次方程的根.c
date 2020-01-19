//《C语言从入门到精通》P79
// 第三章 顺序与选择结构程序设计
// 3.3 格式输入/输出函数
// 19、求一元二次方程的根

#include<stdio.h>
#include<math.h>

void main()
{
	int a, b, c;
	float x1, x2, d;

	printf("Enter a, b, c \n");
	scanf_s("%d, %d, %d", &a, &b, &c);
	d = b * b - 4 * a * c;
	
	printf("a=%d \n", a);
	printf("b=%d \n", b);
	printf("c=%d \n", c);
	printf("d=%f \n", d);

	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		printf("x1=%f, x2=%f", x1, x2);
		
	}
	else if (d == 0)
	{
		x1 = -b / 2 * a;
		printf("x1=x2=%f", x1);
	}
	else if (d < 0)
	{
		printf("GNMB");
	}
}
