#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ģ��ʵ��strstr  ���ַ��������ִ�
//����ҵ��˷����ִ���ʼ��ַ,���û���ҵ�����NULL

//#include<assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* s1 = (char*)str1;
//	char* s2 = (char*)str2;
//	char* curr = (char*)str1;
//	if (!*str2)
//		return NULL;//�����ҵ��ִ�Ϊ�� �򷵻�NULL
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
//	char str1[] = "acvfet";//�ַ�������
//	char str2[] = "fet";
//	char* ret = my_strstr(str1, str2);
//	if (ret == NULL)
//		printf("û�ҵ�");
//	else
//		printf("%s\n", ret);
//
//}


//strtok �ֽ��ַ��� ���鿴�е��Ʊʼ�
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
	//errno��һ��ȫ�ִ�����ı���
	//��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
	FILE* pf = fopen("test.txtt", "r");
	if (pf == NULL)
		printf("%s", strerror(errno));
	else
		printf("���ļ��ɹ�\n");
}

//errno��Ҫ��ͷ�ļ�errno.h


//�������鿴�е��Ʊʼ�
//int tolower  תСд
//int toupper ת��д
//���Ϻ���ͷ�ļ�Ϊ#include<ctype.h>