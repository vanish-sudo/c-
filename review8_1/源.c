
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
//				//����
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
	//һά����
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16   sizeof(������)����  &��������ʾ�������� �������������ܴ�С���ԣ�4*4=16
	printf("%d\n", sizeof(a + 0));//4\8   ��Ԫ�ص�ַ  ������������ʾ��Ԫ�ص�ַ��   ��ַ��С4\8
	printf("%d\n", sizeof(*a));//4 ��Ԫ��
	printf("%d\n", sizeof(a + 1));//4\8 �ڶ���Ԫ�ص�ַ
	printf("%d\n", sizeof(a[1]));//4 ��Ԫ��
	printf("%d\n", sizeof(&a));//4\8  &aȡ����ʱ����ĵ�ַ������ĵ�ַҲ�ǵ�ַ����ַ��С4\8
	printf("%d\n", sizeof(*&a));//16 - &a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С
	printf("%d\n", sizeof(&a + 1));//4\8 &a+1��Ȼ�����������飬�����ǵ�ַ
	printf("%d\n", sizeof(&a[0]));//4\8��Ԫ�ص�ַ
	printf("%d\n", sizeof(&a[0] + 1));//4\8�ڶ���Ԫ�ص�ַ
}