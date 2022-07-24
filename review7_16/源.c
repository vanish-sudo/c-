#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//int Add(int a, int b)
//{
//	return a + b;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//}
//

//char* my_strcpy(char* str1, const char* str2) {
//	//str1[strleng(str1)] = "";
//	printf("%s", *str1[0]);
//}

//int main() {
//	//strlen()  string length 字符串
//	//strcpy() string copy  字符串拷贝
//  //char* strcpy(char* strDestination, const char* strSource);
//	char arr1[] = "你好呀哈哈";
//	char arr2[20] = "你好呀hehe";
//	strcpy(arr2,arr1);
//	printf("%s", arr2);
//	my_strcpy(arr1, arr2);
//
//}

//memset 
//memory 内存  set 设置

//int main() {
//	//void* memset(void* dest, int c, size_t count);
//	//将c放在dest中 放count个数 
//	char arr1[] = "hello bit";
//	memset(arr1, '*', 5);
//	printf("%s", arr1);
//}

// //返回类型  函数名（类型 形参名,类型 形参名……）
//{
////statement;//语句项
//}


//int Max(int a, int b) {
//	return a > b ? a : b;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int max=Max(a, b);
//	printf("%d", max);
//}





//传址调用
//void Swap(int*a,int*b){
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	printf("a=%d b=%d\n", a, b);
//	//实参可以是常量 变量 表达式 函数等 
//	//无论何种类型的量 在进行调用时必须是确定的值
//	Swap(&a, &b);
//	printf("a=%d b=%d\n",a,b);
//}

//用函数写出判断一个数是不是素数

//int is_prime(int i) {
//	int j = 2;
//	for (; j <= sqrt(i); j++) {
//		if (j == sqrt(i))
//			return 0;
//	};
//	if(j>sqrt(i))
//	return 1;
//}
//
//int main() {
//	int i = 0;
//	int sum = 0;
//	for (i = 101; i <= 200; i += 2) {
//		if (is_prime(i) == 1)
//		{
//			sum++;
//			printf("%d ", i);
//		}
//		}
//	printf("%d", sum);
//}

//用函数写出判断2000-4000年的闰年
//is_year(int year) {
//	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? 1 : 0;
//}
//int main() {
//	int i = 2000;
//	for (; i <= 4000; i++) {
//		if (is_year(i) == 1) {
//			printf("%d ", i);
//		}
//	}
//}

//
////写一个二分法函数
//int binary_search(int arr[], int k,int right) {
//	//算法实现
//	int left = 0;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > k) {
//			right = mid-1;
//		}
//		else if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//int main() { 
//	//二分查找 
//	//在一个有序数组中查找具体的某个数
//	//找到了返回这个数的下标 找不到返回0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	int index = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	scanf("%d", &k);
//	if ((index=binary_search(arr, k,right))!=-1)//arr传的是首元素地址
//		printf("找到了 标为%d",index);
//	else {
//		printf("此数组中没有该数字");
//	}
//	return 0;
//}

//写一个函数 每调用一次这个函数就会将num 的值增加1
//void Add_num(int*num) {
//	(*num)++;
//}
//int main() {
//	int num = 0;
//	while (1) {
//		if (num == 10)
//			break;
//		Add_num(&num);
//		printf("%d ", num);
//	}
//}

//函数的嵌套调用和链式访问


//函数的嵌套调用

//函数声明：
//1.告诉编译器有一个函数叫什么 参数是什么 返回类型是什么但具体是不是存在无关紧要
//2.函数的声明一般出现在函数使用之前 要满足先声明后使用
//3.函数的声明一般要放在有文件中的

////函数的声明
//void new_line();
//void three_line();

#include"app.h";//
int main() {
	new_line();
	return 0;
}

//函数的定义
void three_line() {
	printf("haha");
}
void new_line() {
	three_line();
}
//链式访问
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//}
//printf的返回值是写入的字符总数
// 最里面的打印43 返回2 
// 然后给中间的打印 2 然后返回1
// 最后最外面一层打印1
//结果是4321
