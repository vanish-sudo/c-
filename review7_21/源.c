#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {
//	int a = 10; 
//	int* p = &a;//p指针变量
//	//地址其实是指针 而存放地址的变量叫指针变量  
//	//指针：是存放变量地址的变量 
//	//变量p的类型是int* ，p的值是& a, 也就是变量a的地址。
//	
//}

//int main()
//{
//
//	int a = 0x11223344;//两个十六进制是一个字节
//	int* pa = &a;
//	char* pc = &a;
//	//*pc = 0;//只改了一个字节
//	//*pa = 0; //全改成0
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//}
////指针类型决定了指针进行解引用操作时，能够访问的空间的大小
////指针类型决定了:指针走一步走多远（指针的步长）单位是字节
////int*p , p+1--->4
////char*p  ,p+1--->1
////double*p ,p+1--->8
//

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;//首元素地址
//	char* p = arr;//能不改成
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p+1) = 1;//越出自己管理的arr范围之后被称为野指针
//
//	}
//
//}

//野指针
//概念：野指针就是指针指向的位置是不可知的（随机的 不正确的 没有明确限制的）
//野指针
//指针未初始化
//int main()
//{
//	//int a;//局部变量不初始化，默认随机值
//	int* p;//局部的指针的变量，就被初始化 随机赋值
//	*p = 20;
//	return 0;
//}
//指针越界 也会导致野指针
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*p++ = i;//越出自己管理的arr范围之后被称为野指针
//
//	}
//
//}
//int* test()
//{
//	int a = 10;//a 局部变量
//	return &a;
//}
//int main()
//{
//	int* p = test();//进入函数，分配空间，但是出函数后，这个空间就会被释放
//	*p = 20;//此时再来指向已经被释放的空间，
//	return 0;
//}

//int main() {
//	//int a = 0;
//	////int* pa = &a;//初始化
//	//int* pa = NULL;//不知道初始化啥时可以初始化为NULL
//    int a = 0;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//不想使用时需要变成NULL  以免成为野指针
//	//*pa = 10;//指针为NULL时不能使用
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//
//	//	printf("%d ",*p);
//	//	p++;
//	//}
//
//	for (i = 0; i < 5; i++)
//	{
//
//		printf("%d ", *p);
//		p += 2;
//	}
//}
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES] = { 0 };
//	float* vp;
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		//*vp++ = 0;//先使用*vp
//	*--vp = 0;//先  --vp
//	}
//}
//指针减指针
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//大指针减小指针等于中间元素个数
//	printf("%d\n", &arr[0] - &arr[9]);//绝对值是中间元素个数
//	//printf("%d\n   ", &arr[9] - &ch[0]);//错误写法，必须得是同类型相减才有意义
//
//}
//

//指针自制strlen
//int my_strlen(const* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main() {
//	char arr[] = "hello bit";
//	printf(" %d ", my_strlen(arr));
//	return 0;
//}

//指针和数组
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址，首元素地址
//	printf("%p\n", arr + 1);//地址，首元素地址
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	//1. &arr - &数组名 - 数组名不是首元素地址 - 数组名表示整个数组- &数组名取出的是整个数组的地址
//	//2.sizeof(arr)  --   sizeof(数组名) -- 数组名表示的整个数组 --sizeof(数组名)计算的是整个数组的大小 
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p  =========  %p\n", p + i, &arr[i]);
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}*/
//
//}
//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//int**ppa就是二级指针，一级指针的地址只能存放在二级指针，以此类推
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//}

//指针数组 - 数组
//数组指针 - 指针

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//整形数组 - 存放整形
	//字符数组 - 存放字符
	//指针数组 - 存放指针
	int* arr2[3] = { &a,&b,&c }; //指针数组
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", *arr2[i]);
	}
	return 0;
}