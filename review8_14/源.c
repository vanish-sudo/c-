#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, 20);
//	//��һ��������Ŀ�� 
//	//�ڶ���������Դͷ
//	//�������������ֽ�
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 12);
//	//����һ�Ͳ���������Ҫ�Ƚϵ����������������ֽ�
//	//����ֵ��int����
//	//����һ > ������ return 1
//	//����һ = ������ return 0
//	//����һ < ������ return -1
//	 //01 00 00 00 02 00 00 00 03 00 00 00......
//	//01 00 00 00 02 00 00 00 05 00 00 00......
//	printf("%d ", ret);
//	//01 00 00 00 02 00 00 00 03 00 00 00......
//	//01 00 00 00 02 00 00 00 05 00 00 00......
//	ret = memcmp(arr1, arr2, 8);
//	printf("%d ", ret);
//}

//int main()
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);
//	//����һ��ָ���ı����
//	//�������Ǹı��ʲô����
//	//�������Ǹı伸���ֽ�
//	int arr1[10] = { 0 };
//	//01 01 01 01 01 00 00 00......
//	memset(arr1, 1, 5);
//
//}

//����my_memcpy
//#include<assert.h>
//void* my_memcpy(void* dest, const void* source, size_t num)
//{
//	assert(dest&&source);
//	void* ret = dest;
//	while (num--) {
//		// ǰ��++���ȼ����ں���++, ����ת������ǰ��++,
//		// ǰ��++<����ת��<����++
//			//���ں���++����Ϊ��void*���ͣ�������Ҫ��ת�������ƶ�;
//		*(char*)dest = *(char*)source;
//		++(char*)dest;
//		++(char*)source;
//	}
//
//}
//
//int main() {
//	int arr[] = { 1,2,3,4,6 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr, 20);
//}
#include<assert.h>
void* my_memmove(void* dest, const void* source, size_t num) {
	assert(dest && source);
	void* ret = dest;
	if (dest > source)
	{
		while (num--) {
			*((char*)dest+num)= *((char*)source + num);
		}
	}
	else {
		while (num--) {
			*(char*)dest = *(char*)source;
			++(char*)dest;
			++(char*)source;
		}
	}
	return ret;
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//memmove(arr+5, arr + 4, 16);
	//printf("%d ", arr[0]);
	my_memmove(arr + 5, arr + 4, 16);
	printf("%d ", arr[0]);

}