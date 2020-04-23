#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
//编写一个函数找出这两个只出现一次的数字
int FindNumber(int ar[], int n)
{
	
}
void main()
{
	int ar[] = { 1,2,4,6,5,4,3,2,1 };
	int n = sizeof(ar) / sizeof(ar[0]);
	printf("value = %d\n", FindNumber(ar, n));
}
*/
/*
//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明

typedef struct Test
{
	int a;
	char b;
	double c;
}Test;
#define offset() 
void main()
{
	printf("offset = %d\n", offset(Structure,Test.a));
}
*/
/*
//写一个宏，可以将一个整数字的奇数位和偶数位交换。
#define swap(n) (((n)&((0x55555555)<<1)) | ((n)&((0xaaaaaaaa)>>1)))
void main()
{
	//0000 0100 0111 0111 0010 0110 0010 1011

	//size_t value = 74917491;
	size_t value = 1223456;
	printf("%d\n", swap(value));
}
*/