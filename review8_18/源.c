#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
//int main() {
//	int* p = (int*)malloc(40);
//	if (p == NULL) {
//		return 0;
//	}
//	//ʹ��
//	int* p2 = realloc(p, 80);
//	if(p2==NULL)
//	p = p2;
//	return 0;
//}

//int main() {
//	int* p = realloc(NULL, 40);//�ȼ���malloc��40���� 
//}

//����ʹ��һ��
//int main() {
//	//��NULLָ�������
//	int* p = malloc(40);
//	*p = 10;//pδ�����жϣ�malloc���ܿ��ٿռ�ʧ�ܷ���NULL
//}


//����ʹ�ö���
//int main() {
//	//�Զ�̬�����ڴ��Խ�����
//	int* p = malloc(40);
//	if (p == NULL)
//		return 0;
//	int i = 0;
//	for (i = 0; i <= 10; i++) {
//		*(p + i) = i;//Խ��
//	}
//	free(p);
//	p = NULL;
//}

//����ʹ������
//int main() {
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//}

////����ʹ���ģ�
//
//int main() {
//	int* p = (int*)malloc(40);
//	if (p == NULL) {
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		//pָ��ĵ�ַ�Ѿ��ı�
//		*p++ = 0;
//
//	}
//	free(p);
//	p = NULL;
//}

//����ʹ���壺
//int main() {
//	int* p = (int*)malloc(40);
//	if (p == NULL) {
//		return 0;
//	}
	//ʹ��

	//�ͷ�
	//free(p);
	//....
	//free(p);
	//��α�����ִ��� 
	//��free(p)���
	//����p=NULL
	//free(p);
	//p = NULL;
	//free(p);
//}

	//������
	//��̬�����ڴ������ͷţ��ڴ�й©��
	//int main() {
	//	while (1) {
	//		malloc(40);
	//		Sleep(1000);
	//	}
	//}

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//strֵ����
//	strcpy(str, "hello,world");//����������Ƿ����ʿ�ָ��
//	printf(str);
//}
//����µĽ����
//1.���д���������ֱ���������
//2.��������ڴ�й©������
//str����ֵ���ݵ���ʽ��p
//p��GetMemory�������βΣ�ֻ�ܺ����ڲ���Ч����GetMemory�������غ�
//����̬���ٵ��ڴ���δ�ͷ����޷��һأ���������ڴ�й¶

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);//
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//strֵ����
//	strcpy(str, "hello,world");//����������Ƿ����ʿ�ָ��
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//};

//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(&str);//strֵ����
//	strcpy(str, "hello,world");//����������Ƿ����ʿ�ָ��
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(void)
//{
//	static char p[] = "hello,world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//��������ԭ�򣺷���ջ�ռ�ĵ�ַ����

//����ջ�ռ����������

//��̬����ջ��
//int* test()
//{
//	static int a = 10 ;//��̬��
//	//int a = 10;//ջ��
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//���������static,����Ϊ����ջ�ռ��ַ����
//	printf("%d", *p);
//	return 0;
//}


//��̬��δ����ջ������

//int* test()
//{
//
//	int* ptr = malloc(sizeof(int) * 25);//����
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	free(p);
//	return 0;
//}
//
//����δ����


//�Ƿ������ڴ�
//void test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}

//int main()
//{
//	test();
//}


//
//���ģ�
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	test();
//}

//�������鴫�δ���
struct S {
	int n;
	//int arr[0];//δ֪��С��  ���������Ա  �����С�ǿ��Ե�����
	int arr[];//δ֪��С��  ���������Ա  �����С�ǿ��Ե�����
};
void creat(struct S**ps) {
	*ps=(struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	if (*ps == NULL);
	return;
	(*ps)->n = 100;
	memset((*ps)->arr, '\0', 5 * sizeof(int));
}
int main() {
	//struct S s = {0};
	//printf("%d  ", sizeof(s));//���ṹ��������������ʱ������ṹ��ռ���ֽ�ʱ����������������
	struct S* ps;
	creat(&ps);
	if (ps == NULL) {
		return 0;
	}
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++) {
		ps->arr[i] = i;
	}
	
	struct S* p2 = (struct S*)realloc(ps, 44);
	 
	if (p2 != NULL) {
		ps = p2;
		p2 = NULL;
		for (i = 0; i < 10; i++) {
			ps->arr[i] = i;
			printf("%d ", ps->arr[i]);
		}
	}
	free(ps);
	ps = NULL;
	return 0;
}


//struct S {
//	int n;
//	int* arr;  
//};
//
//int main() {
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = (int*)malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		ps->arr[i] = i;
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	//������С
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL) {
//		ps->arr = ptr;
//		ptr = NULL;
//		for (i = 0; i < 10; i++) {
//			ps->arr[i] = i;
//			printf("%d ", ps->arr[i]);
//		}
//	}
//	//�ͷ��ڴ�
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}