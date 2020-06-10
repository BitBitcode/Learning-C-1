//《C语言从入门到精通》P44
// 第二章 C语言基础
// 2.3 变量
// 8、使用字符型变量

#include <stdio.h>

int main()
{
	// 定义两个字符型变量，其中一个赋值为字符，另一个赋值为数字
	char latter_1 = 'a';
	char latter_2 = 97;

	// 定义两个整形变量，其中一个赋值为字符，另一个赋值为数字
	int number_1 = 'a';
	int number_2 = 97;

	printf("由于字符数据在内存中存储的是 字符的ASCLL码，所以字符型数据可以以字符的形式输出，也可以以整数形式输出：\n");
	printf("%c \n", latter_1);
	printf("%d \n", latter_2);
	printf("%c \n", number_1);
	printf("%d \n", number_2);

	printf("字符数据与整形数据之间的运算：\n");
	latter_1 = latter_1 + 8;
	latter_2 = latter_2 - latter_1 + 10;
	printf("%c \n", latter_1);
	printf("%d \n", latter_2);
	printf("%c \n", number_1);
	printf("%d \n", number_2);

	return 0;
}
