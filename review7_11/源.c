#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main() {
//
//	//常量和变量的区别
//	//3  3.14   字面常量
//	// 
//	//const 修饰的常变量 本质还是变量
//
//	int num = 4;//变量
//	const int num1 = 4;//常变量  num1是变量 但是又有常属性 所以我们说num1是常变量
//	//int arr[num1] = { 0 };//报错 数组中[]不可放变量
//	int arr1[4] = { 0 };//
//	printf("%d", num);
//	num = 8;
//	printf("%d", num);
//
//	printf("%d", num1);
//	//num1 = 8;//报错 不可修改 
//	printf("%d", num1);
//
//
//
//	return 0;
//}

//#define 定义的标识符常量
//#define MAX 10
//int main() {
//	int arr[MAX] = { 0 };
//	printf("%d\n", arr[0]);
//	printf("%d\n", MAX);
//	return 0;
//}


//枚举常量
//枚举 一一例举
//性别：男 女 保密
//三颜色：红 黄 蓝
//星期 1 2 3 4 5 6 7

//enum Sex {
//	man,
//	female,
//	secret
//};
//
//enum Color {
//	RED,
//	YELLOW,
//	BLUE
//};
//int main() {
//	enum Color color = BLUE;
//	printf("%d", color);
//	color = 1;
//	printf("%d", color);
//	//BLUE = 4;//err 不可改
//
//	printf("\n%d", man);
//	printf("%d", female);
//	printf("%d", secret);
//
//}


//c语言如何表示字符串
//"hello" 这种由双引号引起来的一串字符成为字符串字面字符 或者简称字符串
//注意 字符串的结束表示是一个\0的转移字符 在计算字符串长度的时候\0是结束标志 不算做字符串内容

//int main() {
//	char arr1[] = "abc";//数组存放字符串
//	//"abc" --- 'a' 'b' 'c' '\0' --'\0'字符串的结束标志
//	char arr2[] = { 'a','b','c' };//数组存放字符串
//	char arr3[] = {'a','b','c',0};//数组存放字符串
//	
//// '\0' - 0
//// 'a' - 97
//// 'A' - 65
//	//.... ASCll 编码值
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//
//	return 0;
//}

//int main() {
//	printf("abc\n");
//	printf("c:\test\32\test.c\n");
//	//\t 水平制表符
//	//??+c==>三字母词;
//	printf("are you  ok??)\n");//vc++6.0 输出结果为are you ok
//	printf("c:\\test\\32\\test.c\n");
//	system("pause");
//	printf("1");
//		return 0;
//}

//int main() {
//	printf("%d", strlen("c:\test\32\test.c"));
//	//\ddd  ddd表示1-3个八进制数字 如：\130 x
//	//\xdd   dd表示2个十六进制数字 如：\x30 0
//	printf("%c", '\32');
//}


//函数
//int  Add(int a, int b)
//{
//	return (a + b);
//}
//
//int main() {
//	int a = 201;
//	int b = 190;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d",sum);
//}

//数组 定义：一组同类型元素的集合
//int main() {
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组'
//	for ( i = 0; i < 10;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//位移操作符
//int main() {
//	int a = 1;//一个整形4个字节
//	//一个字节八bite位 而位移操作符是操作二进制的
//	//所有a的二进制应该为
//	/*00000000000000000000000000000001 32位*/
//	//整体向左移，左边丢0，右边补零
//	int b = a << 1;//左移动1 就是十进制乘以2 右移反之
//	printf("%d\n", b);
//	return 0;
//}


//位操作符
//& 按位与
//
//| 按位或
//
//^ 按位异或

//int main() {
//	int a = 3;
//	//011
//	int b = 5;
//	//101
//	int c = a & b;
//	//001
//	printf("%d", c);
//	c = a | b;
//	//111
//	printf("%d", c);
//	 c = a ^ b;
//	//异或的计算规律
//	//对应二进制位相同为0;
//	//对应二进制位不同为1;
//	//110
//	printf("%d", c);
//}

//int main() {
//	int a = -10;//  负号 -  正号 +  非!  sizeof 按位取反~ ++ -- & 强制类型转换(类型) 都是弹幕操作符
//	int b = 20;
//	//a + b;双目操作符
//
//	//C语言中我们表示真假
//	//0 - 假
// //  非0表示真
//	printf("%d\n", a);
//	printf("%d\n", !a);
//
//}

int main() {
	int a = 10;
		int sz=0;
	int arr[10] = { 0 };//计算10个整形元素的数组
	printf("%d", sizeof(a));//sizeof计算的是变量/类型所占空间的大小 单位是字节
	printf("%d", sizeof(int));//4
	printf("%d", sizeof a);//4
	//printf("%d", sizeof int);不可计算
	printf("\n%d", sizeof arr);//40
	//计算元素个数的大小
	//元素个数=数组总大小/每个元素大小
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("\n%d", sz);


}