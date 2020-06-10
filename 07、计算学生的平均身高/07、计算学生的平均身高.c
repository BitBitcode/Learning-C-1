//《C语言从入门到精通》P38
// 第二章 C语言基础
// 2.1 数据类型
// 6、计算学生平均身高

#include <stdio.h>

int main()
{
	float height_Kiana;
	float height_Mei;
	float height_Bronya;
	float average;

	printf("请输入琪亚娜的身高：");
	scanf_s("%f", &height_Kiana);

	printf("请输入芽衣的身高：");
	scanf_s("%f", &height_Mei);

	printf("请输入布洛妮娅的身高：");
	scanf_s("%f", &height_Bronya);

	average = (height_Kiana + height_Mei + height_Bronya) / 3;
	printf("御三家的平均身高是(→_→)：%f", average);

	return 0;
}