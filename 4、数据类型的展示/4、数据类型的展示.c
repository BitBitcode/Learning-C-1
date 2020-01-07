//《C语言从入门到精通》P28
// 第二章 C语言基础
// 2.1 数据类型
// 4、数据类型的展示（自制）

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int m = 0;
	printf("模式选择（输入对应序号按回车结束）：\n");
	printf("1、演示模式（自动讲解所有数据类型）\n2、查询模式（查询某个数据类型的相关信息）\n");
	printf("----------------------------------------------------------------\n\n");
	scanf_s("%d", &m);
	//getchar();
	//printf("已选择%d\n\n",m);
	//  两个“\n\n”可以实现空一行的效果，排版更舒服

	//  演示模式部分
	//  这里初学，以后两个模块还可以用函数来写
	if (m == 1)
	{
		printf("1、演示模式（自动讲解所有数据类型）\n");
		printf("----------------------------------------------------------------\n\n");
		
		printf("一、数据结构分为四种类型:\n\n");
		printf("	1、基本类型：\n");
		printf("		（1）整型：短整型，基本整型，长整型；\n");
		printf("		（2）字符型；\n");
		printf("		（3）实型（也称“浮点型”）：单精度型，双精度型；\n\n");
		printf("	2、构造类型：\n");
		printf("		（1）数组类型；\n");
		printf("		（2）结构体类型；\n");
		printf("		（3）共用体类型；\n\n");
		printf("	3、指针类型：\n\n");
		printf("	4、空类型：\n\n");
		system("pause");

		printf("二、数据分为两种类型\n\n");
		printf("	（一）常量\n");
		printf("		1、数值型常量\n");
		printf("			（1）整型常量：八进制（0开头）十进制（无前缀），十六进制（0X或0x为前缀）；\n");
		//  这里本来想写出他们的符号“%o，%d，%x”，但是输出后产生了乱码
		printf("							整型常量按照数值范围分为：长整型、短整型、符号整型、无符号整型；\n");
		printf("			（2）实型常量（也称“浮点型常量”）：十进制数形式，指数形式（十进制数+e或E（阶码标志）+阶码）；\n");
		printf("		2、字符型常量\n");
		printf("			（1）字符常量：一般字符常量（putchar函数），转义字符常量；\n");
		printf("			（2）字符串常量：如printf函数，字符串常量长度是字符个数加1，因为结尾系统自动加了“\\0”；\n");
		// 注意：这里输出的时候“\0”不能直接输出，会被系统认为是字符串的结束，而要用“\\”转义符号来输出“\”
		printf("		3、符号型常量：即标识符（通常大写），如定义圆周率为Pi，可以为编程和阅读带来方便\n\n");
		printf("	（二）变量\n");
		printf("		1、整型变量\n");
		printf("			（1）有符号基本整型：[signed] int；\n");
		printf("			（2）无符号基本整型：unsigned [int]；\n");
		printf("			（3）有符号短整型：[signed] short [int]；\n");
		printf("			（4）无符号短整型：unsigned short [int]；\n");
		printf("			（5）有符号长整型：[signed] long [int]；\n");
		printf("			（6）无符号长整型：unsigned long [int]；\n");
		printf("		2、实型变量\n");
		printf("			（1）单精度类型：float；\n");
		printf("			（2）双精度类型：double；\n");
		printf("			（3）长双精度类型：long double；\n");
		printf("		3、字符型变量\n");
		printf("             在内存中占一个字节（8位），关键字：char。\n");
		system("pause");
	}

	//  查询模式部分
	if (m == 2)
	{
		while (m == 2)
		{
			printf("2、查询模式（查询某个数据类型的相关信息）\n");
			printf("----------------------------------------------------------------\n\n");
			printf("支持查询的关键词如下所示：\n\n");

			//  定义字符串数组的方法，不需要定义数组长度，并且“{}”可以省略
			char w1[] = { "signed int" };            //  whole：w1[0]-w1[9]，int：w1[7]-w1[9]
			char w2[] = { "unsigned int" };          //  whole：w2[0]-w2[11]，unsigned：w2[0]-w2[7]
			char w3[] = { "signed short int" };      //  whole：w3[0]-w3[15]，short：w3[7]-w3[11]
			char w4[] = { "unsigned short int" };    //  whole：w4[0]-w4[17]，unsigned short：w4[0]-w4[13]
			char w5[] = { "signed long int" };       //  whole：w5[0]-w5[14]，long：w5[7]-w5[10]
			char w6[] = { "unsigned long int" };     //  whole：w6[0]-w6[17]，unsigned long：w6[0]-w6[12]
			char w7[] = { "float" };
			char w8[] = { "double" };
			char w9[] = { "long double" };
			char w10[] = { "char" };

			//  显示所有可查询关键词的全称
			printf("全称关键词：\n");
			puts(w1);
			puts(w2);
			puts(w3);
			puts(w4);
			puts(w5);
			puts(w6);
			puts(w7);
			puts(w8);
			puts(w9);
			puts(w10);
			printf("\n");

			//  注意：
			//  （1）puts()函数需要头文件：string.h！
			//  （2）C++ 中可以使用 puts()函数！

			//  显示整型变量的简写名称
			printf("简写关键词：\n");

			int i;
			for (i = 7; i <= 9; i++)
				printf("%c", w1[i]);
			printf("\n");
			for (i = 0; i <= 7; i++)
				printf("%c", w2[i]);
			printf("\n");
			for (i = 7; i <= 11; i++)
				printf("%c", w3[i]);
			printf("\n");
			for (i = 0; i <= 13; i++)
				printf("%c", w4[i]);
			printf("\n");
			for (i = 7; i <= 10; i++)
				printf("%c", w5[i]);
			printf("\n");
			for (i = 0; i <= 12; i++)
				printf("%c", w6[i]);
			printf("\n\n");

			// 获取用户输入的词
			printf("输入你要查询的数据类型关键词，按回车结束。\n");
			char s[18] = { "xxxxSTxxxxxxxxxxxE" };  //  18个字符
			getchar();
			// 如果get()函数前面用过了scanf()函数，会产生一个多余的回车

			//scanf_s("%s",s,18);
			//  用scanf_s()函数输入字符串的时候，需要加上字符串长度（防止溢出）

			gets_s ( s, 18 );
			//  注意：
			//  （1）gets()函数需要头文件：string.h！
			//  （2）C++ 中不能使用gets()函数！

			printf("您输入了：\n");
			for (i = 0; i <= 17; i++)
			{
				printf("%c，", s[i]);
			}
			//  用户输入结束后，getcher()函数会将剩余数组元素赋值为"\0"的空字符

			printf("\n");
			printf("数组中第5个字符s[4]为：%c，\n", s[4]);
			printf("数组中第6个字符s[5]为：%c，\n", s[5]);
			printf("数组中第18个字符s[17]为：%c，\n", s[17]);
			int l = sizeof(s);
			printf("该数组的长度为：%d\n", l);
			printf("----------------------------------------------------------------\n\n");

			//  以下是比对单词的算法，分支1、2、3、7只有一种情况，其他的对应多种情况
			int n = 0;
			int t = 0;
			//  分支 1：float，w7
			if (s[0] == 'f')
			{
				//  判断未输入的字符（用户输入结束后，getcher()函数会将剩余数组元素赋值为"\0"的空字符）
				for (i = 5; 1 <= 18; i++)
				{
					if (s[i] == '\0')
					{
						t = 1;
					}
					else
					{
						t = 0;
					}
				}

				if (s[1] == 'l' && s[2] == 'o' && s[3] == 'a' && s[4] == 't' && t==1)
				{
					n = 7;
					printf("分支 1 查询到：");
					puts(w7);
				}
				else
				{
					printf("分支 1 没有查询到该关键词，请检查输入是否正确！\n\n");
				}
			}

			//  分支 2：double，w8
			else if (s[0] == 'd')
			{
				if (s[1] == 'o' && s[2] == 'u' && s[3] == 'b' && s[4] == 'l' && s[5] == 'e')
				{
					n = 8;
					printf("查询到：");
					puts(w8);
				}
				else
				{
					printf("分支 2 没有查询到该关键词，请检查输入是否正确！\n\n");
				}
			}

			//  分支 3：char，w10
			else if (s[0] == 'c')
			{
				if (s[1] == 'h' && s[2] == 'a' && s[3] == 'r')
				{
					n = 10;
					printf("查询到：");
					puts(w10);
				}
				else
				{
					printf("分支 3 没有查询到该关键词，请检查输入是否正确！\n\n");
				}
			}

			//  分支 4：三种情况，long, long int, long double
			else if (s[0] == 'l')
			{
				if (s[1] == 'o' && s[2] == 'n' && s[3] == 'g' || s[5] == 'i')    //  long, long int，w5
				{
					n = 5;
					printf("查询到：");
					puts(w5);
				}
				else if (s[5] == 'd')    //  long double，w9
				{
					n = 9;
					printf("查询到：");
					puts(w9);
				}
				else
				{
					printf("分支 4 没有查询到该关键词，请检查输入是否正确！\n\n");
				}
			}

			//  分支 5：三种情况，signed int，signed short int，signed long int
			else if (s[0] == 's')
			{
				if (s[7] == 'i')    //  signed int，w1
				{
					n = 1;
					printf("查询到：");
					puts(w1);
				}
				else if (s[7] == 's')    //  signed short int，w3
				{
					n = 3;
					printf("查询到：");
					puts(w3);
				}
				else if (s[1] == 'h' && s[2] == 'o' && s[3] == 'r' && s[4] == 't')    //  short int，w3
				{
					n = 3;
					printf("查询到：");
					puts(w3);
				}
				else if (s[7] == 'l')    //  signed long int，w5
				{
					n = 5;
					printf("查询到：");
					puts(w5);
				}
				else
				{
					printf("分支 5 没有查询到该关键词，请检查输入是否正确！\n\n");
				}
			}

			//  分支 6：
			else if (s[0] == 'u')    //  3种情况：unsigned int，unsigned short int，unsigned long int
			{
			    if (s[1] == 'n')    // unsigned
			    {
				    n = 2;
			    	printf("查询到：");
				    puts(w2);
			    }
				if (s[9] == 'i')    // unsigned int
				{
					n = 2;
					printf("查询到：");
					puts(w2);
				}
				else if (s[9] == 's')    // unsigned short int
				{
					n = 4;
					printf("查询到：");
					puts(w4);
				}
				else if (s[9] == 'l')    // unsigned long int
				{
					n = 6;
					printf("查询到：");
					puts(w6);
				}
				else
				{
					printf("分支 6 没有查询到该关键词，请检查输入是否正确！\n\n");
				}
			}

			//  分支 7：int，w1
			else if (s[0] == 'i')
			{
				if (s[1] == 'n' && s[2] == 't')    //  int，w1
				{
					n = 1;
					printf("查询到：");
					puts(w1);
				}
				else
				{
					printf("分支 7 没有查询到该关键词，请检查输入是否正确！\n\n");
				}
			}

			//  分支 8：从第一个字母开始就没有查找到的情况
			else
			{
				printf("所有分支都没有查询到该关键词，请检查输入是否正确！\n\n");
			}
			
			printf("\n");

			//  介绍部分
			/*
			switch (n)
			{
			case 1:
			    break;
			case 2:
			   break;
			case 3:
			   break;
			case 4:
			   break;
			case 5:
			   break;
			case 6:
			   break;
			default:
			    break
			}
			*/

			system("pause");
		}
	}

	//  错误输入的处理（将来考虑加入循环体，否则需要重新启动程序。已加入死循环，哈哈）
	else
	{
	    printf("没有此序号！请输入有效数字！");
	}
}