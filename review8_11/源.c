#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//#include<string.h>
//int main() {
//	char arr[] = "abcdf";
// ����ʾ����
//	//char arr[] = { 'a','b','c','d' };//���ֵ �ҵ�'/0'��ֹͣ
//	int len = strlen(arr);
//	printf("%d ", len);
//}

//����strlen�����ַ���
//1.�������ķ���
//2.�ݹ�
//3.ָ��-ָ��   ���׵�ַ-β��ַ����Ϊcharֻ��1���ֽ�

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
//	//char arr[] = { 'a','b','c','d' };//���ֵ �ҵ�'/0'��ֹͣ
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
////��ӡ�����hehe ����strlen���ص����޷����� 
////���Ե������޷��������ʱ��Ȼ���޷�����
//����my_strcpy
//strcpy(char*destination��const char*source)
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

//����strcat 
//�ַ���ƴ�� ��Ŀ���ַ�����\0��ƴ������һ���ַ���
//��ʹ�ÿ⺯��strcatʱ���뱣֤Ŀ���ַ������㹻�Ŀռ�

//#include<string.h>
//#include<assert.h>
//
//char*my_strcat(char* arr1, char* arr2) {
//	assert(arr1 && arr2);
//	//�ҵ�Ŀ���ַ�����\0
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

//����strcmp
//strcmp���ǱȽ�ÿ���ַ����ĳ���
//���ǱȽ�ÿ���ַ�������ĸ�Ĵ�С
//���� "abcde"<"bbcde"
// �����õ�һ���ַ���a��ڶ����ַ���b�Ƚ�
// �����ͬ��Ƚ���һ���ַ�
//����ַ���1�����ַ���2�򷵻ش���0������
//���С���򷵻�С��0������
//��������򷵻�0

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


//����strncpy
//strncpy���strcpy����һ������num�����n��
//���n���������Ƹ��ƶ��ٵ�
//�Ҵ��׸���ʼ���� ���˵num����ֵ����Դ�ַ����ĳ���
//��ô��Ŀ���ַ������油0��ֱ��num��
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
//strnccat���strcat����һ������num�����n��
// ���n����������ƴ�Ӷ��ٸ��ַ���
// ���˵Դ�ַ����ĳ���С��n,��Դ�ַ���Ū�������ֹͣ
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


//����my_strncmp
//strncmp���strcmp����һ������num�����n��
// ���n���������ƱȽϼ����ַ���

#include<string.h>
#include<assert.h>

int my_strncmp(const char* str1, const char* str2,unsigned num) {
    while (num--) {
        if (*str1 == *str2) {
            str1++;
            str2++;
            //����д���ж������,����������
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
