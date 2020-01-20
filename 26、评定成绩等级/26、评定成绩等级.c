//《C语言从入门到精通》P89
// 第三章 顺序与选择结构程序设计
// 3.5 switch 语句
// 26、评定成绩等级

#include<stdio.h>

void main()
{
	int mark1, mark2=0;
	printf("请输入成绩：\n");
	scanf_s("%d", &mark1);

	if (mark1 == 100)		// 100分是三位数，特殊处理一下（100分和90分以上都是A级）
	{
		mark2 = 9;
	}
	mark2 = mark1 / 10;		// 由于等级不用管个位数，所以除以10之后得到了十位数（整型变量丢失了小数）

	switch (mark2)
	{
	case 9:
		printf("A 级！\n");
		break;
	case 8:
		printf("B 级！\n");
		break;
	case 7:
		printf("C 级！\n");
		break;
	case 6:
		printf("D 级！\n");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		printf("不合格！\n");
		break;
	default:
		printf("输入错误，请重新输入\n");
	}
}
