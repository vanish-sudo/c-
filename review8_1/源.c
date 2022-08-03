
#include<stdio.h>

//void swap(char* buf1, char* buf2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void my_qsort(void*arr,int sz,int  bytes,int(*cmp)(void*e1,void*e2)){
//	int i = 0;
//	for (i = 0; i < sz-1; i++) {
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)arr + j * bytes, (char*)arr + (j + 1) * bytes) > 0) {
//				//交换
//				swap((char*)arr + j * bytes, (char*)arr + (j + 1) * bytes, bytes);
//			}
//		}
//	}
//	
//}
//int main() {
//	int arr[] = { 1,2,34,56,7,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, 4, cmp_int);
//		return 0;
//}

int main()
{
	//一维数组
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16   sizeof(数组名)或者  &数组名表示整个数组 这里计算的数组总大小所以：4*4=16
	printf("%d\n", sizeof(a + 0));//4\8   首元素地址  这里数组名表示首元素地址，   地址大小4\8
	printf("%d\n", sizeof(*a));//4 首元素
	printf("%d\n", sizeof(a + 1));//4\8 第二个元素地址
	printf("%d\n", sizeof(a[1]));//4 首元素
	printf("%d\n", sizeof(&a));//4\8  &a取出的时数组的地址，数组的地址也是地址，地址大小4\8
	printf("%d\n", sizeof(*&a));//16 - &a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小
	printf("%d\n", sizeof(&a + 1));//4\8 &a+1虽然跳过整个数组，但还是地址
	printf("%d\n", sizeof(&a[0]));//4\8首元素地址
	printf("%d\n", sizeof(&a[0] + 1));//4\8第二个元素地址
}