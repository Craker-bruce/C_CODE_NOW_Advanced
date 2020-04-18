#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//#include<vld.h>

//模拟实现
void* my_realloc(void* memblock, size_t size)
{
	//1 申请一个更大的空间
	void* new_memblock = malloc(size);
	if (new_memblock != NULL)
		return NULL;
	//2 把原来的数据进行拷贝
	memcpy(new_memblock, memblock, size);
	//3 释放原有的空间
	free(memblock);

	//4  返回新的空间地址
	return new_memblock;
}
void main()
{
	int* ptr1 = (int*)malloc(sizeof(int) * 5);
	assert(ptr1 != NULL);
	for (int i = 0; i < 5; ++i)
		ptr1[i] = i + 1;
	//free(ptr1);
	int* tmp = NULL;
	tmp = my_realloc(ptr1, sizeof(int) * 10);
	if (tmp == NULL)
	{
		ptr1 = tmp;
	}
	else
	{
		free(ptr1);
		return;
	}
	for (int i = 5; i < 10; i++)
		ptr1[i] = i + 1;
	for (int i = 0; i < 10; ++i)
		printf("%d ", ptr1[i]);
}
/*
void main()
{
	int* ptr1 = (int*)malloc(sizeof(int) * 5);
	assert(ptr1 != NULL);
	for (int i = 0; i < 5; ++i)
		ptr1[i] = i + 1;
	//free(ptr1);
	int* tmp = NULL;
	tmp = realloc(ptr1, sizeof(int) * 10);
	if (tmp == NULL)
	{
		free(ptr1);
		return;
	}
	for (int i = 5; i < 10; i++)
		ptr1[i] = i + 1;
	for (int i = 0; i < 10; ++i)
		printf("%d ", ptr1[i]);
}


void main()
{
	int* ptr1 = (int*)malloc(sizeof(int) * 10);
	assert(ptr1 != NULL);
	int* ptr2 = (int*)calloc(10, sizeof(int));  //calloc会使用0进行初始化
	assert(ptr2 != NULL);
	free(ptr1);
	free(ptr2);
	ptr1 = NULL;
	ptr2 = NULL;
}

void main()
{
	//void *  泛型指针
	int n;
	printf("input n:");
	scanf("%d", &n);
	//int* str  =NULL;
	//str = (int*)malloc(sizeof(int) * n);
	int* ar = NULL;
	ar = (int*)malloc(sizeof(int) * n);
	free(ar); //预防野指针
	//ar = NULL;
	//free(ar);
	if (NULL == ar)
	{
		printf("NULL");
		return;
	}
	for (int i = 0; i < n; ++i)
	{
		ar[i] = i + 1;
		printf("%d ", ar[i]);
	}
}

void main()
{
	const int n = 10; //const 常量
	//int ar[n];
}

void main()
{
	int a = 10;
	int b = 20;
}

int main()
{
	//静态开辟
	int a = 0;
	char ar[10] = { 0 };
	return 0;
}
*/