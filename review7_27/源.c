#include<stdio.h>

//int main() {
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	char* p2 = "abcdef";//�ַ������� ���ɸ���
//	//ָ������ - ����  - ���ָ�������
//	int *arr[10];//ָ������
//	//����ָ��  ָ�������ָ��
//	int *p3;//����ָ��  ָ�����ε�ָ��
//	char *p4;//�ַ�ָ��  ָ���ַ���ָ��
//	int arr2[5];//����
//	int (*pa)[5] = &arr; //ȡ������ĵ�ַ��pa����һ������ָ��
//	//ȥ�����־���ָ������
//	int(*parr[10])[5]; 
//	return 0;
//}

//һά���鴫��
//void test(int arr[]) {//ok?    ok
//}
////void test(int arr[10]) {//ok?  ok  
////} 
////void test(int* arr) {//ok?   ok
////}
//void test2(int* arr[20]) {//ok?  ok
//}
////void test(int **arr) {//ok?  ok
////
////}
//
//
//int main() {
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test(arr2);
//}

////��ά���鴫��
//void test(int arr[3][5]) {}//ok?  ok
//void test(int arr[][5]) {}//ok?  ok
//void test(int arr[3][]) {}//ok? no 
//
//void test(int*arr){}//ok?  no
//void test(int* arr[5]) {}//ok? no
//void test(int (*arr)[5]) {}//ok? ok
//void test(int**arr) {}//ok?
//int main() {
//	int arr[3][5] = { 0 };
//	test(arr);//��ά���鴫��
//}

//һ��ָ�봫����ͼ
//
//void test2(int* p)
//{
//
//}
//void test1(char* p)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test(&a);//��ַ
//	test(p1);//һ��ָ��
//	char ch = 'w';
//	char* pc = &ch;
//	test1(&ch);
//	test1(pc);
//
//}
// 
// 
//����ָ�봫�� ��ͼ
// 
// 
//���Խ���һ��ָ�룬����ָ�룬ָ������
//void test(int** ptr)//���������Ƕ���ָ�룬���ǽ���һ��ָ���ַ���߶���ָ��
//{
//	printf("num=%d\n", **ptr);
//}
//
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);//����ָ��
//	test(&p);//һ��ָ���ַ
//	int* arr[10];//ָ������
//	test(arr);
//}


//����ָ��
//����ָ�� - ָ�������ָ��
//����ָ�� - ָ������ָ�� - ��ź�����ַ��һ��ָ��

//int Add(int a, int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;
//} 
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	//&�������ͺ��������Ǻ����ĵ�ַ
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//����ָ��
//	int(*pa)(int, int) = Add;
//	int(*pb)(int x, int y) = Add;
//	printf("%d\n", (*pa)(a, b));
//	printf("%d\n", (pb)(a, b));
//
//}

//void Print(char* str)
//{
//	printf("%s", str);
//}
//
//int main() {
//	void(*pa)(char*) = Print;
//	(*pa)("hello world");
//}

//��ͼ


//int Add(int a, int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(a, b));
//	printf("%d\n", (*pa)(a, b));
//	//���pa�Ǻ���ָ�룬���Խ����û��߲������ã�����������Ȼֵ����һ������������
//	printf("%d\n", (**pa)(a, b));
//	printf("%d\n", (***pa)(a, b));
//	printf("%d", *pa(a, b)); //����������д����Ϊ* ���ȼ��ϵ�
//
//}

//����ָ������

//int Add(int a, int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;
//}
//int  Sub(int a, int b)
//{
//	int z = 0;
//	z = a - b;
//	return z;
//}
//int Mul(int a, int b)
//{
//	int z = 0;
//	z = a * b;
//	return z;
//}
//int Div(int a, int b)
//{
//	int z = 0;
//	z = a / b;
//	return z;
//}
//int main()
//{
//	int* arr[5];//ָ������
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//
//	int(*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[4])(int, int) = { Add ,Sub,Mul,Div };//����ָ������
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](2, 3));
//	}
//	return 0;
//
//}