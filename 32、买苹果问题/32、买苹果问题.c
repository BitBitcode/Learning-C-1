//《C语言从入门到精通》P102
// 第四章 顺序与选择结构程序设计
// 4.1 while及do while语句
// 32、买苹果问题

/*题目要求：
	小雨买苹果，每个苹果0.8元，第一天买两个，第二天开始每天买前一天的两倍，
	直到购买的苹果数量达到不超过100的最大值，求小雨平均每天花多少钱？
*/

#include<stdio.h>

int main()
{
	int day = 1;				// 天  数
	int num = 2;				// 个  数

	float price = 0.8;			// 价  格
	float total = 0;			// 总  价
	float average;				// 平  均

	while (num <= 100)
	{
		price = 0.8 * num;		// 第一天 = 0.8 × 2 = 1.6（元）
		total = total + price;	// 第一天 = 0 + 1.6 = 1.6（元）
		day = day++;			// day = 0 + 1 = 1（天）
		num = num * 2;			// num = 2 × 2 = 4（个）
	}
	
	// 注意：最后一次循环是 64 个，两倍是 128，条件为假，跳出循环，但是天数多了 1 天
	average = total / (day - 1);
	printf("小雨平均每天花 %f 元。\n", average);

	return 0;
}