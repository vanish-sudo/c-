#define _CRT_SECURE_NO_WARNINGS 1

#include"add.h"
//#ifndef �����review7_17�ļ�
//#endif
//int main() {
//	int a = 10;
//	int b = 10;
//	printf("%d ", Add(a, b));
//}

//ʷ����򵥵ĵݹ�
//int main() {
//	printf("1");
//	main();
//	return 1;
//}
////�ݹ鳣������ Stack overflow ջ���

//����һ������ֵ(�޷���)������˳��������ÿһλ;
//���� ����1234 ���1 2 3 4

//void  prin(int n) {
//	if (n>9)
//	{
//		prin(n / 10);
//	}
//	printf("%d ",n%10);
//}
//
//int main() {
// int n = 0;
//	printf("����������:>");
//	scanf("%d",&n);
////print(1234)
////print(123)4
////print(12) 3 4
////print(1)  2   3   4
//	prin(n);
//}

//�ݹ���������Ҫ������
//������������ �������������������ʱ�� �ݹ鲻�ڼ���
//ÿ�εݹ���ú�Խ��Խ�ӽ������������


//�ݹ���׳�
//3!=3*2*1
//5!=5*4*3*2*1

//int factorial(int n) {
// 
//	if (n <= 1)
//		return 1;
//	return n * factorial(n-1);
//
//
//}

//int main() {
//	int n = 0;
//	printf("��������Ҫ��ý׳�");
//	scanf("%d", &n);
//	printf("%d ", factorial(n));
//}
//


//1 1  2  3  5  8  13 21 34 55......ǰ������֮���ǵ��ڵ�������
//�ݹ�
//int count = 0;
//int fib(int n)
//{
//	if (n == 3)
//		count++;//���Ե�3��쳲��������ļ������
//	if (n <= 2)
//		return 1;
//	return fib(n - 1) + fib(n - 2);
//}


//forѭ��
//1 1  2 
//int fib(n) {
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (n <= 2)
//			return 1;
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return b;
//}
//int main() {
//	int n = 0;
//	printf("������ײ�:>");
//// TDD-������������ ������ô�� ������ô��
//	scanf("%d", &n);
//	printf("%d",fib(n));
//
//}


//int my_strlen(const char* arr)
//{
//	int num=0;
//	while(*arr++)
//	{
//		num++;
//	}
//	return num;
//}
//int my_strlen(const char* arr)
//{
//	if (!*arr++)
//		return 0;
//	return 1+my_strlen(arr);
//}
//
//int main() {
//	char arr[] = "hello bi";
//	printf("%d", my_strlen(arr));//arr������ ���鴫�� ����ȥ�Ĳ����������� ���ǵ�һ��Ԫ�صĵ�ַ
//	
//}