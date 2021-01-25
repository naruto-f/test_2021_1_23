#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
     qsort是系统库函数，可以实现各种数据类型元素的快速排序
     qsort(s, size, sizeof(s[0]), cmp_???(void* e1, void* e2));
     第一个参数：待排序数组的首元素地址
     第二个参数：待排序数组的大小
     第三个参数：待排序数组的每个元素大小
     第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现函数指针的两个参数
                 是：待比较的两个元素的地址   void* e1，e2；
*/

//重写的bubble_sort()是仿照库函数qsort的实现思想，可以实现各种数据类型的冒泡排序

struct stu
{
    int age;
    char name[10];
};



void swap(char* arr1, char* arr2, int width)
{
    while (width)
    {
        char temp = *arr1;
        *arr1 = *arr2;
        *arr2 = temp;
        arr1++;
        arr2++;
        width--;
    }
}


int cmp_int(const void* e1, const void* e2)    //在c++中与之类似功能的函数叫仿函数
{
    return *(int*)e1 - *(int*)e2;
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
    return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
    return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

bubble_sort(void* arr, int size, int width, int(*cmp)(const void* ,const void*))
{
    int i = 0;
    int flag = 0;
    for (i = 0; i < size - 1; ++i)
    {
        int j = 0;
        for (j = 0; j < size - 1 - i; ++j)
        {
            if (cmp(((char*)arr + width * j),((char*)arr + width * (j + 1))) > 0)
            {
                swap((char*)arr + width * j, (char*)arr + width * (j + 1), width);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}


/*
int main()
{
    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size, sizeof(arr[0]), cmp_int);
    int i = 0;
    for (i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/


int main()
{
    struct stu st[3] = { {12, "zhangsan"}, {10, "lisi"}, {80, "wanger"} };
    int size = sizeof(st) / sizeof(st[0]);
    //bubble_sort(st, size, sizeof(st[0]), cmp_stu_by_age);
    bubble_sort(st, size, sizeof(st[0]), cmp_stu_by_name);
    return 0; 
}
