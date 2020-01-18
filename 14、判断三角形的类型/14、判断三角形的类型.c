//《C语言从入门到精通》P59
// 第二章 C语言基础
// 14、判断三角形的类型.c

#include <stdio.h>

void main()
{
    int a, b, c;
    printf("输入三角形的三边长度：\n");
    scanf_s("%d %d %d", &a, &b, &c);
    if (a+b>c && b+c>a && a+c>b)
    {
        if (a==b==c)
        {
            printf("等边三角形\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("等腰三角形\n");
        }
        else if (a * a + b * b == c * c  || b * b + c * c == a * a || a * a + c * c == b * b)
        {
            printf("直角三角形");
        }
        else
        {
            printf("一般三角形\n");
        }
    }
    else
    {
        printf("不能构成三角形！\n");
    }
}
