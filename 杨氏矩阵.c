/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



//���Ͼ���
//��Ŀ��Դ����ָoffer
//��Ŀ���ݣ���һ�����־��󣬾����ÿ�д������ǵ����ģ����ϵ����ǵ����ģ����д�����������ľ�����
//����ĳ�������Ƿ���ڣ�������ڣ���������ھ����е�λ�����ꡣ
//Ҫ��ʱ�临�Ӷ�С��O(n)
//˼·�����ݸþ�����ص㣬�Ӿ�������Ͻǻ����½ǿ�ʼ�Ƚ�


int findNum(int arr[3][3], int k, char* px, char* py)
{
	int x = 0;
	int y = *py - 1;    //�����Ͻǿ�ʼ��k�Ƚ�
	while (x <= 2 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}





int main()
{
	int arr[3][3] = { { 1, 2, 3}, { 4, 5, 6}, { 7, 8, 9 } };
	int find = 0;
	int row = 3;
	int col = 3;
	int* px = &row;
	int* py = &col;
	printf("������Ҫ���ҵ����֣�>");
	scanf("%d", &find);
	int ret = findNum(arr, find, px, py);
	if (ret == 1)
	{
		printf("�ҵ���, �ھ���������Ϊ(%d, %d)\n", *px, *py);
	}
	else
	{
		printf("û�ҵ�");
	}
	return 0;
}
*/