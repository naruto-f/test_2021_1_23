
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>






//题目：判断一个字符串是否是另一个字符串左旋后的其中一个结果
//常规做法：三次旋转法
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

void left_move(char* arr, int k)
{
	assert(arr);
	int size = strlen(arr);
	one_left_move(arr, arr + k - 1);
	one_left_move(arr + k, arr + size - 1);
	one_left_move(arr, arr + size - 1);
}

int is_left_string1(char* arr1, char* arr2)
{
	assert(arr1);
	assert(arr2);
	int size = strlen(arr1);
	int i = 0;
	for (i = 0; i < size - 1; ++i)
	{
		left_move(arr1, 1);
		int ret = strcmp(arr1, arr2);
		if (ret == 0)
		{
			return 1;
		}
	}
	return 0;

}

//法2：判断"cdefab"是不是"abcdefabcdef"的子串，若是则arr2 是arr1的一种左旋结果
int cmp_string(char* arr1, char* arr2, int size)
{
	while (size)
	{
		if (*arr1 == *arr2)
		{
			arr1++;
			arr2++;
			size--;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}



int is_left_string2(char* arr1, char* arr2)
{
	assert(arr1);
	assert(arr2);
	int size = strlen(arr1);
	if (strlen(arr1) != strlen(arr2))
	{
		return 0;
	}
	strncat(arr1, arr1, size);
    /*char* ret = strstr(arr1, arr2);  //使用系统库函数
	if (ret != NULL)
	{
		return 1;
	}*/
	int i = 0;
	for (i = 0; i < size; ++i)          
	{
		int ret = cmp_string(arr1 + i, arr2, size);   //使用自己写的函数判断是否是子串
		if (ret == 1)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "qdefab";
	//int ret = is_left_string1(arr1, arr2);
	int ret = is_left_string2(arr1, arr2);
	if (ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}

