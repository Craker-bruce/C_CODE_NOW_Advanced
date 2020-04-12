#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int compare(const void* elem1, const void* elem2)
{
   	//return (*(int*)elem1 - *(int*)elem2);  // >0 <0  ==0
	return (*(int*)elem2 - *(int*)elem1);
}
void main()
{
	int ar[] = { 3,5,7,8,100,2,9,103,10,7,4,1,23,12,56,73,45 };
	int n = sizeof(ar) / sizeof(ar[0]);
	PrintfArray(ar, n);
	//BubbleSort(ar,n);
	qsort(ar, n, sizeof(ar[0], compare));//回调函数
	PrintfArray(ar, n);
}
*/


/*
void main()
{
	int a = 10;
	double b = 12.34;

	a = b;     //隐示转换
	a = (int)b;//显示转换
}
*/
/*
//代码1
(*(void(*)())0)();

//代码2
void (*signal1(int, void(*)(int)))(int);
*/

/*
//1.
int (*func)(int*, int (*)(int*));
//首先func是一个指针，该指针指向函数，所以是函数指针，
//所指函数为一个指针的参数和另外一个函数指针的参数，返回值为整型
//2.
int (*func[5])(int*);
//是一个数组，数组有五个元素，每个元素就是一个函数指针，存放的函数有整型指针的参数和一个整型返回值
//3.
int (*(*func)[5])(int*);
//是一个指针，指针指向的是一个数组，数组有五个元素，
//每个元素又是一个指针，所指的类型为函数，函数存放的参数为一个整型指针和一个整型返回值，
//数组存的是函数指针的内容
//4.
int(*(*func)(int*))[5];
//是一个指针类型，指针指向的是函数，函数有一个整型指针参数和一个指针的返回，返回的指针是来指向数组的，
//所指数组为五个整型元素
//5.
int*(*func(int*))[5];
//是一个函数，函数的参数为整型指针，有个返回值，返回值是一个数组指针，
//所指数组为五个元素，每个元素是一个整型指针
*/

/*
void main()
{
	int (*a)();     //指针 -> 函数
	int (*a[10])(); //数组用来保存了函数指针 -> 转义表
}
*/
/*
int Max(int a, int b)
{
	return a > b ? a : b;
}
int Min(int a, int b)
{
	return a > b ? b : a;
}

/////////////////////////
/////////////////////////
//通用函数
//回调函数    回过头来调用的函数
int fun(int a, int b, int (*pfun)(int, int))
{
	//return (*pfun)(a,b)
	return pfun(a, b);
}

void main()
{
	int a = 10;
	int b = 20;
	int res = fun(a, b, Min);
	printf("res = %d\n", res);
}
*/
/*
int fun(int a, int b)
{
	return a + b;
}

//argc = argument count  参数个数
//argv = argument value  参数值
int main(int argc,char*argv[])
{
	int a, b;
	printf("input a and b:>");
	scanf("%d %d", &a, &b);
	int res = fun(a, b);
	printf("%d + %d = %d\n", a, b, res);
	return 0;
}
*/