#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����Ʊ�ʾ��1�ĸ���  ����
// 
//0000000000000000000000000000001

//int count_bit_one(unsigned int a) {
//	//���븺���޷����� ���Խ���ת��Ϊunsigned 
//// ��-1   10000000000000000000000000000001  ԭ��
////        11111111111111111111111111111110  ����
////        11111111111111111111111111111111  ����
//	int count = 0;
//	//����һ��
//	/*while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	};*/
//	//��������
//	//int i;
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if ((a>>i)&1==1)
//	//	{
//	//		count++;
//	//	}
//
//	//}
//	//�����������Ž⣩��
//	while (a) {
//
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int main() {
//	int a = 13;
//	
//	scanf("%d", &a);
//	printf("%d ", count_bit_one(a));
//}

//�������λ��ͬ�ĸ���
//����int ��32λ������m��n�� ������λ�ж��ٸ���ͬ��bitλ �����ͬΪ0 ����Ϊ1 
//int count_differ_bit(int m, int n) {
//	//����һ��
//	int a = 0;
//	int count = 0;
//	a = m ^ n;
//	while (a) {
//		if (a % 2 == 1) {
//			count++;
//		}
//		a /= 2;
//	};
//	return count;
//
//}
//int main() {
//	int n = 1999;
//	//1101
//	//1111
//	//0010
//	//0001
//	int m =2299;
//	printf("%d ", count_differ_bit(m, n));
//	if ((0 & 0) == 1)
//	{
//		printf("1");
//	}
//	else
//		printf("2");
//}


//��ӡ����������λ��ż��λ���� �ֱ��ӡ����
//10010101100101011001010110010101
//          �Դ�����   4  2  �ƶ�0 
//��ӡʱҪ�Ӹ�λ����λ��ӡ
//int main() {
//	int m = 10;
//	int i = 0;
//	printf("\nż��:");
//
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i)&1);
//		
//	}
//	printf("\n����:");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i)&1);;
//
//	}
//	
//}

//����������������������ʱ������
//��Ŀ���ݣ�����������ʱ���� ������������������
//int main() {
//	//��һ��
//	//int a = 20;
//	//int b = 15;
//	//printf("a=%d,b=%d\n", a, b);
//	//b = b + a;
//	//a = b - a;
//	//b = b - a;
//	//printf("a=%d,b=%d\n", a, b);
//	//�ڶ��֣�
//	int a = 20;
//	int b = 15;
//	printf("a=%d,b=%d\n", a, b);
//	b = a ^ b;
//	a = a ^ b;
//	b = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//
//
//	return 0;
//
//}

//ʹ��ָ���ӡ��������
void  print(int* arr,int sz) {
	int i = 0;
	for (; i < sz; i++) {
		printf("%d ", *(arr + i));
	};
}
int main()
{
	int arr[] = { 1,2,3,45,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
}