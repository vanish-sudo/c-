#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main() {
//	int a = 10;//������4���ֽڿռ�
//	int* p = &a;//p��һ������ ָ�����
//	double d = 3.14;
//	double* pd = &d;
//	printf("%lf\n", *pd); //*�����ò����� ���߼�ӷ��ʲ�����
//	printf("%d\n", sizeof(pd));/*32λƽ̨��4 64λƽ̨��8*/
//	printf("%p\n",& a);
//	printf("%d\n", *p); //*�����ò����� ���߼�ӷ��ʲ�����
//	printf("%d\n", sizeof(int*));/*32λƽ̨��4 64λƽ̨��8*/
//	printf("%d\n", sizeof(short*));/*32λƽ̨��4 64λƽ̨��8*/
//	printf("%d\n", sizeof(char*));/*32λƽ̨��4 64λƽ̨��8*/
//	printf("%d\n", sizeof(float*));/*32λƽ̨��4 64λƽ̨��8*/
//	printf("%d\n", sizeof(double*));/*32λƽ̨��4 64λƽ̨��8*/
//
//	return 0;
//}


//�ṹ��

//����˻�����ʱ  �����Ǹ��Ӷ���
//����-���-����-���֤��
//����--����--������--����--���
//���Ӷ���---�ṹ�� �����Լ����������һ������
//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main() {
//	struct Book b1 = { "c���Գ������",55 };
//	struct Book* pd = &b1;
//	//b1.name = "c++";//������ֱ�Ӹ� ��Ϊname��������  �������ǵ�ַ ����ֱ�Ӹ���
//	strcpy(b1.name,"c++");//����ʹ���ַ�������  �⺯�� �� string.h
//	printf("%s\n", b1.name);
//	printf("%d\n", b1.price);
//	b1.price = 12;
//	printf("%d\n", b1.price);
//	//����pd��ӡ���ҵ������ͼ۸�
//	//�ṹ�����.��Ա
//	//	�ṹ�����->��Ա
//	printf("%s\n", (*pd).name);
//	printf("%s\n",pd->name);
//	return 0;
//}


//��֧����ѭ��

//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else if (18 <= age && age <= 28)
//		printf("����\n");
//	else if (age >= 28 && &age < 50)
//		printf("׳��");
//	else if (age >= 50 && &age < 90)
//		printf("����");
//	else
//		printf("�ѳ���\n");
//}



////����else
////else�������������δƥ���else����ƥ��
//int main() {
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//			printf("haha\n");
//	return 0;
//}
//



//�ж�һ�����Ƿ�λ����
//���1--100֮�������
int Odd(int x) {
	if (x % 2 == 1)
		return 1;
	return 0;
}

//int main() {
//	int num = 0;
//	int isOdd = 0;
//	printf("������һ������:>\n");
//	scanf("%d",&num);
//	isOdd=Odd(num);
//	if (isOdd == 1)
//		printf("%d������\n", num);
//	else
//		printf("%d��������\n", num);
//	return 0;
//}

//int main() {
//	int isOdd = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		isOdd = Odd(i);
//		if (isOdd == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}


//int main() {
//		int day = 0;
//	printf("������һ������:>\n");
//	scanf("%d", &day);
//		//switch();�����б���Ϊ����
//	//case ������������γ������ʽ  �ַ�Ҳ�����γ��� 
//	switch (day) {
//	case 1:
//		printf("����һ\n");
//		break;
//	case 1:
//		printf("���ڶ�\n");
//		break;
//	case 2:
//		printf("������\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//	};
//	return 0;
//}

//C����0Ϊ�� ����Ϊ�� ����ҲΪ��
//int main() {
//	int i = 1;
//	//���ж���ִ�� ���ܲ�ִ��
//	while (i <= 5) {
//		if (i == 5)
//			continue;  //��ǰ�����˴�ѭ�������´�
//		printf("%d", i);
//		i++;
//	};
//	i = 1;
//	printf("\n");
//	//��ִ�����ж� ����ִ��һ��
//	do {
//		printf("%d", i);
//		i++;
//	} while (i <0);
//}

int main()
{
	int ch = 0;
	putchar(ch);
	//getchar �������Ctrl+z �ͻ��˳�ѭ��
	//EOF -->end of file --��-1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
		
	}
}
