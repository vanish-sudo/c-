#include<stdio.h>
#include<string.h>
#include<float.h>
#include<limits.h>
//int main() {
//	int i = -20;
////10000000000000000000000000010100  Դ��
////11111111111111111111111111101011  ����
////11111111111111111111111111101100  ����
//	unsigned int j = 10;
////00000000000000000000000000001010
////11111111111111111111111111110110 a+j ����
////11111111111111111111111111110101     ����
////10000000000000000000000000001010  -10
//  	printf("%d\n",i+j);
//	return 0;
//
//}

//int main() {
//	unsigned int i;
//	//i��Զ���Ǵ��ڵ���0��������Ϊi ���޷�������
//	for (i = 9; i >= 0; i--) {
//		printf("%u\n", i);
//	}
//}
//int main() {
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++) {
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	//-1 -2.......-127 -128 127 126.....3 2 1 0   strlen ��Ѱ��\0������ֻ��255
//}
// 
//unsigned char i = 0;
//int main() {
//	for (i = 0; i <= 255; i++) {
//		printf("hello world\n");
//	}
//	return 0;
//}

//�����ѭ��
//ԭ����Ϊunsigned char �ķ�Χֻ��0--255 ��ѭ��������255+1=0

//�����͵Ĵ洢
//int  
//char 
//short
//long ֮��ķ�Χ��ѯ ʹ��limits.hͷ�ļ�
// double float ȡֵ��Χ��ѯ ʹ��float.hͷ�ļ�
//int main() {
//	double d = 1E10;
//	printf("%lf", d);
//}
int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n��ֵΪ%d\n", n);
	printf("*pFloat��ֵΪ%f\n", *pFloat);

	*pFloat = 9.0;
	printf("n��ֵΪ%d\n", n);
	printf("*pFloat��ֵΪ%f\n", *pFloat);
	return 0;

}