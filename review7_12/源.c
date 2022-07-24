#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	//   ~  按位取反
//	b = ~a;//b 是有符号的整形
//	//00000000000000000000000000000000  //补码
//	//11111111111111111111111111111111  //补码
// 只要是整数 内存中储存的都是二进制补码
// 正数 --- 源码  反码  补码 相同
// 
// 负数：
// 源码 ---->       反码   ----->       补码
// 直接按照正负     源码的符号位不变   反码+1
// 写出二进制序列   其他位按位取反  
//	//源码  反码  补码
//	// 0为正好 1为负号  符号位为第一位
//	//  源码取反得到反码
//	//  符号位不变 反码+1得到补码
//	//11111111111111111111111111111110  //得到反码 符号位不变 然后减一
//	//10000000000000000000000000000001  //取反  得到源码
//	// 
//	//负数在内存中储存的时候 储存的是二进制的补码
//	printf("%d\n", b);//使用的 打印的是这个数的源码
//	return  0;
//}

//int main() {
//	int a = 13;
//	int b = a++;//后置++ 先使用再++
//	int c = ++b;
//	int max = 0;
//	printf("%d", b);
//	printf("%d", c);//前置++ 先++ 后使用;
//max=a >= b ? a : b;//条件操作符也叫三目操作符
//printf("\n%d", max);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//int main() {
//	int a = 10;
//	int b = 10;
//	int arr[10] = { 0 };
//	//逗号表达式
//
//
//	//下表引用操作符
//	arr[5];//[]==>下标引用操作符
//	//函数调用操作符
//	Add(a, b);//()==>函数调用操作符
//	return 0;
//}


//关键字
//int main() {
//	//typeof 类型定义  类型重定义  --起别名
//	typedef unsigned int  u_int;
//	u_int d = 19;
//	int a = 10;//局部变量===自动变量 每个局部变量前都省略了一个auto
//	register int b = 19;//register的意思是建议把b定义为寄存器变量 是否定义为寄存器变量编译器会自己判断
//	//int 定义的变量是有符号的
//	//所以int 前面省略了signed
//	unsigned int c = 19;//定义无符号的数 无论是正数还是负数都是证书
//	//struct 结构体关键字
//	
//	//unio 联合体/共用体
//	
//	return 0;
//}



// static静态

//当static修饰局部变量是 生命周期边长

//void test() {
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//
//}
//int main() {
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//}

//当static修饰全局变量时 改变了变量的作用域 让静态的全局变量只能在自己所在的
//源文件内部使用 除了源文件就没法使用
//int main() {
//	extern int g_val;//加上static时无法在其他源文件使用
//	printf("%d", g_val);
//	return 0;
//}


//static修饰函数
//static修饰函数改变了函数的链接
//外部链接属性-->内部链接属性
//声明外部函数
//extern  int Add(int, int);
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("%d", Add(a, b));
//	
//	return 0;
//}

//#define 定义标识符常量
//#define MAX 1000;

//#define 可以定义宏--带参数
//函数的方式
//int MAX1(int a, int b)
//{
//	return a >= b ? a : b;
//}
//
////宏的方式
//#define MAX(X,Y) (X>=Y?X:Y)
//int main() {
//	//int a = MAX;
//	//printf("%d",a);
//	int a = 10;
//	int b = 20;
//	
//	//函数的方式
//	int max = MAX1(a, b);
//	printf("%d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//指针
int main() {
	int a = 10;
	//有一种变量是用来存放地址的--指针变量
	int* p = &a;//取地址
	printf("%p\n", p);
	*p=20;//* - 解引用操作符
	printf("%d\n", *p);
	printf("%d\n", a);
	//在32位也就是32bit有4个字节 所以每种指针类型的大小都是4字节
	//	64位则为8字节 
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(double*));
}