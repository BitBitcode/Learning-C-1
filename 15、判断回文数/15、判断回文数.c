//《C语言从入门到精通》P67
// 第三章 顺序与选择结构程序设计
// 3.1 C语句及赋值语句
// 15、判断回文数

#include <stdio.h>

// 函数的定义部分
int palind(char str[], int k, int i)
{
    
    if (str[k] == str[i - k] && k == 0)
    {
        return 1;
    }
    else if (str[k] == str[i - k])
    {
        palind(str, k - 1, i);
    }
    else
    {
        return 0;
    }
}

// 主函数部分
void main()
{
    int i = 0, n = 0;
    char ch, str[20];

    printf("请输入 一个整数：\n");
    // 将用户输入的字符存入数组“str[]”中，直到检测到按下回车（即输入了“\n”）
    while ((ch = getchar()) != '\n')
    {
        str[i] = ch;
        i++;
    }
    
    if (i % 2 == 0)     // 当字符串中字符的个数为偶数时 
    {
        n = palind(str, (i / 2), i - 1);        // 调用函数，并将返回值赋值给n
    }
    else                // 当字符串中字符的个数为奇数时
    {
        n = palind(str, (i / 2 - 1), i - 1);    // 调用函数，并将返回值赋值给n
    }

    // 根据函数“palind”的返回值判断是否为回文数
    if (n == 0)
    {
        printf("不是回文数！");
    }
    else
    {
        printf("是回文数！");
    }
}
