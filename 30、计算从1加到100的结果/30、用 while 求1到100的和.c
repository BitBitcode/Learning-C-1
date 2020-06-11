//《C语言从入门到精通》P98
// 第四章 顺序与选择结构程序设计
// 4.1 while及do while语句
// 30、计算从1加到100的结果

#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0;

	// while型
	// 易错点：当i=99时，sum=sum+99，i=99+1=100，若判断表达式为“i<100”此时条件为假，将不会加上100，所以条件因当改为“i<=100”
	while (i <= 100)
	{
		sum = sum + i;
		i = i++;
	}
	printf("我是while计算的：1+2+3+...+99+100=%d \n", sum);
	printf("此时的i=%d \n\n", i);

	
	// 先清除前面代码计算的值
	i = 0;
	sum = 0;
	
	// do while型
	do
	{
		sum = sum + i;
		i = i++;
	} while (i <= 100);
	printf("我是do while计算的：1+2+3+...+99+100=%d \n", sum);
	printf("此时的i=%d \n\n", i);

	return 0;
}


/* 
	注意：虽然两种写法在本例没有明显的区别，
	但实际上在do while语句中，无论是否成立，循环体都被执行了一次，然后再判断；
	而while语句中，如果条件不符合，就根本不会执行循环体。
	（可以将上面代码中的条件改为“i>100”，会发现输出的i是不相同的）
*/
