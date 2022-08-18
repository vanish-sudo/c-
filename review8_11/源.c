#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#include<string.h>
//int main() {
//	char arr[] = "abcdf";
// 错误示范：
//	//char arr[] = { 'a','b','c','d' };//随机值 找到'/0'才停止
//	int len = strlen(arr);
//	printf("%d ", len);
//}

//自制strlen有三种方法
//1.计数器的方法
//2.递归
//3.指针-指针   （首地址-尾地址）因为char只有1个字节

//#include<assert.h>
//int my_strlen(const char* arr) {
//	int count = 0;
//	assert(arr);
//	while (*arr != '\0') {
//		arr++;
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	char arr[] = "abcdf";
//	//char arr[] = { 'a','b','c','d' };//随机值 找到'/0'才停止
//	int len = my_strlen(arr);
//	
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe");
//	}
//	else
//		printf("haha");
//	printf("%d ", len);
//}
////打印结果是hehe 由于strlen返回的是无符号数 
////所以当两个无符号数相减时任然是无符号数
//自制my_strcpy
//strcpy(char*destination，const char*source)
//#include<string.h>
//int main(){
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	//strcpy()
//	printf("arr1 %s\n", arr1);
//	printf("arr2 %s\n", arr2);
//	strcpy(arr1, arr2);
//
//	printf("arr1 %s\n", arr1);
//	printf("arr2 %s\n", arr2);
//
//}

//自制strcat 
//字符串拼接 在目标字符串的\0处拼接上另一个字符串
//在使用库函数strcat时必须保证目标字符串有足够的空间

//#include<string.h>
//#include<assert.h>
//
//char*my_strcat(char* arr1, char* arr2) {
//	assert(arr1 && arr2);
//	//找到目标字符串的\0
//	char* ret = arr1;
//	//adcfg
//	while (*arr1!='\0') {
//		arr1++;
//	}
//	while (*arr2) {
//		*arr1++ = *arr2++;
//	}
//	return ret;
//}
//int main() {
//	char arr1[30] = "adcfg";//
//	char arr2[] = "adcfg";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//}

//自制strcmp
//strcmp不是比较每个字符串的长度
//而是比较每个字符串中字母的大小
//例如 "abcde"<"bbcde"
// 就是拿第一个字符串a与第二个字符串b比较
// 如果相同则比较下一个字符
//如果字符串1大于字符串2则返回大于0的数字
//如果小于则返回小于0的数字
//如果等于则返回0

//#include<string.h>
//#include<assert.h>
//
//int my_strcmp(const char* str1, const char* str2) {
//	while (*str1 == *str2) {
//		if (!*str1)
//			return 0;
//
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main() {
//	char arr1[] = "abcde";
//	char arr2[] = "abcde";
//	//printf("%d ", strcmp(arr1, arr2));
//	printf("%d ", my_strcmp(arr1, arr2));
//
//}


//自制strncpy
//strncpy相比strcpy多了一个参数num（简称n）
//这个n是用来控制复制多少的
//且从首个开始复制 如果说num的数值大于源字符串的长度
//那么在目标字符串后面补0，直到num个
//#include<string.h>
//#include<assert.h>

//char* my_strncpy(char* str1, const char* str2, unsigned num) {
//	assert(str1 && str2);
//	char* ret = str1;
//	for (num; num > 0; num--) {
//		if (*str2 == '\0')
//			*str1 = '\0';
//		else {
//			*str1 = *str2;
//			str2++;
//		}
//		str1++;
//	}
//	return ret;
//}
//
//int main() {
//	char arr1[] = "abcde";
//	char arr2[] = "cd";
//	//printf("%s", strncpy(arr1, arr2, 5));
//	printf("%s", my_strncpy(arr1, arr2,6));
//}


//strncat
//strnccat相比strcat多了一个参数num（简称n）
// 这个n是用来控制拼接多少个字符的
// 如果说源字符串的长度小于n,则将源字符串弄完后立即停止
//char* my_strncat()

//#include<string.h>
//#include<assert.h>

//char* my_strncat(char* str1, const char* str2, unsigned num) {
//	assert(str1 && str2);
//	char* ret= str1;
//	while (*str1) {
//		str1++;
//	}
//	while (num--) {
//		if (*str2=='\0')
//			return ret;
//		*str1++ = *str2++;
//		
//	}
//	return ret;
//}
//
//int main() {
//	char arr1[30] = "abcde";
//	char arr2[] = "cd";
//	//printf("%s", strncat(arr1, arr2, 6));
//	printf("%s", my_strncat(arr1, arr2,6));
//}


//自制my_strncmp
//strncmp相比strcmp多了一个参数num（简称n）
// 这个n是用来控制比较几对字符的

#include<string.h>
#include<assert.h>

int my_strncmp(const char* str1, const char* str2,unsigned num) {
    while (num--) {
        if (*str1 == *str2) {
            str1++;
            str2++;
            //不能写在判断语句中,否则有问题
        }
        else
           return  *str1 - *str2;
    }
    return 0;
}

int main()
{
    char arr[] = "abcdegf";
    char arr1[] = "abceef";
    printf("%d ", my_strncmp(arr, arr1, 6));
    printf("%d ", strncmp(arr, arr1, 6));
    return 0;
}
