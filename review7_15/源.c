#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//int main() {
//	//�㷨ʵ��
//	/*a�����ֵ
//	b��֮
//    c�з���Сֵ*/
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (b > a) {
//		tmp = a;
//		a = b;
//		b = tmp;
//	};
//	if (c > a)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	};
//	if (c > b) {
//		tmp = b;
//		b = c;
//		c = tmp;
//	};
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//


//дһ�������ӡ��1-100֮�����е�3�ı���
//int main() {
//
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//		
//	}
//}


//���������������������������Լ��
//int main() {
//	int a = 18;
//	int b = 24;
//	int rest = 0;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	while (a%b!=0) {
//		rest = a % b;
//		a = b;
//		b = rest;
//	}
//	printf("%d", b);
//}

//��ӡ1000-2000�������
//int main() {
//	int years = 1000;
//	//��4�����Ҳ���100����
//	//�ܱ�400����
//	for (years; years <= 2000; years++)
//	{
//		if ((years % 4 == 0 && years % 100 != 0)|| years % 400 == 0)
//			printf("%d\n", years);
//		
//	}
//}

//�ҳ�1��100�е��ж��ٸ�9
//int main() {
//	int i = 0;
//	int rest = 0;
//	int sum = 0;
//	for (i = 1; i < 100; i++) {
//		if (i % 10 == 9)
//			sum++;
//		if (i / 10 == 9)
//			sum++;
//	}
//	printf("%d ", sum);
//	//9 19 29 39 49 59 69 79 
//}

//�ж��Ƿ�Ϊ����
//int main() {
//	int i, j;
//	int count = 0;
//	for (i = 100; i <= 200; i++) {
//		for (j = 2; j <= i; j++) {
//			if (i % j == 0) 
//				break;
//		}
//		if (i == j)
//		{
//			printf("�����������%d\n", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//}

//int main() {
//	int i, j, count;
//	count = 0;
//	//ż����ֻ��2������ ��������2���ϵ�����ʱ�����ų�����ż��
//		for (i = 101; i <= 200; i+=2) {
//			for (j = 2; j <= sqrt(i); j++) {
//				if (i % j == 0) 
//					break;
//			}
//			if (sqrt(i) < j)
//			{
//				printf("�����������%d\n", i);
//				count++;
//			}
//		}
//		printf("%d", count);
//}


//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4..... + 1 / 99 - 1 / 100��ֵ��ӡ���

//int main() {
//	double rest1 = 0.0;
//	double rest2 = 0.0;
//	int i = 0;
//	//��������
//	for (i = 1; i <= 100; i+=2)
//	{
//		rest1 = rest1+(1.0 / i);
//	}
//	//��ż����
//	for (i = 2; i <= 100; i += 2)
//	{
//		rest2 = rest2 + (1.0 / i);
//	}
//	printf("%lf", rest1 - rest2);
//}



/*����*/
//int main()
//{
//
//	int i = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + 1.0 / i;
//		sum = -sum;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//

//�ҳ�ʮ��������������
//int main() {
//	int i = 0;
//	int arr[] = { -10,-6,-4,-1,-2,-4,-1,-4,-5,-67,-9 };
//	int max = arr[0];
//	for (i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


//�˷��ھ���
//int main() {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++) {
//			printf("%d*%d=%-3d",i,j,i*j);
//		}
//		printf("\n");
//
//	}
//}

//��д���������������������ҵ�����ĳ����
//int main() {
//	 int arr[] = { 1,2,3,4,5,6,7,8,9};
//	int tmp = 0;
//	int k = 0;
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
//	scanf("%d",&k);
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid - 1;
//		}
//		else if(arr[mid]==k) {
//			printf("�ҵ��� %d �±�Ϊ%d", arr[mid],mid);
//			break;
//		}
//	}
//	if (left >right)
//	{
//		printf("û�д�����");
//	}
//
//}


//������
//1.���Ի�����һ�������
//2,��������

int main() {
	int n = 1;
	//1.���������
/*��ʱ����������*/
//time_t time(time_t *timer)     time_t�������Ǹ�����
//ret= rand((unsigned)time(NULL)); 	//rand����α����� ��Χ��0---RAND_MAX(ʮ������Ϊ0x7fff  ʮ����Ϊ32767)
	srand((unsigned)time(NULL));
do {
	
		menu();
		int select = 0;
		printf("��ѡ��:>");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ");
			return 0;
		default:
			printf("����Ƿ����� ����������");
			break;
		}
	
	
		Sleep(2000);
		system("cls");


} while (n);


printf("��ӭ�´ι���");
}


//int main() {
//	printf("hello bit1\n");
//	goto again;
//	printf("hello bit2\n");
//again:
//	printf("hello bit3\n");
//
//	return 0;
//}


int main() {
	//shut down -s -t 60
	char str[20]="";
	system("shutdown -s -t 60");
again:
	printf("��ע�⣺��ĵ��Խ���1�����ڹػ� ������������� ����ȡ���ػ�\n������:>");
	scanf("%s", str);
	if (strcmp(str, "������") == 0)
	{
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}