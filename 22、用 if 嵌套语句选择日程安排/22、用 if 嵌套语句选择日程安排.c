//《C语言从入门到精通》P85
// 第三章 顺序与选择结构程序设计
// 3.4 if 语句
// 22、用 if 嵌套语句选择日程安排

#include<stdio.h>

int main()
{
	int day = 0;

	int Monday = 1;
	int Tuesday = 2;
	int Wednesday = 3;
	int Thursday = 4;
	int Friday = 5;
	int Saturday = 6;
	int Sunday = 7;

	printf("请输入星期：（数字1~7）\n");
	scanf_s("%d", &day);

	// 这里可以考虑加入检验输入是否正确的代码

	if(day > Friday)
	{
		printf("嗯，今天是周末\n");
		if (day == Saturday)
		{
			printf("和朋友去逛街！\n");
		}
		else
		{
			printf("去陪爸爸妈妈！\n");
		}
	}
	else
	{
		if (day == Monday)
		{
			printf("新的一周开始啦！\n");
		}
		else
		{
			printf("周内呢，今天也要元气满满哦\n");
		}
	}

	return 0;
}
