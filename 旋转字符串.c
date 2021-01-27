/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//题目内容
//实现一个函数，可以左旋字符串中的k个字符
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDBA
//注：本题是左旋，也可以右旋


//法1：暴力求解法
void left_move1(char* arr, int k)
{
	int size = strlen(arr);
	int i = 0;
	for (i = 0; i < k; ++i)
	{
		char temp = *arr;
		int j = 0;
		for (j = 0; j < size - 1; ++j)
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + size - 1) = temp;
	}
}

//法2：三次旋转法
void one_left_move(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

void left_move2(char* arr, int k)
{
	assert(arr);
	int size = strlen(arr);
	one_left_move(arr, arr + k - 1);
	one_left_move(arr + k, arr + size - 1);
	one_left_move(arr, arr + size - 1);
}


int main()
{
	char arr[10] = "abcdef";
	//left_move1(arr, 2);
	left_move2(arr, 2);
	printf("左旋后的字符串：%s\n", arr);
	return 0;
}
*/