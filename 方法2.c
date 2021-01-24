/*
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//使用回调函数解决代码冗余的问题
void menu()
{
	printf("******************************************************************\n");
	printf("******* 1.Add ************************ 2.Sub *********************\n");
	printf("******* 3.Mul ************************ 4.Div *********************\n");
	printf("******* 5.XoR ************************ 0.exit ********************\n");
	printf("******************************************************************\n");
}
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int XoR(int x, int y)
{
	return x ^ y;
}

void Clc(int(*p)(int, int))
{
	int x = 0, y = 0;
	printf("请输入两个操作数:>");
	scanf("%d%d", &x, &y);
	int ret = p(x, y);
	printf("结果为%d\n", ret);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Clc(Add);
			break;
		case 2:
			Clc(Sub);
			break;
		case 3:
			Clc(Mul);
			break;
		case 4:
			Clc(Div);
			break;
		case 5:
			Clc(XoR);
			break;
		case 0:
			printf("正在退出！\n");
			break;
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}
*/