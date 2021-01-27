/*
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//喝汽水问题：一瓶汽水一元钱，两个空瓶可以换一瓶新汽水，当花20元买汽水时总共可以喝多少瓶汽水




int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	printf("请问您想花多少钱买汽水>");
	scanf("%d", &money);
	total = money;
	empty = money;
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("总共能喝%d瓶汽水\n", total);
}
*/