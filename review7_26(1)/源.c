
#include<stdio.h>
//void test(int arr[]) {
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�����32λ���� sz=1�������64λ����sz=2
//}
//
//int main() {
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
//int main() {
//	char ch = 'w';
//	char* pc = &ch;//�ַ�ָ��
//	return 0;
//}
//int main() {
//	char arr[] = "asdfg";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//
//
//}

//int main() {
//	char* p = "addasj";//addasj ��һ���ַ�������
//	//�����������ĸ�ĵ�ַ
//	//*p = 'c';//�������ɸ� 
//	//printf("%c\n", *p);
//	printf("%s\n", p);
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";//�����ַ������ܱ��޸�  ��p1��p2���ַ�����ͬ ����ֻ����һ�� ����������ַ����ͬ��
//	char* p2 = "abcdef";
//	printf("%p\n", p1); //����������ַ����ͬ��
//	printf("%p\n", p2);
//	if (p1 == p2)
//	{
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha");
//	}//���Ϊhehe
//	/*if (arr1 == arr2)//������ͬ������������ռ䣬��ͬ��������Ԫ�ص�ַ��ͬ
//	{
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha");
//	}*/
//	���Ϊhaha
//}

//ָ������  ������ ���ָ��
//int main() {
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[10];//�������ָ������� ָ������
//	char* pch[10];//����ַ�ָ������� ָ������
//}

//int main() {
//	int a = 10;
//	int b = 10;
//	int c = 10;
//	int d = 10;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d ", *(arr[i]));
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 2,3,4,5 };
//	int arr3[] = { 3,4,5,6 };
//	int arr4[] = { 4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3,arr4 };
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		int j = 0;
//		for (j = 0; j < 4; j++) {
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//
//	//int*arr1[10]����ָ������
//	//char* arr2[10]һ���ַ�ָ������
//	//char** arr3[10]�����ַ�ָ������
//
//}

//����ָ��  ��ָ��  ָ�������ַ��ָ�� 
//int main()
//{
//	int* p = NULL;//p������ָ�� --ָ�����ε�ָ�� - ������ε�ָ��
//	char* pc = NULL;//pc���ַ�ָ��-- ָ���ַ���ָ�� - ����ַ��ĵ�ַ
//	//����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//arr����Ԫ�ص�ַ
//	//&arr[0] - ��Ԫ�صĵ�ַ
//	//&arr   ����ĵ�ַ
//	int(*p)[10] = &arr;//����ĵ�ַҪ������
//	//����Ϊ����ָ��
//	//���д��int* p[10]��Ϊָ�����飬��Ϊ[]�����ȼ�����*
//}

//int main()
//{
//
//	char* arr[5] = { 0 };//ָ������
//	//pa = &arr;����������� 
//	char* (*pa)[5] = &arr;  
//	//���������*˵����ָ�� [5]��ָpaָ���������5��Ԫ��  char*��ָ�������Ԫ������
//		int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//
//
//
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", p[i]);
//		printf("%d", *(p + i));
//		printf("%d", *(arr + i));
//		printf("%d ", arr[i]);//arr[i]==*(arr+i)
//		//�����ĸ�ȫ���ȼ�
//	}
//}


////������������ʽ
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////������ָ����ʽ
void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
             
          printf("%d ",p[i][j]);
			//printf("%d ",*(*(p + i)+j));
         // printf("%d ", *(p[i]+j);
			/*printf("%d ", (*(p + i))[j]);*/
			

		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6} ,{3,4,5,6,7} };
	//print1(arr, 3, 5);//arr - ������ - ��Ԫ�ص�ַ  
					  //��arr�����һά���飬�������ά�������Ԫ�ص�ַ�ǵ�һ�еĵ�ַ
					  //����һ��Ҳ��һά���飬�����������ָ�����
	print2(arr, 3, 5);
}
// 
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	//int(*pa)[10] = &arr;
//	int i = 0;
//
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", p[i]);
//	//	printf("%d ", *(p + i));
//	//	printf("%d ", *(arr + i));
//	//	printf("%d ", arr[i]);//arr[i]==*(arr+1)=*(p+i)=p[i]
//	//}
//
//	
//	return 0;
//}
//int arr1[5];   //arr1��һ����5��Ԫ�ص���������
// int * arr2[10];//arr2��һ�����飬����Ԫ��10����ÿ��Ԫ�ص�����Ϊint*����ָ������
//int (*arr3)[10];//arr3��һ��ָ�룬��ָ��ָ��һ�����飬������ʮ��Ԫ�أ�ÿ��Ԫ�����Ͷ���int  arr3������ָ��
//int(*arr4[10] )[5];//arr4��һ������,��������ʮ��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���Ԫ����5��Ԫ�أ�ÿ��Ԫ����int

//arr4[10]
//������Щ��ʱ������ֽ���������[]�ҵ���ʡ�� ʣ�µľ�������