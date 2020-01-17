//《C语言从入门到精通》P28
// 第二章 C语言基础
// 2.1 数据类型
// 5、计算圆的面积与周长

# include <stdio.h>
# define PAI 3.14	// 定义符号常量（即“标识符”）——圆周率PAI（符号常量通常用大写字母表示）

void main()
{
	double r;		// 定义圆的半径
	double S;		// 定义圆的面积
	double L;		// 定义圆的周长

	printf("请输入圆的半径：");
	scanf_s("%lf", &r);

	// 计算圆的面积
	S = PAI * r * r;

	// 计算圆的周长
	L = 2 * PAI * r;

	printf("圆的面积 = %lf \n", S);
	printf("圆的周长 = %lf \n", L);
}