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
	qsort(ar, n, sizeof(ar[0], compare));//�ص�����
	PrintfArray(ar, n);
}
*/


/*
void main()
{
	int a = 10;
	double b = 12.34;

	a = b;     //��ʾת��
	a = (int)b;//��ʾת��
}
*/
/*
//����1
(*(void(*)())0)();

//����2
void (*signal1(int, void(*)(int)))(int);
*/

/*
//1.
int (*func)(int*, int (*)(int*));
//����func��һ��ָ�룬��ָ��ָ�����������Ǻ���ָ�룬
//��ָ����Ϊһ��ָ��Ĳ���������һ������ָ��Ĳ���������ֵΪ����
//2.
int (*func[5])(int*);
//��һ�����飬���������Ԫ�أ�ÿ��Ԫ�ؾ���һ������ָ�룬��ŵĺ���������ָ��Ĳ�����һ�����ͷ���ֵ
//3.
int (*(*func)[5])(int*);
//��һ��ָ�룬ָ��ָ�����һ�����飬���������Ԫ�أ�
//ÿ��Ԫ������һ��ָ�룬��ָ������Ϊ������������ŵĲ���Ϊһ������ָ���һ�����ͷ���ֵ��
//�������Ǻ���ָ�������
//4.
int(*(*func)(int*))[5];
//��һ��ָ�����ͣ�ָ��ָ����Ǻ�����������һ������ָ�������һ��ָ��ķ��أ����ص�ָ������ָ������ģ�
//��ָ����Ϊ�������Ԫ��
//5.
int*(*func(int*))[5];
//��һ�������������Ĳ���Ϊ����ָ�룬�и�����ֵ������ֵ��һ������ָ�룬
//��ָ����Ϊ���Ԫ�أ�ÿ��Ԫ����һ������ָ��
*/

/*
void main()
{
	int (*a)();     //ָ�� -> ����
	int (*a[10])(); //�������������˺���ָ�� -> ת���
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
//ͨ�ú���
//�ص�����    �ع�ͷ�����õĺ���
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

//argc = argument count  ��������
//argv = argument value  ����ֵ
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