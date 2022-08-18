#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//声明一个结构体类型
//声明一个学生类型，是想以学生类型来创建学生变量（对象）
//描述学生：名字+电话+性别
//struct 结构体关键字  Stu结构体标签
//struct Stu {
//	//结构体的成员变量
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//
//}s4,s5,s6;//全局变量
//struct Stu s3;//全局变量
//int main() {
//	//创建结构体变量
//	struct Stu s1;
//	struct Stu s2;
//
//
//}

////匿名结构体类型
// 匿名结构体只能使用一次

//匿名结构体 可以省略名字 但是必须顺带创建变量，如果不创建就无法创建了
//struct {
//	int a;
//	char b;
//	float c;
//}s1,s2; 
////匿名结构体指针类型
//struct {
//	int a;
//	char b;
//	float c;
//}*psa;
////匿名函数只能在变量列表中创建变量
//int main() {
//	s1.a = 10;
// //匿名结构体类型可以存在，两个匿名结构体各自成员一模一样时
//编译器在处理时会将他们当成不同类型
//	psa = &s1;//不合规 匿名结构体对编译器来说是两个类型
//	printf("%d", s1.a);
//	return 0;
//}

//结构体的自引用
//错误用法：
//struct Node
//{
//	int date;
//	struct Node n;
//};
//
//int main()
//{
//
//	return 0;
//}

//
////正确用法：
//struct Node
//{
//	int date;
//	struct Node* next;
//};
//
//int main()
//{
//
//	return 0;
//}

//重定义结构体自引用
//错误用法：

//typedef struct
//{
//	int data;
//	Node* next;
//}Node;
//
//
////正确用法：
////typedf struct Node
////{
////	int data;
////	struct Node* next;
////}Node; e

//struct S {
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main() {
//	struct S s = { 'c',19,19.0,"arr" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//}

//struct T {
//	double weight;
//	short age;
//};
//
//struct S {
//	char c;
//	int a;
//	struct T t;
//	double d;
//	char arr[20];
//};
//
//int main() {
//	struct S s = { 'c',19,{89.0,12},19.0,"arr" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%d %lf", s.t.age, s.t.weight);
//}


//结构体内存对齐
//#include <stdio.h>
//
//struct S1
//{
//    char c1;
//    int i;
//    char c2;
//};
//
//struct S2
//{
//    char c1;
//    char c2;
//    int i;
//    
//};
//
//int main()
//{
//    //输出的结果是什么？
//    struct S1 s1 = { 0 };
//    printf("%d\n", sizeof(s1));
//    struct S2 s2 = { 0 };
//    printf("%d\n", sizeof(s2));
//    return 0;
//}

#include<stddef.h>
struct S1
{
    char c1;
    int i;
    char c2;
};

int main() {
    //size_t offsetof(structName, memberName); 头文件为<stddef.h>
    printf("%d\n", offsetof(struct S1, c1));//计算相对于结构体的偏移量
    printf("%d\n", offsetof(struct S1, i));//计算相对于结构体的偏移量
    printf("%d\n",offsetof(struct S1, c2)) ;//计算相对于结构体的偏移量
    return 0;
}

//#include <stdio.h>
//#pragma pack(8)//设置默认对齐数为8
//struct S1
//{
//    char c1;
//    int i;
//    char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//#pragma pack(1)//设置默认对齐数为1
//struct S2
//{
//    char c1;
//    int i;
//    char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//int main()
//{
//    //输出的结果是什么？
//    printf("%d\n", sizeof(struct S1));
//    printf("%d\n", sizeof(struct S2));
//    return 0;
//}

struct S
{
    int data[1000];
    int num;
};
struct S s = { {1,2,3,4}, 1000 };
//结构体值传参
void print1(struct S s)
{
    printf("%d\n", s.num);
}
//结构体地址传参
void print2(struct S* ps)
{
    printf("%d\n", ps->num);
}
int main()
{
    print1(s);  //传结构体
    print2(&s); //传地址
    return 0;
}