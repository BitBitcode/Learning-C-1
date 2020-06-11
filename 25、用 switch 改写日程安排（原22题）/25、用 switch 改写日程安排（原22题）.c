//《C语言从入门到精通》P88
// 第三章 顺序与选择结构程序设计
// 3.5 switch 语句
// 25、用 switch 改写日程安排（原22题）

#include<stdio.h>

int main()
{
	int day=0;
	printf("请输入星期（1~7）：\n");
	scanf_s("%d", &day);
	
	switch (day)
	{
	case 1:
		printf("新的一周开始啦！\n");
		break;
	case 2:
	case 3:
	case 4:
	case 5:
		printf("周内呢，今天也要元气满满哦\n");
		break;
	case 6:
		printf("和朋友去逛街！\n");
		break;
	case 7:
		printf("去陪爸爸妈妈！\n");
		break;
	default:
		printf("请输入有效的数字！（数字1~7，按回车确认）\n");
	}

	return 0;
}

// case 2: ~ case 5: 是多路开关模式，即day的值为2、3、4、5时执行的是同一个语句
