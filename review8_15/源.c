#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ���ṹ������
//����һ��ѧ�����ͣ�������ѧ������������ѧ������������
//����ѧ��������+�绰+�Ա�
//struct �ṹ��ؼ���  Stu�ṹ���ǩ
//struct Stu {
//	//�ṹ��ĳ�Ա����
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//
//}s4,s5,s6;//ȫ�ֱ���
//struct Stu s3;//ȫ�ֱ���
//int main() {
//	//�����ṹ�����
//	struct Stu s1;
//	struct Stu s2;
//
//
//}

////�����ṹ������
// �����ṹ��ֻ��ʹ��һ��

//�����ṹ�� ����ʡ������ ���Ǳ���˳������������������������޷�������
//struct {
//	int a;
//	char b;
//	float c;
//}s1,s2; 
////�����ṹ��ָ������
//struct {
//	int a;
//	char b;
//	float c;
//}*psa;
////��������ֻ���ڱ����б��д�������
//int main() {
//	s1.a = 10;
// //�����ṹ�����Ϳ��Դ��ڣ����������ṹ����Գ�Աһģһ��ʱ
//�������ڴ���ʱ�Ὣ���ǵ��ɲ�ͬ����
//	psa = &s1;//���Ϲ� �����ṹ��Ա�������˵����������
//	printf("%d", s1.a);
//	return 0;
//}

//�ṹ���������
//�����÷���
//struct Node
//{
//	int date;
//	struct Node n;
//};
//
//int main()
//{
//
//	return 0;
//}

//
////��ȷ�÷���
//struct Node
//{
//	int date;
//	struct Node* next;
//};
//
//int main()
//{
//
//	return 0;
//}

//�ض���ṹ��������
//�����÷���

//typedef struct
//{
//	int data;
//	Node* next;
//}Node;
//
//
////��ȷ�÷���
////typedf struct Node
////{
////	int data;
////	struct Node* next;
////}Node; e

//struct S {
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main() {
//	struct S s = { 'c',19,19.0,"arr" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//}

//struct T {
//	double weight;
//	short age;
//};
//
//struct S {
//	char c;
//	int a;
//	struct T t;
//	double d;
//	char arr[20];
//};
//
//int main() {
//	struct S s = { 'c',19,{89.0,12},19.0,"arr" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%d %lf", s.t.age, s.t.weight);
//}


//�ṹ���ڴ����
//#include <stdio.h>
//
//struct S1
//{
//    char c1;
//    int i;
//    char c2;
//};
//
//struct S2
//{
//    char c1;
//    char c2;
//    int i;
//    
//};
//
//int main()
//{
//    //����Ľ����ʲô��
//    struct S1 s1 = { 0 };
//    printf("%d\n", sizeof(s1));
//    struct S2 s2 = { 0 };
//    printf("%d\n", sizeof(s2));
//    return 0;
//}

#include<stddef.h>
struct S1
{
    char c1;
    int i;
    char c2;
};

int main() {
    //size_t offsetof(structName, memberName); ͷ�ļ�Ϊ<stddef.h>
    printf("%d\n", offsetof(struct S1, c1));//��������ڽṹ���ƫ����
    printf("%d\n", offsetof(struct S1, i));//��������ڽṹ���ƫ����
    printf("%d\n",offsetof(struct S1, c2)) ;//��������ڽṹ���ƫ����
    return 0;
}

//#include <stdio.h>
//#pragma pack(8)//����Ĭ�϶�����Ϊ8
//struct S1
//{
//    char c1;
//    int i;
//    char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//#pragma pack(1)//����Ĭ�϶�����Ϊ1
//struct S2
//{
//    char c1;
//    int i;
//    char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//    //����Ľ����ʲô��
//    printf("%d\n", sizeof(struct S1));
//    printf("%d\n", sizeof(struct S2));
//    return 0;
//}

struct S
{
    int data[1000];
    int num;
};
struct S s = { {1,2,3,4}, 1000 };
//�ṹ��ֵ����
void print1(struct S s)
{
    printf("%d\n", s.num);
}
//�ṹ���ַ����
void print2(struct S* ps)
{
    printf("%d\n", ps->num);
}
int main()
{
    print1(s);  //���ṹ��
    print2(&s); //����ַ
    return 0;
}