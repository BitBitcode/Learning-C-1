//《C语言从入门到精通》P90
// 第三章 顺序与选择结构程序设计
// 3.5 switch 语句
// 27、加油站费用

// 某加油站有a、b、c三种汽油，售价分别为：3.25、3.00、2.75
//还有自主加油或办理年卡两种服务类型，可以得到5%、10%的优惠

#include<stdio.h>

void main()
{
	float a = 3.25, b = 3.00, c = 2.75;
	float price = 0;	// 当前选择汽油的单价
	float discount = 1; // 当前服务类型对应的折扣
	float total = 0;	// 总价
	float x;			// 加油量
	char y, z;			// 汽油种类，服务等级

	printf("欢迎使用！\n");
	printf("请选择汽油种类：a，b，c \n");
	scanf_s("%c", &y, 1);

	printf("请输入加油量（L）： \n");
	scanf_s("%f", &x);

	printf("可选服务：自主加油（s），办理年卡（b），普通服务（p）\n");
	/* 实际运行的时候发现有错误：scanf()函数读取了'\n'，因为之前的输入后内存有'\n'，
		之前的程序为什么没有这个问题？因为之前输入的是数字，scanf()函数会自动从第一个不为空格或回车的开始取。
		为什么“汽油种类”没有这个问题，因为“汽油种类”的部分还没有输入，内存是空的，没有'\n'
		所以最终用以下语句处理这个问题：
		if (z=getchar()!='\n')
		{
			scanf_s("%c", &z, 1);
		}
		else
		{
		scanf_s("%c", &z, 1);
		}
		事实上if语句在判断条件的时候，getchar()就已经把'\n'吃掉了，所以能得到预期，但显然这样解决还不完美，
		所以用 getche() 或 getch()，不过需要注意的是，getch()没有输入回显。
	*/
	z = getche();
	printf("\n");	// 由于getche()不需要确认，也就导致后面的输出内容显示在其后，所以加一个换行符

	// 结算单价
	switch (y)
	{
	case 'a':
		price = a;
		break;
	case 'b':
		price = b;
		break;
	case 'c':
		price = c;
		break;
	}

	// 结算服务类型
	switch (z)
	{
	case 's':
		discount = 0.95;	// 9.5折
		break;
	case 'b':
		discount = 0.90;	// 9 折
		break;
	case 'p':
		discount = 1.00;	// 无折扣
		break;
	}

	// 结算总价
	total = price * discount * x;
	printf("您本次加油的费用为：%f \n", total);
}
