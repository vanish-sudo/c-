#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//冒泡排序
//int  main() {
//	int arr[] = {1,3,4,24,6,54,37,83,2542,5,0};
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//
//	for (i = 0; i < sz; i++) {
//
//		for (j = 0; j < sz; j++) {
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//		printf("%d ",arr[i]);
//}

//创建一个整形数组  完成对数组的操作
//1 实现函数init() 初始化数组为0
//2 实现函数print()打印数组每个元素
//3 实现 reverse 函数完成数组元素的逆置

//void print(int sz, int* arr);
//
//void init(int sz, int* arr) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		*arr++ = 0;
//	}
//	
//
//}
//
//void print(int sz, int* arr) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int sz,int* arr) {
//	int tmp = 0;
//	
//	int left = 0;
//	int right = sz-1;
//	for (left = 0; left < sz / 2; left++) {
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//	}
//}
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	init(sz,arr);//初始化0
//	print(sz, arr);//打印
//	reverse(sz, arr);
//	print(sz, arr);
//}


//将数组A中的内容与数组B中的内容进行交换(数组一样大)

//void print(int sz, int* arr) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main() {
//	int A[10] = { 1,2,3.4,7,7,7,3,2,5 };
//	int B[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(A) / sizeof(A[0]);
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz; i++) {
//		tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//	}
//	print(sz, A);
//	print(sz, B);
//	return 0;
//}

int i;//全局变量  不初始化默认是0;
int main() {
	i--;
	//sizeof计算变量/类型所占内存的大小   返回的是无符号整形
	/*在比较或计算时会将另一个数转换为无符号数 那么i=-1 转换为无符号数将
		会是非常非常大的数*/
	if (i > sizeof(i)) {
		printf(">\n");
	}
	else {
		printf("<\n");
	}
}