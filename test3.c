/*
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

回调函数的机制：回调函数就是一个通过函数指针调用的函数，如果你把函数的指针（地址）作为参数传递给另一个函数，
当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该函数的实现方直接调用，而是在特定的
事件或条件发生时由另外的一方调用的，用于对该事件或条件进行响应。


void print(char* src)
{
	printf("hehe:%s\n", src);
}

void test(void(*p)(char*))
{
	printf("test\n");
	p("bit");

}

int main()
{
	test(print);
	return 0;
}
*/
