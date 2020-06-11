//《C语言从入门到精通》P59
// 第二章 C语言基础
// 2.5 经典范例
// 13、检查字符类型

// ASCII码值在48~57之间：数字
// ASCII码值在65~90：大写字母
// ASCII码值在97~122：小写字母
// 除此之外是特殊字符

#include <stdio.h>

int main()
{
    char latter;
    printf("请输入一个字符：\n");
    latter = getchar();
    
    if ((48 <= latter) && (latter <= 57))
    {
        printf("ASCII码值在48~57之间，%c 是数字 \n", latter);
    }
    else if ((65 <= latter) && (latter <= 90))
    {
        printf("ASCII码值在65~90之间，%c 是大写字母 \n", latter);
    }
    else if ((97 <= latter) && (latter <= 122))
    {
        printf("ASCII码值在97~122，%c 是小写字母 \n", latter);
    }
    else
    {
        printf("%c 是特殊字符 \n", latter);
    }

    return 0;
}