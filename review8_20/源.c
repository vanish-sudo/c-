#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ⲿ��������
//extern int Add(int x, int y);
//
//int main() {
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++) {
//		 printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int c = Add(a, b);
//	printf("c=%d ", c);
//	getchar();
//}
//Ԥ����
//#include 
//ͷ�ļ��İ���   Ԥ���루Ԥ����
//ɾ��ע�ͣ�ʹ�ÿո��滻ע�ͣ�       Ԥ���루Ԥ����
//#define �滻
//Ԥ������ʵ�����ı�����  

//����
//��C���Դ��뷭��ɻ�����
//�﷨����
//�ʷ�����
//�������
//���Ż��� 

//���
//�ѻ�����ת�����˶�����ָ��
//�г̷��ű����������ͺ�����ַ��

//����
//�ϲ��α�
//���ű�ĺϲ����ض�λ

//Ԥ�������
//int main() {
//	//__FILE__   ���б����Դ�ļ�
//	printf("%s\n", __FILE__); //����·��+�ļ�����
//	//__LINE__ ����
//	printf("%d\n", __LINE__); //����
//	//__DATE__ ����
//	printf("%s", __DATE__);
//	//__TIME__ ʱ��
//	printf("%s", __TIME__);
//
//	//д��־�ļ�
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("DATE.txt", "w");
//	for (i = 0; i < 10; i++) {
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%d ", arr[i]);
//	}
//	//__FUNCTION__    ���ں����ĺ�����
//	printf("%s", __FUNCTION__);
//
//	//__STDC__  �����������ѭANSI C���ϸ���ѭC���Ա�׼�� ��ֵΪ1������δ����
//	//printf("%d ", __STDC__); vsδ���� gcc������
//}


//#��ͷ
//Ԥ����ָ��
//#define
//#include
//#pragma pack(4)
//#pragma 
//#endif
//#if 
//#line
//#ifdef 


//#define MAX 100
//#define STR "hehe"
//#define reg register
//#define do_forever for(;;)
//int main() {
//	reg int a = 0;//�ȼ��� register int a=0;
//
//	int max = MAX;
//	printf("%d \n", max);
//	printf("%s \n", STR);
//	//���ӷֺ� ִ����һ�д��벢����ѭ��
//	do_forever
//		printf("%d \n", max);
//	//���Ϸֺ�
//	do_forever;//��ѭ��
//
//    return 0;
//}

//#define MAX 100
//#define MAX 100;
//�����Ƿ���Ҫ�ӷֺ�

//#define MAX 100;
//int main() {
//	int a = MAX;//�ȼ��� int a=100;;Ҳ�����������
//	printf("%d", a);
//	//printf("%d ", MAX);//�ȼ���printf("%d ",100;); ����   �﷨����                       
//}

//���鲻Ҫ����; �������׵�������

//#define �����
//#define���ư�����һ���涨 ����Ѳ����滻���ı��У�����ʵ��ͨ����Ϊ������

//�����Ǻ��������ʽ
//#define name(parament-list) stuff ����parament-list ��һ���ɶ��Ÿ����ķ��ű�
//���ǿ��ܳ�����stuff�� ע�⣺�����б������name���� �������֮�����κοհ״��� 
//�����б�ͻᱻ����Ϊstuff��һ����

//#define SQUARE(X) X*X
//int main() {
//	int ret = SQUARE(5);//�ȼ��� int ret=x*x ����x=5
//	printf("%d ", ret);
//	int ret1 = SQUARE(5 + 1);//�ȼ��� int ret1=5+1*5+1
//	printf("%d ", ret1);
//	return 0;
//}

//#define SQUARE(X) (X)*(X)
//int main() {
//	int ret1 = SQUARE(5 + 1);//�ȼ��� int ret1=(5+1)*(5+1)
//	printf("%d ", ret1);
//	return 0;
//} 

//#define DOUBLE(x) x+x
//int main() {
//	int a = 5;
//	int ret = 10 * DOUBLE(a);//�ȼ��� 10*5+5
//	printf("%d\n", ret); 
//}

//#define MAX 100
//#define DOUBLE(x) x+x
//int main() {
//	int a = 5;
//	int ret = 10 * DOUBLE(MAX + MAX);//�ȼ���10*100+100+100+100
//	printf("%d\n", ret); 
//}

//#define MAX 100
//#define DOUBLE(x) (x)+(x)
//int main() {
//	int a = 5;
//	int ret = 10 * DOUBLE(MAX + MAX);//�ȼ���10*(100+100)+(100+100)
//	printf("%d\n", ret);
//}

//void print(int a) {
//	printf("the value of a is %d\n", a);
//}
//
//int main() {
//	int a = 10;
//	int b = 10;
//	printf("the value of a is %d\n", a);
//	print(a);
//	print(b);
//}

//�����޷����� printf("the value of a is %d\n", a); ��ӡa��ʾa ��ӡb��ʾb

//#define PRINT(x) printf("the value of "#x" is %d\n",x)
//int main() {
//	int a = 10;
//	int b = 10;
//	printf("hello world\n");
//	printf("hello"" world\n");
//	printf("hel""lo"" world\n");
//	PRINT(a);//�ȼ���printf("the value of ""a"" is %d\n",a)
//	PRINT(b);//�ȼ���printf("the value of ""b"" is %d\n",b)
//}
////#�ǰ�һ�����������ַ���
////## ���԰�λ�������ߵķ��źϳ�һ������ ������궨��ӷ�����ı�Ƭ�δ�����ʶ��
//
//#define CAT(X,Y) X##Y
//int main() {
//	int class84 = 2019;
//	printf("%d\n", CAT(class, 84));
//	//������ִ�в��� 
//	//printf("%d\n", class##84);
//	//printf("%d\n", class84);
//}

//#define MAX(X,Y) (X)>(Y)?(X):(Y)
//int main() {
//	int a = 10;
//	int b = 11;
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	max = MAX(a++, b++);//���ڲ������и������� Ҳ����a,b���ı�
//	                    //�ȼ��ڣ�a++��>(b++)?(a++):(b++)
//	printf("%d\n", max);
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//} 

//����ŵ�
//int Max(int a, int b) {
//	return a > b ? a : b;
//}
//float Max2(float a, float b) {
//	return a > b ? a : b;
//}
//#define MAX(a,b) (a)>(b)?(a):(b)
//int main() {
//	int a = 10;
//	int b = 20;
//	float c = 20;
//	float d = 20;
//	int max = Max(a, b);
//	printf("%d", max);
//	 max = MAX(a, b);
//	printf("%d", max);
//
//	//�����ڵ��õ�ʱ����к������úͷ��صĿ���
//	 max = Max2(c, d);
//	printf("%d", max);
//	//����Ԥ����׶�������滻 �Ⱥ���Ч�ʸ�һ��
//	//û�к����ĵ��úͷ��صĿ���
//	max = MAX(c, d);
//	printf("%d", max);
//}


//���ȱ��
//ÿ��ʹ�ú��ʱ��,һ�ݺ궨��Ĵ��뽫���뵽������ ���Ǻ�Ƚ϶� 
//������ܴ�������ӳ��򳤶� 
//#define TEST(x,y) printf("test\n");
//int main() {
//
//	TEST();
//	TEST();
//	TEST();
//
//	return 0;
//} 



//����Դ�����
//#define SIZEOF(type) sizeof(type)
//int main() {
//	int ret = SIZEOF(int);
//	 //ret = sizeof(int);
//	printf("%d ", ret);
//}

//#define MALLOC(num,type) (type*)malloc(num * sizeof(type))
//int main() {
//	int* p = (int*)malloc(10 * sizeof(int));
//	int* pf = MALLOC(10, int);
//	//���ϵȼ�
//	return 0;
//}

//#undef ����ָ�������Ƴ�һ���궨��

//#define MAX 100
//int main() {
//
//	printf("%d", MAX);//��ִ��
//#undef MAX
//	printf("%d", MAX);//����ִ��
//
//	return 0;
//}

//�����ж���
//��bite�μ� �ƺ�vs������ gcc����

//��������
//#define DEBUG 0
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		arr[i] = 0;
//#ifdef DEBUG  //���û�ж���DEBUG ��ִ��������� ��������ִ��
//		printf("%d ", arr[i]);
//
//#endif // DEBUG
//#ifndef DEBUG
//		printf("%d ", arr[i]);//���û�ж���DEBUG ��ִ��������� �����˲���ִ��
//#endif // !DEBUG
//
//
//	}
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		arr[i] = 0;
//#if 1  //#if������ʽΪ��,��ִ��#if ��#endif ���������(#if��#endif��Ҫһ��һ�Գ���)
//		printf("%d ", arr[i]);
//#endif
//	}
//}

//���֧����������
//int main() {
//#if 1==2
//	printf("hehe");
//#elif 1==1
//	printf("haha");
//#else
//	printf("�ٺ�");
//#endif
//	return 0;
//}

//#define DEBUG 0
//int main() {
//#if defined(DEBUG) //���û�ж���DEBUG ��ִ��������� ��������ִ��
//	printf("hehe");
//#endif
//#if !defined(DEBUG) //���û�ж���DEBUG ��ִ��������� ��������ִ��
	//printf("haha");
//#endif
	//return 0;
//}


//#include"Դ.h"
//int main() {
//	printf("%d", Add(10, 20));
//	printf("hehe\n");
//	return 0;
//}


//��ʹ�ÿ⺯�������ǿ��ܻ���������ͬ�Ŀ�
//������ʹ���ڱ�������д�������ظ��Ĵ��� 
//������ǿ�����ͷ�ļ������������ã���ͷ�ļ���
//#include"Դ.h"
//#include"Դ.h"
//#include"Դ.h"
//int main() {
//	printf("%d", Add(10, 20));
//	printf("hehe\n");
//	return 0;
//}

//offsetof
//offsetof��һ���� ͷ�ļ���stddef
//offsetof�����ƫ���� ��һ������������ �ڶ��������ǳ�Ա��
//#include<stddef.h>
struct S {
	char c1;
	int a;
	char c2;
};
//
//int main() {
//	//struct S s;
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}

//����my_offsetof
//��ʼ��ַ��Ŀ���ַ����ƫ����
//����offsetof���Բ�����������ƫ����
//Ҳ����˵���ǲ���֪����ʼ��ַ
//���ǿ��Լ�����ʼ��ַ��0

#define MY_OFFSETOF(struct_name,rember_name) (int)&(((struct_name*)0)->rember_name)
int main() {
		printf("%d\n", MY_OFFSETOF(struct S, c1));
	printf("%d\n", MY_OFFSETOF(struct S, a));
	printf("%d\n", MY_OFFSETOF(struct S, c2));
	return 0;
}