/*
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����ˮ���⣺һƿ��ˮһԪǮ��������ƿ���Ի�һƿ����ˮ������20Ԫ����ˮʱ�ܹ����Ժȶ���ƿ��ˮ




int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	printf("�������뻨����Ǯ����ˮ>");
	scanf("%d", &money);
	total = money;
	empty = money;
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("�ܹ��ܺ�%dƿ��ˮ\n", total);
}
*/