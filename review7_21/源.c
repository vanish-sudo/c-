#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {
//	int a = 10; 
//	int* p = &a;//pָ�����
//	//��ַ��ʵ��ָ�� ����ŵ�ַ�ı�����ָ�����  
//	//ָ�룺�Ǵ�ű�����ַ�ı��� 
//	//����p��������int* ��p��ֵ��& a, Ҳ���Ǳ���a�ĵ�ַ��
//	
//}

//int main()
//{
//
//	int a = 0x11223344;//����ʮ��������һ���ֽ�
//	int* pa = &a;
//	char* pc = &a;
//	//*pc = 0;//ֻ����һ���ֽ�
//	//*pa = 0; //ȫ�ĳ�0
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//}
////ָ�����;�����ָ����н����ò���ʱ���ܹ����ʵĿռ�Ĵ�С
////ָ�����;�����:ָ����һ���߶�Զ��ָ��Ĳ�������λ���ֽ�
////int*p , p+1--->4
////char*p  ,p+1--->1
////double*p ,p+1--->8
//

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;//��Ԫ�ص�ַ
//	char* p = arr;//�ܲ��ĳ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p+1) = 1;//Խ���Լ������arr��Χ֮�󱻳�ΪҰָ��
//
//	}
//
//}

//Ұָ��
//���Ұָ�����ָ��ָ���λ���ǲ���֪�ģ������ ����ȷ�� û����ȷ���Ƶģ�
//Ұָ��
//ָ��δ��ʼ��
//int main()
//{
//	//int a;//�ֲ���������ʼ����Ĭ�����ֵ
//	int* p;//�ֲ���ָ��ı������ͱ���ʼ�� �����ֵ
//	*p = 20;
//	return 0;
//}
//ָ��Խ�� Ҳ�ᵼ��Ұָ��
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*p++ = i;//Խ���Լ������arr��Χ֮�󱻳�ΪҰָ��
//
//	}
//
//}
//int* test()
//{
//	int a = 10;//a �ֲ�����
//	return &a;
//}
//int main()
//{
//	int* p = test();//���뺯��������ռ䣬���ǳ�����������ռ�ͻᱻ�ͷ�
//	*p = 20;//��ʱ����ָ���Ѿ����ͷŵĿռ䣬
//	return 0;
//}

//int main() {
//	//int a = 0;
//	////int* pa = &a;//��ʼ��
//	//int* pa = NULL;//��֪����ʼ��ɶʱ���Գ�ʼ��ΪNULL
//    int a = 0;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//����ʹ��ʱ��Ҫ���NULL  �����ΪҰָ��
//	//*pa = 10;//ָ��ΪNULLʱ����ʹ��
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//
//	//	printf("%d ",*p);
//	//	p++;
//	//}
//
//	for (i = 0; i < 5; i++)
//	{
//
//		printf("%d ", *p);
//		p += 2;
//	}
//}
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES] = { 0 };
//	float* vp;
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		//*vp++ = 0;//��ʹ��*vp
//	*--vp = 0;//��  --vp
//	}
//}
//ָ���ָ��
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//��ָ���Сָ������м�Ԫ�ظ���
//	printf("%d\n", &arr[0] - &arr[9]);//����ֵ���м�Ԫ�ظ���
//	//printf("%d\n   ", &arr[9] - &ch[0]);//����д�����������ͬ���������������
//
//}
//

//ָ������strlen
//int my_strlen(const* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main() {
//	char arr[] = "hello bit";
//	printf(" %d ", my_strlen(arr));
//	return 0;
//}

//ָ�������
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��ַ����Ԫ�ص�ַ
//	printf("%p\n", arr + 1);//��ַ����Ԫ�ص�ַ
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	//1. &arr - &������ - ������������Ԫ�ص�ַ - ��������ʾ��������- &������ȡ��������������ĵ�ַ
//	//2.sizeof(arr)  --   sizeof(������) -- ��������ʾ���������� --sizeof(������)���������������Ĵ�С 
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p  =========  %p\n", p + i, &arr[i]);
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}*/
//
//}
//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//int**ppa���Ƕ���ָ�룬һ��ָ��ĵ�ַֻ�ܴ���ڶ���ָ�룬�Դ�����
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//}

//ָ������ - ����
//����ָ�� - ָ��

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//�������� - �������
	//�ַ����� - ����ַ�
	//ָ������ - ���ָ��
	int* arr2[3] = { &a,&b,&c }; //ָ������
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", *arr2[i]);
	}
	return 0;
}