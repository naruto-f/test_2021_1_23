/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


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


int main()
{
	int input = 0;
	int x = 0, y = 0;
	//使用函数指针数组来简化代码量，这时的函数指针数组又叫转义表
	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, XoR };
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 5)
		{
			printf("请输入两个操作数:>");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("结果为%d\n", ret);
		}
		else if (input == 0)
		{
			printf("正在退出\n");
			break;
		}
		else
		{
			printf("输入错误，请重新输入!\n");
			continue;
		}
	} while (input);
	return 0;
}
*/