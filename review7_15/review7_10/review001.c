#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int num1 = 200;//ȫ�ֱ���  ���壺�ڴ����{}֮��ı���


int main() {
	//c�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��

	//int a = 0;
	//scanf("%d", &a);
	int math1 = 0;
	int math2 = 0;
	char ch = 'A';
	int d = 20;
	float b = 5.0;
	double p = 3.14;
	//���� 20 ���� 86
	short age = 20;//���ڴ�����2���ֽ�=16��bitλ�������20
	float weight = 86.5;//���ڴ������ĸ��ֽڣ����С��
	int num2 = 30;//�ֲ����� �����ڴ����{}�ڵı���
	int num1 = 10;
	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ ���ײ�����ᣬ����bug
	//���ֲ�������ȫ�ֱ���������ͬʱ �ֲ���������
	extern int g_val;
	



	printf("���C����");

	printf("char �ַ�����\n");

	printf("%c\n", ch);
	printf("%d\n", ch);
	printf("\nint ����");

	printf("ʮ������� %d\n", d);
	printf("�˽������ %o\n", d);
	printf("ʮ��������� %x\n", d);
	printf("float ������\n");

	printf("������%f\n", b);
	printf("double ˫������\n");
	
	printf("˫����%lf\n", p);

	//����ռ�
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	//C���Ա�׼�涨
		//size(long)>=size(int)



	printf("����%.2f,���䣺%d\n", weight, age);
	printf("ȫ�ֱ���num1 %d, �ֲ�����num2 %d\n", num1, num2);
	
	printf("num1 %d\n", num1);

	//����2�����ݵĺ�

	printf("������������:>");
	scanf("%d%d",&math1,&math2);
	printf("%d", math1 + math2);

	printf("�ⲿ��������");
	printf("���� extern  %d", g_val);
	return 0;
}
//��������
//int  ���� 
//short ������
//long  ������
//long long ��������
//float ������
//double ˫���ȸ�����
//char �ַ���
