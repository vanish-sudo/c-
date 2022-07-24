#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//二进制表示成1的个数  补码
// 
//0000000000000000000000000000001

//int count_bit_one(unsigned int a) {
//	//输入负数无法计算 可以将他转换为unsigned 
//// 如-1   10000000000000000000000000000001  原码
////        11111111111111111111111111111110  补码
////        11111111111111111111111111111111  反码
//	int count = 0;
//	//方法一：
//	/*while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	};*/
//	//方法二：
//	//int i;
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if ((a>>i)&1==1)
//	//	{
//	//		count++;
//	//	}
//
//	//}
//	//方法三（最优解）：
//	while (a) {
//
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int main() {
//	int a = 13;
//	
//	scanf("%d", &a);
//	printf("%d ", count_bit_one(a));
//}

//求二进制位不同的个数
//两个int （32位）整数m和n中 二进制位有多少个不同的bit位 异或：相同为0 相异为1 
//int count_differ_bit(int m, int n) {
//	//方法一：
//	int a = 0;
//	int count = 0;
//	a = m ^ n;
//	while (a) {
//		if (a % 2 == 1) {
//			count++;
//		}
//		a /= 2;
//	};
//	return count;
//
//}
//int main() {
//	int n = 1999;
//	//1101
//	//1111
//	//0010
//	//0001
//	int m =2299;
//	printf("%d ", count_differ_bit(m, n));
//	if ((0 & 0) == 1)
//	{
//		printf("1");
//	}
//	else
//		printf("2");
//}


//打印二进制奇数位和偶数位的数 分别打印序列
//10010101100101011001010110010101
//          以此类推   4  2  移动0 
//打印时要从高位往低位打印
//int main() {
//	int m = 10;
//	int i = 0;
//	printf("\n偶数:");
//
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i)&1);
//		
//	}
//	printf("\n奇数:");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i)&1);;
//
//	}
//	
//}

//交换两个变量（不创建临时变量）
//题目内容：不允许创建临时变量 交换两个整数的内容
//int main() {
//	//第一种
//	//int a = 20;
//	//int b = 15;
//	//printf("a=%d,b=%d\n", a, b);
//	//b = b + a;
//	//a = b - a;
//	//b = b - a;
//	//printf("a=%d,b=%d\n", a, b);
//	//第二种：
//	int a = 20;
//	int b = 15;
//	printf("a=%d,b=%d\n", a, b);
//	b = a ^ b;
//	a = a ^ b;
//	b = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//
//
//	return 0;
//
//}

//使用指针打印数组内容
void  print(int* arr,int sz) {
	int i = 0;
	for (; i < sz; i++) {
		printf("%d ", *(arr + i));
	};
}
int main()
{
	int arr[] = { 1,2,3,45,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
}