#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//�ַ�������
#include<string.h>
#include<assert.h>

//�����ַ���
//void  reverse(char*arr) {
//	assert(arr);
//	int left = 0;
//	char tmp = 0;
//	int right = strlen(arr)-1;
//	
//
//	while (right>left)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	int sz = 0;
//	char arr[256] = { 0 };
//	gets();//��ȡһ�д�ŵ�buff����ȥ buffҲ�������뻺����
//	scanf("%s", arr);
//
//	reverse(arr);
//	printf("%s", arr);
//}

//Sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�����a��һ������
	//���磺2+22+222+2222+22222
//int main()
//{
//	
//	int n = 0;
//	int a = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	int tmp = a;
//	while (n--)
//	{
//		sum = sum + tmp;
//		tmp = (tmp * 10) + a;
//	}
//	printf("%d", sum);
//}

//ˮ�ɻ���
//���� 153=1^3+5^3+3^3   //0-100000���е�ˮ�ɻ��� Ҳ����������
//#include<math.h>
//int main() {
//	int i = 0;
//	for (i = 0; i <= 100000; i++) {
//		//�ж��Ƿ�Ϊˮ�ɻ���
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		while (tmp/=10)
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp) {
//			sum += (int)pow(tmp % 10, n);//pow���ص���double����
//				tmp /= 10;
//		}
//		if (i == sum) {
//			printf("%d��ˮ�ɻ���\n", i);
//		}
//	}
//}


/*
  	   *     1
	  ***    2  3
     *****   3  5
    *******   4  7
   *********   5  9
  ***********    6  11
 *************     7  13




//7�� 6���հ�  ��һ��һ��ÿһ����������*  2*i+1
//������һ���� ��һ�д�ӡ�����հף��ڶ��д�ӡ���n-1-i


 ***********  11                                //��ӡn-1
  *********   9        �ո���1����6��  n-1
   *******    7      *  ��һ��ʮһ55
	*****     5         �ڶ���9
	 ***      3
	  *       1           */
//int main()
//{
//	
//	int n = 7;//����
//
//	int i = 0;
//	int j = 0;
//	printf("����������Ҫ��ӡ�Ĳ���:>");
//	scanf("%d", &n);
//	//��ӡ�ϰ벿��
//	 //�ո� 6 5 4��������1 0
//	for (i = 1; i <=n; i++) {
//		//�ȴ�ӡ�ո�
//		for ( j = 1; j <= n-i; j++)
//		{
//			printf(" ");
//		}
//
//		//��ӡ*
//		for (j = 1; j <= 2*i-1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	//��ӡ�°벿��
//	 //�ո� 1 2 3.����������5 6
//
//	for (i = 1; i < n; i++) {
//		for (j = 1; j <= i; j++) {
//			printf(" ");
//		}
//		for (j = 1; j <= (2 * (n - i)) - 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//
//	}
//
//}


//����ˮ 1ƿ��ˮ1Ԫ 2����ƿ���Ի�һƿ��ˮ����20Ԫ �����Ժȶ�����ˮ
//int main() {
//	int money = 0;
//	int empty = 0;
//	int total = 0;
//	printf("������Ҫ������Ǯ:>");
//	scanf("%d", &money);
//	//���
//	empty = money;
//	total = empty;
//	while (empty > 1) {
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//}

//����:
//int main() {
//	int money = 0;
//	
//	int total = 0;
//	printf("������Ҫ������Ǯ:>");
//	scanf("%d", &money);
//	if(money<1)
//		printf("����");
//	else {
//		printf("һ������%dƿ", 2 * money - 1);
//	}
//}



//������ż��λ��
//������ǰ��ż���ں�

void move(int* arr,int sz) {
	int left = 0;
	int tmp = 0;
	int right = sz-1;
	while (left < right) {
		//��ż��
		while ((left <right) && (arr[left] % 2 == 1)) {
			left++;
		}
		//������
		while ((left < right) && (arr[right] % 2 == 0)) {
			right--;
		}
		if (left < right) {
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;

}


