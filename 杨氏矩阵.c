/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



//杨氏矩阵
//题目来源：剑指offer
//题目内容：有一个数字矩阵，矩阵的每行从左到右是递增的，从上到下是递增的，请编写程序在这样的矩阵中
//查找某个数字是否存在，如果存在，输出该数在矩阵中的位置坐标。
//要求：时间复杂度小于O(n)
//思路：根据该矩阵的特点，从矩阵的右上角或左下角开始比较


int findNum(int arr[3][3], int k, char* px, char* py)
{
	int x = 0;
	int y = *py - 1;    //从右上角开始与k比较
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
	printf("请输入要查找的数字：>");
	scanf("%d", &find);
	int ret = findNum(arr, find, px, py);
	if (ret == 1)
	{
		printf("找到了, 在矩阵中坐标为(%d, %d)\n", *px, *py);
	}
	else
	{
		printf("没找到");
	}
	return 0;
}
*/