#include<stdio.h>

//int main() {
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	char* p2 = "abcdef";//字符串常量 不可更改
//	//指针数组 - 数组  - 存放指针的数组
//	int *arr[10];//指针数组
//	//数组指针  指向数组的指针
//	int *p3;//整形指针  指向整形的指针
//	char *p4;//字符指针  指向字符的指针
//	int arr2[5];//数组
//	int (*pa)[5] = &arr; //取出数组的地址，pa就是一个数组指针
//	//去掉名字就是指针类型
//	int(*parr[10])[5]; 
//	return 0;
//}

//一维数组传参
//void test(int arr[]) {//ok?    ok
//}
////void test(int arr[10]) {//ok?  ok  
////} 
////void test(int* arr) {//ok?   ok
////}
//void test2(int* arr[20]) {//ok?  ok
//}
////void test(int **arr) {//ok?  ok
////
////}
//
//
//int main() {
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test(arr2);
//}

////二维数组传参
//void test(int arr[3][5]) {}//ok?  ok
//void test(int arr[][5]) {}//ok?  ok
//void test(int arr[3][]) {}//ok? no 
//
//void test(int*arr){}//ok?  no
//void test(int* arr[5]) {}//ok? no
//void test(int (*arr)[5]) {}//ok? ok
//void test(int**arr) {}//ok?
//int main() {
//	int arr[3][5] = { 0 };
//	test(arr);//二维数组传参
//}

//一级指针传参拿图
//
//void test2(int* p)
//{
//
//}
//void test1(char* p)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test(&a);//地址
//	test(p1);//一级指针
//	char ch = 'w';
//	char* pc = &ch;
//	test1(&ch);
//	test1(pc);
//
//}
// 
// 
//二级指针传参 拿图
// 
// 
//可以接收一级指针，二级指针，指针数组
//void test(int** ptr)//参数部分是二级指针，就是接收一级指针地址或者二级指针
//{
//	printf("num=%d\n", **ptr);
//}
//
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);//二级指针
//	test(&p);//一级指针地址
//	int* arr[10];//指针数组
//	test(arr);
//}


//函数指针
//数组指针 - 指向数组的指针
//函数指针 - 指向函数的指针 - 存放函数地址的一个指针

//int Add(int a, int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;
//} 
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	//&函数名和函数名都是函数的地址
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//函数指针
//	int(*pa)(int, int) = Add;
//	int(*pb)(int x, int y) = Add;
//	printf("%d\n", (*pa)(a, b));
//	printf("%d\n", (pb)(a, b));
//
//}

//void Print(char* str)
//{
//	printf("%s", str);
//}
//
//int main() {
//	void(*pa)(char*) = Print;
//	(*pa)("hello world");
//}

//拿图


//int Add(int a, int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(a, b));
//	printf("%d\n", (*pa)(a, b));
//	//如果pa是函数指针，可以解引用或者不解引用，后面三种虽然值都是一样，但不建议
//	printf("%d\n", (**pa)(a, b));
//	printf("%d\n", (***pa)(a, b));
//	printf("%d", *pa(a, b)); //不可以这样写，因为* 优先级较低
//
//}

//函数指针数组

//int Add(int a, int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;
//}
//int  Sub(int a, int b)
//{
//	int z = 0;
//	z = a - b;
//	return z;
//}
//int Mul(int a, int b)
//{
//	int z = 0;
//	z = a * b;
//	return z;
//}
//int Div(int a, int b)
//{
//	int z = 0;
//	z = a / b;
//	return z;
//}
//int main()
//{
//	int* arr[5];//指针数组
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//
//	int(*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int) = { Add ,Sub,Mul,Div };//函数指针数组
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](2, 3));
//	}
//	return 0;
//
//}