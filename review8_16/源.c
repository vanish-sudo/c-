#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//λ�ε�������ṹ�������Ƶģ���������ͬ��
//1.λ�εĳ�Ա������int��unsigned int��signed int
//2.λ�εĳ�Ա�������һ��ð�ź�һ������

//λ�� ----������λ  ��ʡ�ռ�
//struct A {
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
////47bit -- 6���ֽ�
//int main() {
//	struct A s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
////λ�ε��ڴ���䣺
////1.λ�εĳ�Ա������int  unsigned int ��signed int ������char���������μ��壩����
////2.λ�εĿռ����ǰ�����4���ֽ�(int)������1���ֽڣ�char���ķ�ʽ�����ٵ�
////3.λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�����ֲ�ĳ���Ӧ�ñ���ʹ��λ��
//
//struct S {
//	char a : 3;
//	char b : 5;
//	char c : 3;
//	char d : 5;
//};
//int main() {
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	printf("%d %d %d %d", s.a, s.b, s.c, s.d);
//	return 0;
//
//}
//
////ö��
//enum Sex {
//	//ö�ٵĿ���ȡֵ(Ĭ�ϴ�0��ʼ)
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//enum Color {
//	RED,
//	GREEN=9,
//	BLUE
//}; 
//int main() {
//	enum Sex s = MALE;
//	//enum Color s2 = BLUE;
//	//enum Color c = 2;//������ֻ����Ϊ�﷨��ⲻ�ϸ�c������Ϊenum Color 
//	                  //��2Ϊint���� �����Ը�ֵ��
//	                 //�����ڸ�Ϊ�ϸ��c++�����в���
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	 
//	return 0;
//}
//
////�ŵ� ��ͼ
//
////C���Ե�Դ����-->Ԥ����-->����-->����--->��ִ�г���
////Ԥ��������� �滻#define ������� ��ɾ��ע��

//����(������)
//Ҳ��һ��������Զ������ͣ��������Ͷ���ı���Ҳ����һϵ�г�Ա
//������ ��Щ��Ա��ͬһ��ռ䣨��������Ҳ�й����壩

//union Un{
//	char c;//1
//	int i;//4
//};
////���ϵĳ�Ա�ǹ���ͬһ���ڴ�ռ�ģ�����һ�����ϱ����Ĵ�С������������Ա�Ĵ�С
////��Ϊ�������ٵ����������������Ǹ���Ա
////�����еĳ�Ա����ͬʱʹ�ã���Ϊ��������ͬһ���ռ䣬������һ����ʱ������Ķ���ı�
//int main() {
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.i);
//	return 0;
//} 


////����һ��
//int check_sys(int* a)
//{
//	return *(char*)a;
//	//����1ΪС��
//	//����0Ϊ���
//}
//int main()
//{
//	//00 00 00 01
//	int a = 1;
//	int ret = check_sys(&a);
//	if (ret == 1)
//	{
//		printf("С��");
//	}
//	else
//		printf("���");
//}


//int check_sys()
//{
//	union Un
//	{
//		char c;//1
//		int i;//4
//	}u;
//	u.i = 1;
//	return u.c;
//	//����1ΪС��
//	//����0Ϊ���
//}
//
//int main()
//{
//	//00 00 00 01
//	int a = 1;
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��");
//	}
//	else
//		printf("���");
//}

//����ö�ٴ�С
//enum Sex {
////	ö�ٵĿ���ȡֵ(Ĭ�ϴ�0��ʼ)
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main() {
//	enum Sex s=MALE;
//	printf("%d ", sizeof(s));//4
//}

//union Un {
//	int a;//4       ��������4
//	char arr[5];//5  ��������1
//};
//
//int main() {
//	union Un n;
//	printf("%d\n", sizeof(n));
//	return 0;
//}
//���ϵĴ�С����������Ա�Ĵ�С
//������Ա��С����������������������ʱ����Ҫ����