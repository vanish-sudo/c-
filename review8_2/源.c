
#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr + 0));//4\8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4\8
	printf("%d\n", sizeof(&arr + 1));//4\8
	printf("%d\n", sizeof(&arr[0] + 1));//4\8
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6;
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));err
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//5
}

//int main()
//{
//	char* p = "abcdef";//�ַ�������
//	printf("%d\n", sizeof(p));//4\8 - ����ָ�����p�Ĵ�С
//	printf("%d\n", sizeof(p + 1));//4\8 p+1 - �õ������ַ�b�ĵ�ַ
//	printf("%d\n", sizeof(*p));// 1   *p�����ַ����ĵ�һ���ַ� - 'a'
//	printf("%d\n", sizeof(p[0]));// 1 int arr[10]; arr[0]==*(arr+0)  p[0]==*(p+0)
//	printf("%d\n", sizeof(&p));//4\8
//	printf("%d\n", sizeof(&p + 1));//4\8
//	printf("%d\n", sizeof(&p[0] + 1));//4\8  b�ĵ�ַ
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err  strlen��������ַ
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));// ���ֵ   &pȡ����p�ĵ�ַ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//}
//
//
//
//int main()
//{
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//3*4*4=48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16  a[0]�൱�ڵ�һ����Ϊһά������
//	//ע��sizeof(arr[0])����������������sizeof�����ڣ�������ǵ�һ�еĴ�С
//	printf("%d\n", sizeof(a[0] + 1));//4/8  ��һ�е�2��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4\8  �ڶ��������ַ
//	printf("%d\n", sizeof(*(a + 1)));//16 �ڶ�������Ԫ��
//	printf("%d\n", sizeof(&a[0] + 1));//4/8�ڶ��������ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 �ڶ��е�һ��Ԫ��
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//}
//
//
//
//int main()
//{
//
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//
//	//����Ľ����ʲô��
//
//	2, 5
//
//
//
//		//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//		struct Test
//	{
//		int Num;
//		char* pcName;
//		short sDate;
//		char cha[2];
//		short sBa[4];
//	}*p;
//	//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//	int main()
//	{
//		p = (struct Test*)0x100000;
//		printf("%p\n", p + 0x1);
//		printf("%p\n", (unsigned long)p + 0x1);
//		printf("%p\n", (unsigned int*)p + 0x1);
//		return 0;
//		//�����  0x100014
//	   //         0x100001
//	   //         0x100004    
//	}
//
//
//	int main()
//	{
//		int a[4] = { 1, 2, 3, 4 };
//		int* ptr1 = (int*)(&a + 1);
//		int* ptr2 = (int*)((int)a + 1);
//		printf("%x,%x", ptr1[-1], *ptr2);
//		return 0;
//
//		//4,20000000
//	}