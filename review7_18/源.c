#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//һά����Ĵ����ͳ�ʼ��
//����Ĵ���
//������һ����ͬ���͵�Ԫ�ؼ���
//int main() {
////����һ������  --�������10��
//	int arr[10] = {1,3,4};//����ȫ��ʼ�� ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0;
//	char arr2[10] = {'a','b'};
//	char arr3[10] = "adadc";
//	char arr4[]="addasd";
//	int n = 7;
//	//sizeof()���������ռ�ռ��С
//	printf("%d ", sizeof(arr4));//�����ַ���
////strlen�������'/0'֮ǰ���ַ�����
//	printf("%d ", strlen(arr4));//�������ַ�0

	//int ch[n]; ���������ǳ������ʽ ����ȷ�������С ���Բ����ñ���n

	//1��strlen��sizeofû��ʲô����
	//2.strlen�����ַ����ĳ��� ֻ������ַ������� �⺯��  ʹ�õ���ͷ�ļ�
	//3.sizeof������� ���� ���͵Ĵ�С ��λ���ֽ� - ������
//}; 
//int main() {
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	char arr3[] = { 'a','b','c','\0'};
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//��������ֵ ������û�д��0 strlenֻ����ַ��� ����\0ʱ�Ż�ֹͣ
//	printf("%d\n", strlen(arr3));//3  �������з���0
//
//};
//int main() {
//	////[] �±����ò����� ��ʵ����������ʲ�����
//	//	char arr1[] = "abcdf";
//	//	printf("%c\n", arr1[3]);
//	//	int i = 0;
//	//	//strlen���ص����޷�����
//	//	for (i = 0; i < (int)strlen(arr1); i++) {
//	//		printf("%c ", arr1[i]);
//	//
//	//	}
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		prinitf("%d", arr[i]);
//	};
//
//};
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("&arr[%d]=%p\n" ,i, &arr[i]);/* �����ڵ�ַ���������� �ӵ͵�ַ���ߵ�ַ*/
//	};

//};

//��ά����
//int main() {
//	   //��������
//		int arr[3][4] = { 1,1,2,3,4};//��һ�����˻��Զ�����ڶ���
//		    //int int int int
//			//int int int int
//			//int int int int
//		int arr2[3][4] = { {1,1 },{ 2, 3, 4, 6}};//�������м�����д����ž��ǰ����Ƿ��ڶ�ά�����еĵڼ�����������
//		    //1 1 0 0
//			//2 3 4 5
//			//0 0 0 0
//		int arr3[][4] = { { 1,1 },{ 2, 3, 4, 6} };//�п���ʡ��
//		//int arr3[3][] = { { 1,1 },{ 2, 3, 4, 6} };//�в�����ʡ��
//};
// int main()
//{
//int arr[][4] = { {1,2,3,4},{5,6,7,8} };
//for (int i = 0; i < 2; i++)
//{
//	for (int j = 0; j < 4; j++)
//	{
//		printf("arr[%d][%d]=%d\n", i, j, arr[i][j]);
//		printf("arr[% d][% d] = % d\n", i, j, &arr[i][j]);
//
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[][4] = { {1,2,3,4},{5,6,7,8} };
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//
//			printf("arr[%d][%d] = % p\n", i, j, &arr[i][j]);//��ά�������ڴ�����������ŵģ����𽥵���
//
//		}
//		printf("\n");
//	}
//
//}

//������Ϊ��������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	int j = 0;
//	int x = 0;
//	for (i = 0; i < sz; i++) {
//		int flg = 1;
//		for (j = 0; j < sz - i; j++)//sz-1 ��ֹ����Խ��
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//				flg = 0;//����δ��ȫ����
//			}
//
//		};
//		if (flg == 1)
//			break;//�Ѿ�ȫ������
//	};
//}
//int main() {
//	int arr[] = {9,8,7,6,5,10,3,2,1,0,1 };
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	//��arr�������� �ĳ�����
//	//arr������ ���Ƕ�������д��� ʵ���ϴ���ȥ����������Ԫ�ص�ַ
//	bubble_sort(arr,sz);//ð������
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//};
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//��������������Ԫ�صĵ�ַ�����������
	//��һ�������
	//sizeof(arr) / arr[0];
	//sizeof(������)--��������ʾ�������飬sizeof(������)���������������ĵĴ�С����λ���ֽ�
	//�ڶ������ :
	printf("ȥ����ĵ�ַ �ڶ��������%p\n", &arr);
	printf("�ڶ��������%p\n\n", &arr + 1); //��һ֮����������������
	//&�������������������������飬& ��������ȡ��������������ĵ�ַ
		printf("%p\n", arr);
	printf("%p\n\n", arr + 1);//��һ�ͽ����arr[1]
	printf("%p\n", &arr[0]);
	printf("%p\n\n", &arr[0] + 1);
	printf("%d\n", arr[0]); 
	printf("%d\n", *arr);
}
//int main() {};