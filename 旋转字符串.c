/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//��Ŀ����
//ʵ��һ�����������������ַ����е�k���ַ�
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDBA
//ע��������������Ҳ��������


//��1��������ⷨ
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

//��2��������ת��
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
	printf("��������ַ�����%s\n", arr);
	return 0;
}
*/