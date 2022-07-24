#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//一维数组的创建和初始化
//数组的创建
//数组是一组相同类型的元素集合
//int main() {
////创建一个数组  --存放整形10个
//	int arr[10] = {1,3,4};//不完全初始化 剩下的元素默认初始化为0;
//	char arr2[10] = {'a','b'};
//	char arr3[10] = "adadc";
//	char arr4[]="addasd";
//	int n = 7;
//	//sizeof()计算的是所占空间大小
//	printf("%d ", sizeof(arr4));//包括字符零
////strlen计算的是'/0'之前的字符个数
//	printf("%d ", strlen(arr4));//不包括字符0

	//int ch[n]; 方括号中是常量表达式 用来确定数组大小 所以不能用变量n

	//1、strlen和sizeof没有什么关联
	//2.strlen是求字符串的长度 只能针对字符串长度 库函数  使用得引头文件
	//3.sizeof计算变量 数组 类型的大小 单位是字节 - 操作符
//}; 
//int main() {
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	char arr3[] = { 'a','b','c','\0'};
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//这个是随机值 数组中没有存放0 strlen只针对字符串 遇到\0时才会停止
//	printf("%d\n", strlen(arr3));//3  在数组中放入0
//
//};
//int main() {
//	////[] 下标引用操作符 其实就是数组访问操作符
//	//	char arr1[] = "abcdf";
//	//	printf("%c\n", arr1[3]);
//	//	int i = 0;
//	//	//strlen返回的是无符号数
//	//	for (i = 0; i < (int)strlen(arr1); i++) {
//	//		printf("%c ", arr1[i]);
//	//
//	//	}
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		prinitf("%d", arr[i]);
//	};
//
//};
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("&arr[%d]=%p\n" ,i, &arr[i]);/* 数组在地址中是连续的 从低地址到高地址*/
//	};

//};

//二维数组
//int main() {
//	   //三行四列
//		int arr[3][4] = { 1,1,2,3,4};//第一行满了会自动进入第二行
//		    //int int int int
//			//int int int int
//			//int int int int
//		int arr2[3][4] = { {1,1 },{ 2, 3, 4, 6}};//大括号中间件又有大括号就是把他们放在二维数组中的第几个数组里面
//		    //1 1 0 0
//			//2 3 4 5
//			//0 0 0 0
//		int arr3[][4] = { { 1,1 },{ 2, 3, 4, 6} };//行可以省略
//		//int arr3[3][] = { { 1,1 },{ 2, 3, 4, 6} };//列不可以省略
//};
// int main()
//{
//int arr[][4] = { {1,2,3,4},{5,6,7,8} };
//for (int i = 0; i < 2; i++)
//{
//	for (int j = 0; j < 4; j++)
//	{
//		printf("arr[%d][%d]=%d\n", i, j, arr[i][j]);
//		printf("arr[% d][% d] = % d\n", i, j, &arr[i][j]);
//
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[][4] = { {1,2,3,4},{5,6,7,8} };
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//
//			printf("arr[%d][%d] = % p\n", i, j, &arr[i][j]);//二维数组在内存中是连续存放的，且逐渐递增
//
//		}
//		printf("\n");
//	}
//
//}

//数组作为函数参数
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	int j = 0;
//	int x = 0;
//	for (i = 0; i < sz; i++) {
//		int flg = 1;
//		for (j = 0; j < sz - i; j++)//sz-1 防止数组越界
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//				flg = 0;//本趟未完全有序
//			}
//
//		};
//		if (flg == 1)
//			break;//已经全部有序
//	};
//}
//int main() {
//	int arr[] = {9,8,7,6,5,10,3,2,1,0,1 };
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	//对arr进行排序 拍成升序
//	//arr是数组 我们对数组进行传参 实际上传过去的是数组首元素地址
//	bubble_sort(arr,sz);//冒泡排序
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//};
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//数组名是数组首元素的地址；除俩种情况
	//第一种情况：
	//sizeof(arr) / arr[0];
	//sizeof(数组名)--数组名表示整个数组，sizeof(数组名)计算的是整个数组的的大小，单位是字节
	//第二种情况 :
	printf("去数组的地址 第二种情况：%p\n", &arr);
	printf("第二种情况：%p\n\n", &arr + 1); //加一之后就跳过这个数组了
	//&数组名，数组名代表整个数组，& 数组名，取出的是整个数组的地址
		printf("%p\n", arr);
	printf("%p\n\n", arr + 1);//加一就进入的arr[1]
	printf("%p\n", &arr[0]);
	printf("%p\n\n", &arr[0] + 1);
	printf("%d\n", arr[0]); 
	printf("%d\n", *arr);
}
//int main() {};