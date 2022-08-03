
#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr + 0));//4\8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4\8
	printf("%d\n", sizeof(&arr + 1));//4\8
	printf("%d\n", sizeof(&arr[0] + 1));//4\8
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6;
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));err
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//随机值
	printf("%d\n", strlen(&arr[0] + 1));//5
}

//int main()
//{
//	char* p = "abcdef";//字符串常量
//	printf("%d\n", sizeof(p));//4\8 - 计算指针变量p的大小
//	printf("%d\n", sizeof(p + 1));//4\8 p+1 - 得到的是字符b的地址
//	printf("%d\n", sizeof(*p));// 1   *p就是字符串的第一个字符 - 'a'
//	printf("%d\n", sizeof(p[0]));// 1 int arr[10]; arr[0]==*(arr+0)  p[0]==*(p+0)
//	printf("%d\n", sizeof(&p));//4\8
//	printf("%d\n", sizeof(&p + 1));//4\8
//	printf("%d\n", sizeof(&p[0] + 1));//4\8  b的地址
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err  strlen（）读地址
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));// 随机值   &p取得是p的地址
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//}
//
//
//
//int main()
//{
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//3*4*4=48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16  a[0]相当于第一行作为一维数组名
//	//注：sizeof(arr[0])把数组名单独放在sizeof（）内，计算的是第一行的大小
//	printf("%d\n", sizeof(a[0] + 1));//4/8  第一行第2个元素地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4\8  第二行数组地址
//	printf("%d\n", sizeof(*(a + 1)));//16 第二行数组元素
//	printf("%d\n", sizeof(&a[0] + 1));//4/8第二行数组地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 第二行第一个元素
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//}
//
//
//
//int main()
//{
//
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//
//	//程序的结果是什么？
//
//	2, 5
//
//
//
//		//由于还没学习结构体，这里告知结构体的大小是20个字节
//		struct Test
//	{
//		int Num;
//		char* pcName;
//		short sDate;
//		char cha[2];
//		short sBa[4];
//	}*p;
//	//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//	int main()
//	{
//		p = (struct Test*)0x100000;
//		printf("%p\n", p + 0x1);
//		printf("%p\n", (unsigned long)p + 0x1);
//		printf("%p\n", (unsigned int*)p + 0x1);
//		return 0;
//		//结果是  0x100014
//	   //         0x100001
//	   //         0x100004    
//	}
//
//
//	int main()
//	{
//		int a[4] = { 1, 2, 3, 4 };
//		int* ptr1 = (int*)(&a + 1);
//		int* ptr2 = (int*)((int)a + 1);
//		printf("%x,%x", ptr1[-1], *ptr2);
//		return 0;
//
//		//4,20000000
//	}