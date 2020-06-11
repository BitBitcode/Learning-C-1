//《C语言从入门到精通》P57
// 第二章 C语言基础
// 2.4 运算符与表达式
// 11、判断闰年

#include <stdio.h>

int main()
{
    int year = 0;
    printf("请输入要判断的年份：\n");
    scanf_s("%d", &year);
    if ((year%4)==0 && (year%100)!=0 || (year%400)==0)
    {
        printf("%d 年是闰年", year);
    }
    else
    {
        printf("%d 年不是闰年", year);
    }
    
    return 0;
}
