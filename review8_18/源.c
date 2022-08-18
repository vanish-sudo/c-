#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
//int main() {
//	int* p = (int*)malloc(40);
//	if (p == NULL) {
//		return 0;
//	}
//	//使用
//	int* p2 = realloc(p, 80);
//	if(p2==NULL)
//	p = p2;
//	return 0;
//}

//int main() {
//	int* p = realloc(NULL, 40);//等价于malloc（40）； 
//}

//错误使用一：
//int main() {
//	//对NULL指针解引用
//	int* p = malloc(40);
//	*p = 10;//p未进行判断，malloc可能开辟空间失败返回NULL
//}


//错误使用二：
//int main() {
//	//对动态开辟内存的越界访问
//	int* p = malloc(40);
//	if (p == NULL)
//		return 0;
//	int i = 0;
//	for (i = 0; i <= 10; i++) {
//		*(p + i) = i;//越界
//	}
//	free(p);
//	p = NULL;
//}

//错误使用三：
//int main() {
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//}

////错误使用四：
//
//int main() {
//	int* p = (int*)malloc(40);
//	if (p == NULL) {
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		//p指向的地址已经改变
//		*p++ = 0;
//
//	}
//	free(p);
//	p = NULL;
//}

//错误使用五：
//int main() {
//	int* p = (int*)malloc(40);
//	if (p == NULL) {
//		return 0;
//	}
	//使用

	//释放
	//free(p);
	//....
	//free(p);
	//如何避免出现错误 
	//在free(p)完后
	//立即p=NULL
	//free(p);
	//p = NULL;
	//free(p);
//}

	//错误六
	//动态开辟内存忘记释放（内存泄漏）
	//int main() {
	//	while (1) {
	//		malloc(40);
	//		Sleep(1000);
	//	}
	//}

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//str值传递
//	strcpy(str, "hello,world");//程序崩溃，非法访问空指针
//	printf(str);
//}
//最后导致的结果：
//1.运行代码程序会出现崩溃的现象
//2.程序存在内存泄漏的问题
//str是以值传递的形式给p
//p是GetMemory函数的形参，只能函数内部有效，等GetMemory函数返回后
//，动态开辟的内存尚未释放且无法找回，所以造成内存泄露

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);//
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//str值传递
//	strcpy(str, "hello,world");//程序崩溃，非法访问空指针
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//};

//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(&str);//str值传递
//	strcpy(str, "hello,world");//程序崩溃，非法访问空指针
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(void)
//{
//	static char p[] = "hello,world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//导致乱码原因：返回栈空间的地址问题

//返回栈空间问题举例：

//静态区与栈区
//int* test()
//{
//	static int a = 10 ;//静态区
//	//int a = 10;//栈区
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//如果不加上static,则会成为返回栈空间地址问题
//	printf("%d", *p);
//	return 0;
//}


//静态区未报错，栈区报错

//int* test()
//{
//
//	int* ptr = malloc(sizeof(int) * 25);//堆区
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	free(p);
//	return 0;
//}
//
//堆区未报错


//非法访问内存
//void test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}

//int main()
//{
//	test();
//}


//
//更改：
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	test();
//}

//柔性数组传参创建
struct S {
	int n;
	//int arr[0];//未知大小的  柔性数组成员  数组大小是可以调整的
	int arr[];//未知大小的  柔性数组成员  数组大小是可以调整的
};
void creat(struct S**ps) {
	*ps=(struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	if (*ps == NULL);
	return;
	(*ps)->n = 100;
	memset((*ps)->arr, '\0', 5 * sizeof(int));
}
int main() {
	//struct S s = {0};
	//printf("%d  ", sizeof(s));//当结构体中有柔性数组时，计算结构体占用字节时，不计算柔性数组
	struct S* ps;
	creat(&ps);
	if (ps == NULL) {
		return 0;
	}
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++) {
		ps->arr[i] = i;
	}
	
	struct S* p2 = (struct S*)realloc(ps, 44);
	 
	if (p2 != NULL) {
		ps = p2;
		p2 = NULL;
		for (i = 0; i < 10; i++) {
			ps->arr[i] = i;
			printf("%d ", ps->arr[i]);
		}
	}
	free(ps);
	ps = NULL;
	return 0;
}


//struct S {
//	int n;
//	int* arr;  
//};
//
//int main() {
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = (int*)malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		ps->arr[i] = i;
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	//调整大小
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL) {
//		ps->arr = ptr;
//		ptr = NULL;
//		for (i = 0; i < 10; i++) {
//			ps->arr[i] = i;
//			printf("%d ", ps->arr[i]);
//		}
//	}
//	//释放内存
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}