#include<stdio.h>

//int main() {
//	//char* my_strcpy(char* dest, const char * src);
////дһ������ָ�� pf �ܹ�ָ��my_strcpy
//	//char*(*pf)(char*,const char*)
//	//дһ������ָ������pfarr,�ܹ����4��my_strcpy�����ĵ�ַ
//	//char*(*pfarr[4])(char*,const char*)
//
//}

//������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("************************\n");
//	printf("***  1.Add      2.Sub **\n");
//	printf("***  3.mul      4.Div **\n");
//	printf("***       0.exit      **\n");
//	printf("************************\n");
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�����˳��������Ժ�....");
//			Sleep(1000);
//			break;
//		case 1:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			Add(x, y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//
//			break;
//		case 3:
//			Mul(x, y);
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//
//			break;
//		case 4:
//			Div(x, y);
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//
//			break;
//		default:
//			printf("�����з��������ڴ�\n");
//		}
//	} while (input);
//}
//
//


//���߶ԱȺ���Ϊת�Ʊ�
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
////���
//int Sox(int x, int y)
//{
//	return x ^ y;
//}
//void menu()
//{
//	printf("************************\n");
//	printf("***  1.Add      2.Sub **\n");
//	printf("***  3.mul      4.Div **\n");
//	printf("***  0.exit     5.Sox **\n");
//	printf("************************\n");
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	menu();
//	int(*Pfarr[])(x, y) = { 0,Add,Sub,Mul,Div,Sox };
//
//	do {
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("����������������");
//			scanf("%d%d", &x, &y);
//			int ret = Pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	} while (input);
//}

//�ص�����
//ͨ������ָ����õĺ���
//������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}int Mul(int x, int y)
//{
//	return x * y;
//}int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("************************\n");
//	printf("***  1.Add      2.Sub **\n");
//	printf("***  3.mul      4.Div **\n");
//	printf("***       0.exit      **\n");
//	printf("************************\n");
//}
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�����˳��������Ժ�....");
//			Sleep(1000);
//			break;
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		default:
//			printf("�����з��������ڴ�\n");
//		}
//	} while (input);
//}

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

//����ָ������ָ��
//int (*(*p)[])(int ,int)
//int add(int x, int y)
//{
//
//}
//
//int main()
//{
//	int arr[] = { 0 };//����
//	int* p = &arr;//ȡ�������ַ����ָ��p
//
//	int(*pf)(int, int);//����ָ��
//	int (*pf[4])(int, int) = add;//����ָ������
//	int (*(*ppf)[4])(int, int) = &pf;
//	//ppf����*�����һ��ָ�룬������������[]��ϣ��γ�ָ������
//	//ָ��ָ���������4��Ԫ�ء�
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ��int(*)(int ,int)
//
//	return 0;
//}




//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//ָ������
//	int* arr[10] = { 0 };
//	// ����ָ��
//	int* (*pa)[10] = &arr;
//	//����ָ��
//	int(*pfa)(int, int) = &Add;//Add
//	//��������
//	/*int a=(*pfa)(1, 2);
//	//int a=pfa(1, 2);
//	printf("%d", a);
//	int b=pfa(1, 2);
//	printf("%d", b);*/
	//����ָ�������
	//int(*pdfa[10])(int, int);
	//ָ����ָ�������ָ��
	//int(*(*ppfa)[10])(int, int) = &pdfa;
//}

//int bubble_sort(int* arr, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",40} };
//	float f[] = { 9.0,8.0,7.0,6.0,5.0 };
//	//bubble_sort(arr, sz);//ֻ��������������
//	//bubble_sort(f,sz);//�������������͵�����
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////ȱ�㣺ֻ���ŵ�һ���͵�����


//void* ����
//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;//�������
//	//char ch = 'w';
//	void* p = &a;
//	//p = &ch;
//	*p = 0;//����
//	p++; ����
//}
//
//void* ����ָ����Խ����������͵ĵ�ַ
//void* ����ָ�벻���Խ��н����ò���
//void* ����ָ�벻���Խ�������
//��Ϊvoid* �����ǿգ��޷�ȷ�����ʶ����ֽ�



int cmp_int(const void* e1, void* e2)
{
	// �Ƚ���������ֵ
	return *(int*)e1 - *(int*)e2;//��Ϊe1,e2Ϊvoid��������Ҫǿ��ת��
}
int cmp_f(const void* e1, void* e2)
{

	//	return *(float*)e1 - *(float*)e2;//����־���
	//return ((int)(*(float*)e1 - *(float*)e2));//�����Ͳ��� ����������
	//�����Ҫ���� �ͽ�e1��e2��λ�õ���
	if (*(float*)e1 - *(float*)e2 > 0)
		return 1;
	else if (*(float*)e1 == *(float*)e2)
		return 0;
	else
	{
		return -1;
	}
}
struct Stu
{
	char name[20];
	int age;
};
//�ṹ��ʹ������Ƚ�
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
//�ṹ��ʹ�����ƱȽ�
int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
/*�Ƚ����־��ǱȽ��ַ���
 *�ַ����Ƚϲ���ֱ����><=��Ӧ����strcmp()���� */

void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	float f[] = { 9.0,8.0,7.0,6.0,5.0 };
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}
void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_f);
	for (int i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}

void test3()
{
	struct Stu s[3] = { {"zhangsan",10},{"lisi",200},{"wangwu",50} };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}
void test4()
{

	struct Stu s[3] = { {"zhangsan",10},{"lisi",200},{"wangwu",50} };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	/*       * ��һ���������������������Ԫ�ص�ַ
			 * �ڶ��������������������Ԫ�ظ���
			 * �����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
			 * ���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����õĺ�����ַ - �������ʹ�����Լ�ʵ��
							����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
							*/

}
int main()
{
	test1();
	test2();
	test3();//�ṹ������Ƚ�
	test4();
	return 0;
}



//��һ���������������������Ԫ�ص�ַ
//
//�ڶ��������������������Ԫ�ظ���
//
//�����������������������ÿ��Ԫ�صĴ�С - ��λ���ֽ�
//
//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����õĺ�����ַ - �������ʹ�����Լ�ʵ��, ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ