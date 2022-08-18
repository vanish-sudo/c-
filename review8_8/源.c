#define _CRT_SECURE_NO_WARNINGS 1


//第3题（编程题）
//题目名称：字符串左旋题目内容：实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA 
//ABCD左旋两个字符得到CDAB
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
//	int n = 2;//左旋几个
//	reverse(str,n);
//	printf("%s", str);
//}
//方法二
//三步旋转
//abcd  旋转两个字符
//即ab旋转   cd旋转   他们就会变成badc
//然后将这个在旋转，得到cdab
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
//	int n = 2;//左旋几个
//	reverse(str, n);
//	printf("%s", str);
//}

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA 返回1,
//给定s1 = abcd和s2 = ACBD, 返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
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
//	//1.在s1字符串中追加一个s1的字符串
//	//strcat(s1,s1)//无法停止 ，寻找不到'\0',只用于两个字符串
//	strncat(s1, s1, len1);//成功追加
//	//2.判断str2只想的字符串是否是str1指向的字符串的子串
//	//strstr//库函数 找子串的
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

//有一个数字矩阵，
//矩阵的每行从左到右是递增的，
//矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于o(N);


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
		printf("找到了，下标为%d %d", x, y);
	} 
}