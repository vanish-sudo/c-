#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = i;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//�䳤���飬C99�й涨��, vs�����ã���gcc����

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<errno.h>
//int main() {
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(INT_MAX);
//	//int*p=(int*)malloc(10 * sizeof(int));
//	//���ܻ��п���ʧ�ܵ����
//	//���ٳɹ����ص�ַ��Ϊ���ٳɹ�����NULL
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++) {
//			printf("%d", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ  free
//	free(p);
//	p = NULL; 
//
//	return 0;
//}

//calloc ���ٿռ䣬��ʼ��Ϊ0;

//#include<stdio.h>
//#include<errno.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//		printf("%s", strerror(errno));
//	else {
//		int i = 0;
//		for (i = 0; i < 5; i++) {
//			*(p + i) = i;
//		}
//	}
//	//����ʹ��malloc����20���ֽڿռ�
//	//��������20���ֽڲ�������ʹ��
//	//ϣ�������ܹ���40���ֽ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//	int* p2 = (int*)realloc(p, 40);
//	//��һ�������ǵ�ַ���ڶ��������������µ��ֽڴ�С 
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(p2 + i));
//	}
//	//reallocʹ�õ�ע�����
//	//1.���pָ��Ŀռ�֮�����㹻�ڴ����׷�ӣ���ֱ��׷�ӣ�Ȼ�󷵻�p
//	//2.�����pָ��Ŀռ�֮��û�����㹻�ڴ����׷�ӣ���realloc��������һ���ڴ�����
//	//����һ����������Ŀյ������Ұ�ԭ���ڴ��е����ݿ����������ͷžɵĵ��ڴ�ռ�
//	//��󷵻��¿��ٵ��ڴ�ռ�
//	int* ptr = realloc(p, INT_MAX);
//	//׷�ӳɹ�
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		} 
//	}
//	//׷��ʧ��
//	else
//	{
//
//		printf("%s", strerror(errno));
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}
//

//�ڴ�������ʾ��һ��
//�Կ�ָ����н����ã�
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	//δ�Է���ֵ�����жϣ���malloc���ٿռ�ʧ�ܣ���᷵��NULL����NULL����++
// //�ǷǷ����ʵ�ַ
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//}

//
//��ȷʹ�ã�
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//}
//
////����ʾ������
////�Զ�̬�ڴ�ķ���Խ�磺
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 5);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//}
//
//
////����ʾ������
////�ԷǶ�̬�ڴ濪��ʹ��free
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	8p = 20;
//	free(p);
//	p = NULL;
//}
//
//
////����ʾ���ģ�
////ʹ��free�ͷŶ�̬�����ڴ��һ����
//
//int* p = (int*)malloc(sizeof(int) * 10)
//if (p == NULL)
//return 0;
//int i = 0;
//for (i = 0��i < 10��i++)
//{
//	*p++ = i��//�ı���p����ʼλ�ã��������ȼ����⣬�ü�����
//}
//free(p);
//p = NULL;
//return 0;
//
//
//����ʾ���壺
//��̬�����ڴ������ͷ�(�ڴ�й©)
//
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//}
//
//
//
//
////����ʾ��������ͬһ���ڴ����ͷ�
//int main()
//{
//
//	int* p = (int*)malloc(sizeof(int) * 10)
//		if (p == NULL)
//			return 0;
//	int i = 0;
//	for (i = 0��i < 10��i++)
//	{
//		*p++ = i��//�ı���p����ʼλ�ã��������ȼ����⣬�ü�����
//	}
//	free(p);
//	free(p);
//	free(p);
//}
