
#include<stdio.h>
//void test(int arr[]) {
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//如果是32位机器 sz=1；如果是64位机器sz=2
//}
//
//int main() {
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
//int main() {
//	char ch = 'w';
//	char* pc = &ch;//字符指针
//	return 0;
//}
//int main() {
//	char arr[] = "asdfg";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//
//
//}

//int main() {
//	char* p = "addasj";//addasj 是一个字符串常量
//	//储存的是首字母的地址
//	//*p = 'c';//常量不可改 
//	//printf("%c\n", *p);
//	printf("%s\n", p);
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";//常量字符串不能被修改  而p1和p2的字符串相同 所以只存了一份 所以他俩地址是相同的
//	char* p2 = "abcdef";
//	printf("%p\n", p1); //所以他俩地址是相同的
//	printf("%p\n", p2);
//	if (p1 == p2)
//	{
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha");
//	}//结果为hehe
//	/*if (arr1 == arr2)//俩个不同数组名有两块空间，不同数组名首元素地址不同
//	{
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha");
//	}*/
//	结果为haha
//}

//指针数组  是数组 存放指针
//int main() {
//	int arr[10] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[10];//存放整形指针的数组 指针数组
//	char* pch[10];//存放字符指针的数组 指针数组
//}

//int main() {
//	int a = 10;
//	int b = 10;
//	int c = 10;
//	int d = 10;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d ", *(arr[i]));
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 2,3,4,5 };
//	int arr3[] = { 3,4,5,6 };
//	int arr4[] = { 4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3,arr4 };
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		int j = 0;
//		for (j = 0; j < 4; j++) {
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//
//	//int*arr1[10]整形指针数组
//	//char* arr2[10]一级字符指针数组
//	//char** arr3[10]二级字符指针数组
//
//}

//数组指针  即指针  指向数组地址的指针 
//int main()
//{
//	int* p = NULL;//p是整形指针 --指向整形的指针 - 存放整形的指针
//	char* pc = NULL;//pc是字符指针-- 指向字符的指针 - 存放字符的地址
//	//数组指针 - 指向数组的指针 - 存放数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//arr是首元素地址
//	//&arr[0] - 首元素的地址
//	//&arr   数组的地址
//	int(*p)[10] = &arr;//数组的地址要存起来
//	//上面为数组指针
//	//如果写成int* p[10]则为指针数组，因为[]的优先级高于*
//}

//int main()
//{
//
//	char* arr[5] = { 0 };//指针数组
//	//pa = &arr;对其添加类型 
//	char* (*pa)[5] = &arr;  
//	//括号里面的*说明是指针 [5]是指pa指向的数组有5个元素  char*是指向数组的元素类型
//		int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//
//
//
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", p[i]);
//		printf("%d", *(p + i));
//		printf("%d", *(arr + i));
//		printf("%d ", arr[i]);//arr[i]==*(arr+i)
//		//以上四个全部等价
//	}
//}


////参数是数组形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////参数是指针形式
void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
             
          printf("%d ",p[i][j]);
			//printf("%d ",*(*(p + i)+j));
         // printf("%d ", *(p[i]+j);
			/*printf("%d ", (*(p + i))[j]);*/
			

		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6} ,{3,4,5,6,7} };
	//print1(arr, 3, 5);//arr - 数组名 - 首元素地址  
					  //把arr想象成一维数组，即这个二维数组的首元素地址是第一行的地址
					  //而第一行也是一维数组，则可以用数组指针接收
	print2(arr, 3, 5);
}
// 
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	//int(*pa)[10] = &arr;
//	int i = 0;
//
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", p[i]);
//	//	printf("%d ", *(p + i));
//	//	printf("%d ", *(arr + i));
//	//	printf("%d ", arr[i]);//arr[i]==*(arr+1)=*(p+i)=p[i]
//	//}
//
//	
//	return 0;
//}
//int arr1[5];   //arr1是一个有5个元素的整形数组
// int * arr2[10];//arr2是一个数组，数组元素10个，每个元素的类型为int*，是指针数组
//int (*arr3)[10];//arr3是一个指针，该指针指向一个数组，数组有十个元素，每个元素类型都是int  arr3是数组指针
//int(*arr4[10] )[5];//arr4是一个数组,该数组有十个元素，每个元素是一个数组指针，该数组指针指向的元素有5个元素，每个元素是int

//arr4[10]
//辨认这些的时候可用现将数组名和[]找到并省略 剩下的就是类型