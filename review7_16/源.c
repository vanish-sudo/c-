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
//	//strlen()  string length �ַ���
//	//strcpy() string copy  �ַ�������
//  //char* strcpy(char* strDestination, const char* strSource);
//	char arr1[] = "���ѽ����";
//	char arr2[20] = "���ѽhehe";
//	strcpy(arr2,arr1);
//	printf("%s", arr2);
//	my_strcpy(arr1, arr2);
//
//}

//memset 
//memory �ڴ�  set ����

//int main() {
//	//void* memset(void* dest, int c, size_t count);
//	//��c����dest�� ��count���� 
//	char arr1[] = "hello bit";
//	memset(arr1, '*', 5);
//	printf("%s", arr1);
//}

// //��������  ������������ �β���,���� �β���������
//{
////statement;//�����
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





//��ַ����
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
//	//ʵ�ο����ǳ��� ���� ���ʽ ������ 
//	//���ۺ������͵��� �ڽ��е���ʱ������ȷ����ֵ
//	Swap(&a, &b);
//	printf("a=%d b=%d\n",a,b);
//}

//�ú���д���ж�һ�����ǲ�������

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

//�ú���д���ж�2000-4000�������
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
////дһ�����ַ�����
//int binary_search(int arr[], int k,int right) {
//	//�㷨ʵ��
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
//	//���ֲ��� 
//	//��һ�����������в��Ҿ����ĳ����
//	//�ҵ��˷�����������±� �Ҳ�������0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	int index = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	scanf("%d", &k);
//	if ((index=binary_search(arr, k,right))!=-1)//arr��������Ԫ�ص�ַ
//		printf("�ҵ��� ��Ϊ%d",index);
//	else {
//		printf("��������û�и�����");
//	}
//	return 0;
//}

//дһ������ ÿ����һ����������ͻὫnum ��ֵ����1
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

//������Ƕ�׵��ú���ʽ����


//������Ƕ�׵���

//����������
//1.���߱�������һ��������ʲô ������ʲô ����������ʲô�������ǲ��Ǵ����޹ؽ�Ҫ
//2.����������һ������ں���ʹ��֮ǰ Ҫ������������ʹ��
//3.����������һ��Ҫ�������ļ��е�

////����������
//void new_line();
//void three_line();

#include"app.h";//
int main() {
	new_line();
	return 0;
}

//�����Ķ���
void three_line() {
	printf("haha");
}
void new_line() {
	three_line();
}
//��ʽ����
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//}
//printf�ķ���ֵ��д����ַ�����
// ������Ĵ�ӡ43 ����2 
// Ȼ����м�Ĵ�ӡ 2 Ȼ�󷵻�1
// ���������һ���ӡ1
//�����4321
