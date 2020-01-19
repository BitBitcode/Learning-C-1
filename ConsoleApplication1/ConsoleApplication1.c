//《C语言从入门到精通》P79
// 第三章 顺序与选择结构程序设计
// 3.3 格式输入/输出函数
// 19、求一元二次方程的根

#include<stdio.h>
#include<math.h>

float solution();
void main()
{
	int a, b, c;
	float x1 = 0, x2 = 0;
	printf("Enter a, b, c \n");
	scanf_s("%d, %d, %d", &a, &b, &c);
	x1, x2 = sloution(a, b, c);
	printf("%f, %f", x1, x2);
}

float solution(int a, int b, int c)
{
	float d, x1, x2;
	d = b * b - 4 * a * c;
	x1 = (-b + sqrt(d)) / 2 * a;
	x2 = (-b - sqrt(d)) / 2 * a;
	return x1, x2;
}