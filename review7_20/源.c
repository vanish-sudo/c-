#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//~按位取反
//int main()
//{
//	int a = 0;
//	// ~ 按（2进制）位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111  按位取反的结果---补码
//	//11111111111111111111111111111110  ---反码
//	//10000000000000000000000000000001  ---原码  -1
//	printf("%d\n", ~a);//结果为-1
//	a = 11;
//	//00000000000000000000000000001011  11的二进制，将第三位（从右向左数）改为1
//	//00000000000000000000000000000100 (1<<2)   用按位或来解决
//	//00000000000000000000000000001111
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	//再将1还原成0
//	//00000000000000000000000000000100 (1<<2)
//	//11111111111111111111111111111011 ~(1<<2)
//	//00000000000000000000000000001111 a
//	//00000000000000000000000000001011 a&~(1<<2)
//	a = a & ~(1 << 2);
//	printf("%d\n", a);
//
//}

////++、--运算符
//int main()
//{
//	int a = 10;
//	printf("%d\n", ++a);//前置++，先++，后使用 11
//	printf("%d\n", a++);//后置++，先使用，后++ 11
//	printf("%d\n", --a);//前置--，先--，后使用 11
//	printf("%d\n", a--);//后置--，先使用，后-- 11
//	printf("%d\n", a);//10
//};

//强制转换类型     (类型)

//int main()
//{
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}

//void test(int arr[])
//{
//	printf("%d\n", sizeof(arr));//4或者8  32平台为4  64平台为8
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4或者8   传的是地址，得用指针，接收时char*  ch[]
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test(arr);
//	test2(ch);
//
//}

//关系操作符  去笔记拿图

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int d = 0;
//	int c = a && b;
//	printf("%d\n", c);//1
//	c = a && d;
//	printf("%d\n", c);//0
//	c = a || d;
//	printf("%d\n", c);//1
//
//}



//绕绕绕
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ || ++b || d++;
//	i = a++ && ++b && d++;//只要有一个假就不算了 
//	//因为||只要有真就为真，所以a=0为假，b=2为真，所以后面的就不要算了
//	//结果为1 3 3 4
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//}
//


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//因为a=0，&&同为真才能算，所以++b和d++都不能进行运算
//	//因为a++是先使用后++，所以a=1，b=2,c=3,d=4
//	printf("a=%d\n c=%d\n c=%d\n d=%d\n", a, b, c, d);
//}


//if判断与三木操作符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	/*if (a > 5)
//		b = 3;
//	else
//		b = -3;*/
//		//b=a > 5 ? 3 : -3;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	//max = a > b ? a : b;
//
//}

//逗号表达式
//笔记拿图
//int main() {
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//13
//	if (a = b + 1, c = a / 2, b > 0);//为真
//	return 0;
//}

//  []下标引用操作符
//int main()
//{
//    int a[10] = { 0 };
//    a[4] = 10;
//    1 + 2;
//    return 0;
//}

  //()函数调用操作符
//int get_max(int x, int y)
//{
//    return x > y ? x : y;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    //()就是函数调用操作符
//    get_max(a, b);
//    printf("max=%d", max);
//    return 0;
//}
// 
//访问结构体操作符
//学生
//创建一个结构体类型-struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//使用struct Stu这个类型创建了一个学生对象s1,并初始化
//	struct Stu s1 = { "张三",20,"2004010272" };
//	struct Stu* ps = &s1;
//	//结构体指针->成员名
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);
//	printf("%s\n", s1.name);//结构变量.成员名
//	printf("%d\n", s1.age);//
//	printf("%s\n", s1.id);//
//
//}


//int main()
//{
//	char a = 3;
//	//000000000000000000000011  这是整数
//	//00000011  - a  因为char类型只能存放1个字节，存放最低位置的一个字节内容
//	char b = 127;
//	char c = 0;
//	//000000000000000001111111
//	//01111111  -b
//	c = a + b;
//	printf("%d\n", c);
//	//a和b如何相加
//	//00000011
//	//000000000000000000000011  整形提升 - a 按符号位去补 补到32位
//	//000000000000000001111111   整形提升 -b
//	//01111111
//	//000000000000000010000010 - a+b
//
//	//10000010 - c
//	//111111111111111110000010 - c 补码
//	//111111111111111110000001 - c 反码
//	//100000000000000001111110 - c 原码
//	c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

//int main() {
//	char a = 0xb6;
//	//10110110 整形提升
//	//11111111111111111111111110110110
//	short b = 0xb600; //整形提升
//	//11111111111111111011011000000000
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//
//}

//%u 输出unsigned int
//自身的大小达不到一个整形大小才需要整形提升，只有char和short需要 其他都不需要整形提升！
//int main() {
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(!c));//1
//	//只要参与表达式运算就会发生整形提升 + - * / 
//	return 0;
//}



//问题代码
//int fun() {
//	static int count = 1;
//	return ++count;
//}
//int main() {
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);
//	return 0;
//}
// 
//int main()
//{
//	int i = 1;
//	int a = (++i) + (++i) + (++i);
//	printf("%d", a);
//	//在Windows环境打印的结果为12
//	//在Linux环境打印结果为10
//}