#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//int main() {
//	char password[20] = { 0 };
//	char ret = '0';
//	int ch = 0;
//	printf("��������������:>\n");
//	//C���Ե��ַ���Ϊ������ʽ��
//	//����������ƿ��Ա�ʾ���ַ���ʶ��ַ������벻��Ҫ�ӵ�ַ����
//	scanf("%s", password);
//	do
//	{
//		printf("��ȷ��(Y/N):>\n");
//		//getchar();
//		while ((ret = getchar()) != '\n')
//		{
//			//getcahr()����ʹ��ʱֻ���ȡһ���ַ�
//		}
//		ret = getchar();
//		if (ret == 'Y' || ret == 'y')
//		{
//			printf("ȷ�ϳɹ�\n");
//				break;
//		}	
//		else if (ret == 'Y' || ret == 'y')
//		{
//			printf("ȷ��ʧ��\n");
//			break;
//		}
//		else {
//			printf("����ȷ��\n");
//		}
//	} while (1);
//}
////���������������  scanf��getchar�������뺯��  ���ǵ����й����������ģ�
////���������ü����û�����ʱ ��1234 ��Ҫ���»س���ȷ�� ��scanf��ȡ������֮ǰ
////���Ǳ���������뻺������  ��ŵ������ǣ�1234\n ���س������� scanfֻȡ����
////1234������� ��ʱ��������ʣ��\n ���ʱ��getchar ��ʼ���� ������������������\n
////ʱ��ֱ��ȡ��\n


//int main() {
//	int ch = 0;
//	while ((ch=getchar())!=EOF) {
//		if (ch < '0' || ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		break;
//		printf("%d", i);
//	}
//}


//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//		//forѭ���ĳ�ʼ������ ������ʡ�� 
//		//��������ʡ��ʱ���Ϊ��
//	}
//}

//int main() {
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++) {
//		for (; j < 10; j++)
//		{
//			printf( "jeje");
//		}//10��jeje
//	}
//}

//int main() {
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y<55; x++, y++)
//	{
//		printf("hehe\n");
//	}
//}


//��:
//����ѭ��Ҫѭ������ 
//0��
//int main() {
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//int main() {
//	int i = 0;
//	//��ִ�����ж� ����ִ��һ��
//	do {
//		printf("%d", i);
//		i++;
//	} while (i < 0);
//
//}

//1.����n�Ľ׳� 5!  5*4*3*2*1
//int main() {
//	int n = 0;
//	int i = 0;
//	int res = 1;
//	printf("��������Ҫ����Ľ׳�:>");
//	scanf("%d", &n);
//	for (i = n; i >= 1; i--)
//	{
//		res = res * i;
//	}
//	printf("%d", res);
//}

//����1!+ 2!+ 3!+ .... + 10!
//int main() {
//	
//	int i = 0;
//	int j = 0;
//	int res = 1;
//	int sum = 0;
//	for (i = 3; i >= 1; i--) {
//		res = 1;
//		for (j = i; j >= 1; j--)
//		{
//			res = res * j;
//		}
//		sum = sum + res;
//	} 
//	printf("%d", sum);
//	return 0;
//}

//��һ�����������б�дһ������ĳ��n ��д����int binsearch(int x,int v[],int n)

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	int left = 0;
//	int mid = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &n);
//	while (left <= right) {
//		mid = (right + left)/2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��� �±�Ϊ%d", mid);
//			break;
//		}
//		
//	}
//	if(right<left)
//		printf("��������û�д���");
// return 0;
//}

//int main() {
// //welcome to bit!!!!!!
////w###################!
////we#################!!
////wel###############!!!
////welc#############!!!!
////welco###########!!!!!
////welcom#########!!!!!!
////.......
////welcome to bit!!!!!!
//
//	char arr1[] = "Welcome to China!!!!";
//	char arr2[] = "####################";
//	int left = 0;
////strlen������ַ������� -1������±�
//
//	int right = strlen(arr1) - 1;
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		//Sleep(1000);//����Ϊ���룬1000ms=1s��
//		//             //��Sleep()����windows.hͷ�ļ�
//		//system("cls");//ִ��ϵͳ����  cls �����Ļ ͷ�ļ�stdlib.h
//	}
//}

int main() {
	char user[20] = "";
	char password[20] = "";
	int i = 0;
	
	while (i <= 2) {
		printf("�������˺ţ�>");
		scanf("%s", user);
		printf("���������룺>");
		scanf("%s", password);
		//==���������Ƚ������ַ��Ƿ���� Ӧ��ʹ��һ���⺯�� strcmp
		if (strcmp(user, "tang1561150107") != 0 || strcmp(password, "gsq123456") != 0)
		{
			i++;
			printf("�˺Ż��������������������");
		}
		else
		{
			printf("��¼�ɹ�");
				break;
		}
	}
}