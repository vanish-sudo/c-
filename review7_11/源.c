#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main() {
//
//	//�����ͱ���������
//	//3  3.14   ���泣��
//	// 
//	//const ���εĳ����� ���ʻ��Ǳ���
//
//	int num = 4;//����
//	const int num1 = 4;//������  num1�Ǳ��� �������г����� ��������˵num1�ǳ�����
//	//int arr[num1] = { 0 };//���� ������[]���ɷű���
//	int arr1[4] = { 0 };//
//	printf("%d", num);
//	num = 8;
//	printf("%d", num);
//
//	printf("%d", num1);
//	//num1 = 8;//���� �����޸� 
//	printf("%d", num1);
//
//
//
//	return 0;
//}

//#define ����ı�ʶ������
//#define MAX 10
//int main() {
//	int arr[MAX] = { 0 };
//	printf("%d\n", arr[0]);
//	printf("%d\n", MAX);
//	return 0;
//}


//ö�ٳ���
//ö�� һһ����
//�Ա��� Ů ����
//����ɫ���� �� ��
//���� 1 2 3 4 5 6 7

//enum Sex {
//	man,
//	female,
//	secret
//};
//
//enum Color {
//	RED,
//	YELLOW,
//	BLUE
//};
//int main() {
//	enum Color color = BLUE;
//	printf("%d", color);
//	color = 1;
//	printf("%d", color);
//	//BLUE = 4;//err ���ɸ�
//
//	printf("\n%d", man);
//	printf("%d", female);
//	printf("%d", secret);
//
//}


//c������α�ʾ�ַ���
//"hello" ������˫������������һ���ַ���Ϊ�ַ��������ַ� ���߼���ַ���
//ע�� �ַ����Ľ�����ʾ��һ��\0��ת���ַ� �ڼ����ַ������ȵ�ʱ��\0�ǽ�����־ �������ַ�������

//int main() {
//	char arr1[] = "abc";//�������ַ���
//	//"abc" --- 'a' 'b' 'c' '\0' --'\0'�ַ����Ľ�����־
//	char arr2[] = { 'a','b','c' };//�������ַ���
//	char arr3[] = {'a','b','c',0};//�������ַ���
//	
//// '\0' - 0
//// 'a' - 97
//// 'A' - 65
//	//.... ASCll ����ֵ
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//
//	return 0;
//}

//int main() {
//	printf("abc\n");
//	printf("c:\test\32\test.c\n");
//	//\t ˮƽ�Ʊ��
//	//??+c==>����ĸ��;
//	printf("are you  ok??)\n");//vc++6.0 ������Ϊare you ok
//	printf("c:\\test\\32\\test.c\n");
//	system("pause");
//	printf("1");
//		return 0;
//}

//int main() {
//	printf("%d", strlen("c:\test\32\test.c"));
//	//\ddd  ddd��ʾ1-3���˽������� �磺\130 x
//	//\xdd   dd��ʾ2��ʮ���������� �磺\x30 0
//	printf("%c", '\32');
//}


//����
//int  Add(int a, int b)
//{
//	return (a + b);
//}
//
//int main() {
//	int a = 201;
//	int b = 190;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d",sum);
//}

//���� ���壺һ��ͬ����Ԫ�صļ���
//int main() {
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����'
//	for ( i = 0; i < 10;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//λ�Ʋ�����
//int main() {
//	int a = 1;//һ������4���ֽ�
//	//һ���ֽڰ�biteλ ��λ�Ʋ������ǲ��������Ƶ�
//	//����a�Ķ�����Ӧ��Ϊ
//	/*00000000000000000000000000000001 32λ*/
//	//���������ƣ���߶�0���ұ߲���
//	int b = a << 1;//���ƶ�1 ����ʮ���Ƴ���2 ���Ʒ�֮
//	printf("%d\n", b);
//	return 0;
//}


//λ������
//& ��λ��
//
//| ��λ��
//
//^ ��λ���

//int main() {
//	int a = 3;
//	//011
//	int b = 5;
//	//101
//	int c = a & b;
//	//001
//	printf("%d", c);
//	c = a | b;
//	//111
//	printf("%d", c);
//	 c = a ^ b;
//	//���ļ������
//	//��Ӧ������λ��ͬΪ0;
//	//��Ӧ������λ��ͬΪ1;
//	//110
//	printf("%d", c);
//}

//int main() {
//	int a = -10;//  ���� -  ���� +  ��!  sizeof ��λȡ��~ ++ -- & ǿ������ת��(����) ���ǵ�Ļ������
//	int b = 20;
//	//a + b;˫Ŀ������
//
//	//C���������Ǳ�ʾ���
//	//0 - ��
// //  ��0��ʾ��
//	printf("%d\n", a);
//	printf("%d\n", !a);
//
//}

int main() {
	int a = 10;
		int sz=0;
	int arr[10] = { 0 };//����10������Ԫ�ص�����
	printf("%d", sizeof(a));//sizeof������Ǳ���/������ռ�ռ�Ĵ�С ��λ���ֽ�
	printf("%d", sizeof(int));//4
	printf("%d", sizeof a);//4
	//printf("%d", sizeof int);���ɼ���
	printf("\n%d", sizeof arr);//40
	//����Ԫ�ظ����Ĵ�С
	//Ԫ�ظ���=�����ܴ�С/ÿ��Ԫ�ش�С
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("\n%d", sz);


}