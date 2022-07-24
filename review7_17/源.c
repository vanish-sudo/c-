#define _CRT_SECURE_NO_WARNINGS 1

#include"add.h"
//#ifndef 详情打开review7_17文件
//#endif
//int main() {
//	int a = 10;
//	int b = 10;
//	printf("%d ", Add(a, b));
//}

//史上最简单的递归
//int main() {
//	printf("1");
//	main();
//	return 1;
//}
////递归常见错误 Stack overflow 栈溢出

//接受一个整形值(无符号)，按照顺序打出他的每一位;
//例如 输入1234 输出1 2 3 4

//void  prin(int n) {
//	if (n>9)
//	{
//		prin(n / 10);
//	}
//	printf("%d ",n%10);
//}
//
//int main() {
// int n = 0;
//	printf("请输入数字:>");
//	scanf("%d",&n);
////print(1234)
////print(123)4
////print(12) 3 4
////print(1)  2   3   4
//	prin(n);
//}

//递归有两个必要条件：
//存在限制条件 当满足这个限制条件的时候 递归不在继续
//每次递归调用后越来越接近这个限制条件


//递归求阶乘
//3!=3*2*1
//5!=5*4*3*2*1

//int factorial(int n) {
// 
//	if (n <= 1)
//		return 1;
//	return n * factorial(n-1);
//
//
//}

//int main() {
//	int n = 0;
//	printf("请输入需要求得阶乘");
//	scanf("%d", &n);
//	printf("%d ", factorial(n));
//}
//


//1 1  2  3  5  8  13 21 34 55......前俩数字之和是等于第三个数
//递归
//int count = 0;
//int fib(int n)
//{
//	if (n == 3)
//		count++;//测试第3个斐波那契数的计算次数
//	if (n <= 2)
//		return 1;
//	return fib(n - 1) + fib(n - 2);
//}


//for循环
//1 1  2 
//int fib(n) {
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (n <= 2)
//			return 1;
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return b;
//}
//int main() {
//	int n = 0;
//	printf("请输入阶层:>");
//// TDD-测试驱动开发 先想怎么用 在想怎么做
//	scanf("%d", &n);
//	printf("%d",fib(n));
//
//}


//int my_strlen(const char* arr)
//{
//	int num=0;
//	while(*arr++)
//	{
//		num++;
//	}
//	return num;
//}
//int my_strlen(const char* arr)
//{
//	if (!*arr++)
//		return 0;
//	return 1+my_strlen(arr);
//}
//
//int main() {
//	char arr[] = "hello bi";
//	printf("%d", my_strlen(arr));//arr是数组 数组传参 传过去的不是整个数组 而是第一个元素的地址
//	
//}