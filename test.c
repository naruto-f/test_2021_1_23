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
	//ʹ�ú���ָ���������򻯴���������ʱ�ĺ���ָ�������ֽ�ת���
	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, XoR };
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 5)
		{
			printf("����������������:>");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("���Ϊ%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�����˳�\n");
			break;
		}
		else
		{
			printf("�����������������!\n");
			continue;
		}
	} while (input);
	return 0;
}
*/