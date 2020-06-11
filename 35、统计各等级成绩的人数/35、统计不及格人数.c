//《C语言从入门到精通》P109
// 第四章 顺序与选择结构程序设计
// 4.2 for 语句
// 35、统计不及格人数

// 本例相当于一个计数器

#include<stdio.h>

int main()
{
	int i;					// 计数变量
	int num;				// 学生总人数
	int mark;				// 学生成绩	
	int count = 0;			// 计数器的值（本例中为“不及格人数”）

	printf("请输入学生人数： \n"); 
	scanf_s("%d", &num);
	printf("请输入分数，按回车继续 \n");
	
	for (i = 1; i <= num; i++)
	{
		scanf_s("%d", &mark);
		if (mark < 60)
		{
			count = count + 1;
		}
	}
	printf("不及格人数为：%d \n", count);

	return 0;
}
