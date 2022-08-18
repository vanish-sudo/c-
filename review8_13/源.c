#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//模拟实现strstr  在字符串中找字串
//如果找到了返回字串起始地址,如果没有找到返回NULL

//#include<assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* s1 = (char*)str1;
//	char* s2 = (char*)str2;
//	char* curr = (char*)str1;
//	if (!*str2)
//		return NULL;//若查找的字串为空 则返回NULL
//	while (*curr) {
//		s1 = curr;
//		s2 = (char*)str2;
//		while(*s1 == *s2&&*s1&&*s2) {
//			s1++;
//			s2++;
//		}
//		if (!*s2) {
//			return (char*)curr;
//		}
//		curr++;
//	}
//	return NULL;
//}
//int main() {
//	char str1[] = "acvfet";//字符串常量
//	char str2[] = "fet";
//	char* ret = my_strstr(str1, str2);
//	if (ret == NULL)
//		printf("没找到");
//	else
//		printf("%s\n", ret);
//
//}


//strtok 分解字符串 详情看有道云笔记
//int main()
//{
//	char arr[] = "1561150107@qq.com";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* p = "@.";
//
//	for (char* ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strerror
#include<errno.h>
int main()
{

	//char* str=strerror(1);
	//printf("%s\n", str);
	//str = strerror(0);
	//printf("%s\n", str);
	//str = strerror(2);
	//printf("%s\n", str);
	//errno是一个全局错误码的变量
	//当c语言的库函数再执行过程中，发生了错误，就会把对应的错误码赋值到errno中
	FILE* pf = fopen("test.txtt", "r");
	if (pf == NULL)
		printf("%s", strerror(errno));
	else
		printf("打开文件成功\n");
}

//errno需要引头文件errno.h


//以下详情看有道云笔记
//int tolower  转小写
//int toupper 转大写
//以上函数头文件为#include<ctype.h>