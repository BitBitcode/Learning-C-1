//《C语言从入门到精通》P93
// 第三章 顺序与选择结构程序设计
// 3.6 经典范例
// 29、判断某月有几天

// “一三五七八十腊”

#include<stdio.h>

int main()
{
	int month;
	printf("请输入要查询的月份：\n");
	scanf_s("%d", &month);

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("%d月有31天哦", month);
		break;
	case 2:
		printf("%d月要看看是不是闰年哦", month);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("%d月有30天哦", month);
		break;
	default:
		printf("%d不是月哦，重新输入", month);
	}

	return 0;
}
