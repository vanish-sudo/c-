#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//位段的声明与结构体是类似的，有两个不同：
//1.位段的成员必须是int，unsigned int或signed int
//2.位段的成员名后边有一个冒号和一个数字

//位段 ----二进制位  节省空间
//struct A {
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
////47bit -- 6个字节
//int main() {
//	struct A s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
////位段的内存分配：
////1.位段的成员可以是int  unsigned int ，signed int 或者是char（属于整形家族）类型
////2.位段的空间上是按照以4个字节(int)或者以1个字节（char）的方式来开辟的
////3.位段涉及很多不确定因素，位段是不跨平台的，注意可移植的程序应该避免使用位段
//
//struct S {
//	char a : 3;
//	char b : 5;
//	char c : 3;
//	char d : 5;
//};
//int main() {
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	printf("%d %d %d %d", s.a, s.b, s.c, s.d);
//	return 0;
//
//}
//
////枚举
//enum Sex {
//	//枚举的可能取值(默认从0开始)
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//enum Color {
//	RED,
//	GREEN=9,
//	BLUE
//}; 
//int main() {
//	enum Sex s = MALE;
//	//enum Color s2 = BLUE;
//	//enum Color c = 2;//不报错只是因为语法检测不严格，c的类型为enum Color 
//	                  //而2为int类型 不可以赋值，
//	                 //可以在更为严格的c++环境中测试
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	 
//	return 0;
//}
//
////优点 拿图
//
////C语言的源代码-->预编译-->编译-->链接--->可执行程序
////预编译过程中 替换#define 所定义的 和删除注释

//联合(共用体)
//也是一种特殊的自定义类型，这种类型定义的变量也包含一系列成员
//特征是 这些成员用同一块空间（所以联合也叫共用体）

//union Un{
//	char c;//1
//	int i;//4
//};
////联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大小
////因为联合至少得有能例保存最大的那个成员
////联合中的成员不能同时使用，因为他俩共用同一个空间，所以用一个的时候其余的都会改变
//int main() {
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.i);
//	return 0;
//} 


////方法一：
//int check_sys(int* a)
//{
//	return *(char*)a;
//	//返回1为小端
//	//返回0为大端
//}
//int main()
//{
//	//00 00 00 01
//	int a = 1;
//	int ret = check_sys(&a);
//	if (ret == 1)
//	{
//		printf("小端");
//	}
//	else
//		printf("大端");
//}


//int check_sys()
//{
//	union Un
//	{
//		char c;//1
//		int i;//4
//	}u;
//	u.i = 1;
//	return u.c;
//	//返回1为小端
//	//返回0为大端
//}
//
//int main()
//{
//	//00 00 00 01
//	int a = 1;
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端");
//	}
//	else
//		printf("大端");
//}

//计算枚举大小
//enum Sex {
////	枚举的可能取值(默认从0开始)
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main() {
//	enum Sex s=MALE;
//	printf("%d ", sizeof(s));//4
//}

//union Un {
//	int a;//4       对齐数是4
//	char arr[5];//5  对齐数是1
//};
//
//int main() {
//	union Un n;
//	printf("%d\n", sizeof(n));
//	return 0;
//}
//联合的大小至少是最大成员的大小
//当最大成员大小不是最大对齐数的整数倍数时，就要对齐