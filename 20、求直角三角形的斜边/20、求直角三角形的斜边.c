//《C语言从入门到精通》P79
// 第三章 顺序与选择结构程序设计
// 3.3 格式输入/输出函数
// 20、求直角三角形的斜边

#include<stdio.h>
#include<math.h>

void main()
{
	float a, b, c;
	printf("请输入三角形的直角边，中间用逗号隔开。例：3,4 \n");
	scanf_s("%f, %f", &a, &b);

	c = sqrt(a * a + b * b);
	printf("直角三角形的斜边为：%f", c);
}
