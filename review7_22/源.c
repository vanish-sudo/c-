#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ð������
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

//����һ����������  ��ɶ�����Ĳ���
//1 ʵ�ֺ���init() ��ʼ������Ϊ0
//2 ʵ�ֺ���print()��ӡ����ÿ��Ԫ��
//3 ʵ�� reverse �����������Ԫ�ص�����

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
//	init(sz,arr);//��ʼ��0
//	print(sz, arr);//��ӡ
//	reverse(sz, arr);
//	print(sz, arr);
//}


//������A�е�����������B�е����ݽ��н���(����һ����)

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

int i;//ȫ�ֱ���  ����ʼ��Ĭ����0;
int main() {
	i--;
	//sizeof�������/������ռ�ڴ�Ĵ�С   ���ص����޷�������
	/*�ڱȽϻ����ʱ�Ὣ��һ����ת��Ϊ�޷����� ��ôi=-1 ת��Ϊ�޷�������
		���Ƿǳ��ǳ������*/
	if (i > sizeof(i)) {
		printf(">\n");
	}
	else {
		printf("<\n");
	}
}