//《C语言从入门到精通》P91
// 第三章 顺序与选择结构程序设计
// 3.6 经典范例
// 28、运输公司的计费

// 题目要求：
// < 25 km：没有折扣
// 25~50 km：5% 折扣
// 50~100 km：10% 折扣
// 100~200 km：15% 折扣
// 200~300 km：20% 折扣
// > 300 km：30% 折扣
// 一律按左边闭区间算

#include<stdio.h>

int main()
{
	int m;				// 邮寄方式

	float price;		// 单价
	float weight;		// 重量
	int length;			// 路程

	float origin_price;	// 原价
	float discount;		// 折扣
	float total;		// 总价
	
	printf("请选择邮寄方式：1、平邮（15/kg）；2、隔日达（20/kg）；3、次日达（30/kg） \n");
	scanf_s("%d", &m);

	printf("请输入货物重量（kg）：\n");
	scanf_s("%f", &weight);

	printf("请输入邮寄距离，四舍五入，不足一公里按一公里算（km）：\n");
	scanf_s("%d", &length);

	switch (m)
	{
	case 1:
		price = 15;
		break;
	case 2:
		price = 20;
		break;
	case 3:
		price = 30;
		break;
	}
	
	origin_price = price * weight * length;
	printf("您当前的消费为：%f（不含折扣）\n", origin_price);

	if (length < 25)
	{
		discount = 1.00;
		printf("当前消费没有优惠！\n");
	}
	else if (length >= 25 && length < 50)
	{
		discount = 0.95;
		printf("当前消费优惠：9.5折！\n");
	}
	else if (length >= 59 && length < 100)
	{
		discount = 0.90;
		printf("当前消费优惠：9折！\n");
	}
	else if (length >= 100 && length < 200)
	{
		discount = 0.85;
		printf("当前消费优惠：8.5折！\n");
	}
	else if (length >= 200 && length < 300)
	{
		discount = 0.80;
		printf("当前消费优惠：8折！\n");
	}
	else if (length >= 300)
	{
		discount = 0.70;
		printf("当前消费优惠：7折！\n");
	}
	else
	{
		printf("路程错误，请检查输入！\n");
	}

	total = origin_price * discount;
	printf("折后价格为：%f \n", total);

	return 0;
}
