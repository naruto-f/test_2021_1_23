/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void bubble_sort(int arr[], int size)
{
	int i = 0;
	int flag = 0;
	for (i = 0; i < size - 1; ++i)
	{
		int j = 0;
		for (j = 0; j < size - 1 - i; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}




int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1, 0 };
	int size = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, size);
	int i = 0;
	for (i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/