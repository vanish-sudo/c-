#define _CRT_SECURE_NO_WARNINGS 1


//��3�⣨����⣩
//��Ŀ���ƣ��ַ���������Ŀ���ݣ�ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA 
//ABCD���������ַ��õ�CDAB
//#include<stdio.h>
//#include<string.h>
//
//void reverse(char*str,int n){
//	char arr =' ';
//	int sz = strlen(str);
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		int j = 0;
//		arr = *str;
//		for (; j < sz; j++) {
//			*(str+j) = *(str + j+1);
//		}
//		*(str + sz - 1) = arr;
//	}
//
//}
//int main() {
//	char str[] = "abcd";
//	int n = 2;//��������
//	reverse(str,n);
//	printf("%s", str);
//}
//������
//������ת
//abcd  ��ת�����ַ�
//��ab��ת   cd��ת   ���Ǿͻ���badc
//Ȼ���������ת���õ�cdab
//#include<stdio.h>
//#include<string.h>
// #include<assert.h>
//left_move(char* left, char* right) {
//	assert(left);
//	assert(right);
//	char arr = ' ';
//	while (left < right) {
//		arr = *left;
//		*left = *right;
//		*right = arr;
//		left++;
//		right--;
//	}
//}
//void reverse(char* str, int n) {
//	assert(str);
//	int len = strlen(str);
//	assert(n <=len);
//	left_move(str, str + n);
//	left_move(str + n + 1, str + len - 1);
//	left_move(str, str + len - 1);
//
//}
//int main() {
//	char str[] = "abcd";
//	int n = 2;//��������
//	reverse(str, n);
//	printf("%s", str);
//}

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA ����1,
//����s1 = abcd��s2 = ACBD, ����0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
//
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//left_move(char*str, int n) {
//		char arr =' ';
//	int sz = strlen(str);
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		int j = 0;
//		arr = *str;
//		for (; j < sz; j++) {
//			*(str+j) = *(str + j+1);
//		}
//		*(str + sz - 1) = arr;
//	}
//}
//int is_left_move(char* s1, char* s2) {
//	assert(s1);
//	assert(s2);
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	assert(len1==len2);
//	for (int i = 0; i < len1;i++) {
//		if (strcmp(s1, s2) == 0)
//			return 1;
//		left_move(s1,1);
//	}
//	return 0;
//}
//int main() {
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//	int ret=is_left_move(s1, s2);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no");
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int is_left_move(char* s1, char* s2) {
//	assert(s1);
//	assert(s2);
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//		return 0;
//	//1.��s1�ַ�����׷��һ��s1���ַ���
//	//strcat(s1,s1)//�޷�ֹͣ ��Ѱ�Ҳ���'\0',ֻ���������ַ���
//	strncat(s1, s1, len1);//�ɹ�׷��
//	//2.�ж�str2ֻ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr//�⺯�� ���Ӵ���
//	char* ret = strstr(s1, s2);
//	if (ret ==NULL) {
//		return 0;
//	}
//	else {
//		return 1;
//	}
//}
//int main() {
//	char s1[30] = "AABCD";
//	char s2[] = "BCDAA";
//	int ret = is_left_move(s1, s2);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no");
//	return 0;
//}

//��һ�����־���
//�����ÿ�д������ǵ����ģ�
//������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��o(N);


//1 2 3
//4 5 6
//7 8 9

#include<stdio.h>
int find(int arr[3][3],int k,int* px,int* py) {
	int x = 0; 
	int y = (*py) - 1;
	while (x <=(*px)-1&&y>=0)
	if (arr[x][y]<7) {
		x++;
	}
	else if (arr[x][y] > 7) {
		y--;
	}
	else {
		*py = y;
		*px = x;
		return 1;
	}
	return 0;
}
int main() {
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int x = 3;
	int y = 3;
	int ret=find(arr,7,&x,&y);
	if (ret==1) {
		printf("�ҵ��ˣ��±�Ϊ%d %d", x, y);
	} 
}