#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = i;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//变长数组，C99中规定的, vs不可用，但gcc可用

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<errno.h>
//int main() {
//	//像内存申请10个整形的空间
//	int* p = (int*)malloc(INT_MAX);
//	//int*p=(int*)malloc(10 * sizeof(int));
//	//可能会有开辟失败的情况
//	//开辟成功返回地址，为开辟成功返回NULL
//	if (p == NULL) {
//		printf("%s", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++) {
//			printf("%d", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统  free
//	free(p);
//	p = NULL; 
//
//	return 0;
//}

//calloc 开辟空间，初始化为0;

//#include<stdio.h>
//#include<errno.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//		printf("%s", strerror(errno));
//	else {
//		int i = 0;
//		for (i = 0; i < 5; i++) {
//			*(p + i) = i;
//		}
//	}
//	//就是使用malloc开辟20个字节空间
//	//假设这里20个字节不够我们使用
//	//希望我们能够有40个字节
//	//这里就可以使用realloc来调整动态开辟的内存
//	int* p2 = (int*)realloc(p, 40);
//	//第一个参数是地址，第二个参数类型是新的字节大小 
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(p2 + i));
//	}
//	//realloc使用的注意事项：
//	//1.如果p指向的空间之后有足够内存可以追加，则直接追加，然后返回p
//	//2.如果果p指向的空间之后没有有足够内存可以追加，则realloc会重新找一个内存区域
//	//开辟一块满足需求的空调，并且把原来内存中的数据拷贝回来，释放旧的的内存空间
//	//最后返回新开辟的内存空间
//	int* ptr = realloc(p, INT_MAX);
//	//追加成功
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		} 
//	}
//	//追加失败
//	else
//	{
//
//		printf("%s", strerror(errno));
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}
//

//内存分配错误示范一：
//对空指针进行解引用：
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	//未对返回值进行判断，若malloc开辟空间失败，则会返回NULL，对NULL进行++
// //是非法访问地址
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//}

//
//正确使用：
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//}
//
////错误示范二：
////对动态内存的访问越界：
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 5);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//}
//
//
////错误示范三：
////对非动态内存开辟使用free
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	8p = 20;
//	free(p);
//	p = NULL;
//}
//
//
////错误示范四：
////使用free释放动态开辟内存的一部分
//
//int* p = (int*)malloc(sizeof(int) * 10)
//if (p == NULL)
//return 0;
//int i = 0;
//for (i = 0；i < 10；i++)
//{
//	*p++ = i；//改变了p的起始位置，由于优先级问题，得加括号
//}
//free(p);
//p = NULL;
//return 0;
//
//
//错误示范五：
//动态开辟内存忘记释放(内存泄漏)
//
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//}
//
//
//
//
////错误示范六：对同一块内存多次释放
//int main()
//{
//
//	int* p = (int*)malloc(sizeof(int) * 10)
//		if (p == NULL)
//			return 0;
//	int i = 0;
//	for (i = 0；i < 10；i++)
//	{
//		*p++ = i；//改变了p的起始位置，由于优先级问题，得加括号
//	}
//	free(p);
//	free(p);
//	free(p);
//}
