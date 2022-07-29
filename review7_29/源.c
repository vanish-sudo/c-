#include<stdio.h>

//int main() {
//	//char* my_strcpy(char* dest, const char * src);
////写一个函数指针 pf 能够指向my_strcpy
//	//char*(*pf)(char*,const char*)
//	//写一个函数指针数组pfarr,能够存放4个my_strcpy函数的地址
//	//char*(*pfarr[4])(char*,const char*)
//
//}

//计算器
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("************************\n");
//	printf("***  1.Add      2.Sub **\n");
//	printf("***  3.mul      4.Div **\n");
//	printf("***       0.exit      **\n");
//	printf("************************\n");
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("即将退出程序，请稍后....");
//			Sleep(1000);
//			break;
//		case 1:
//			printf("请输入俩个操作数:>");
//			scanf("%d%d", &x, &y);
//			Add(x, y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入俩个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//
//			break;
//		case 3:
//			Mul(x, y);
//			printf("请输入俩个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//
//			break;
//		case 4:
//			Div(x, y);
//			printf("请输入俩个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//
//			break;
//		default:
//			printf("正在研发，敬请期待\n");
//		}
//	} while (input);
//}
//
//


//两者对比后者为转移表
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
////异或
//int Sox(int x, int y)
//{
//	return x ^ y;
//}
//void menu()
//{
//	printf("************************\n");
//	printf("***  1.Add      2.Sub **\n");
//	printf("***  3.mul      4.Div **\n");
//	printf("***  0.exit     5.Sox **\n");
//	printf("************************\n");
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	menu();
//	int(*Pfarr[])(x, y) = { 0,Add,Sub,Mul,Div,Sox };
//
//	do {
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数");
//			scanf("%d%d", &x, &y);
//			int ret = Pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//}

//回调函数
//通过函数指针调用的函数
//计算器
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}int Mul(int x, int y)
//{
//	return x * y;
//}int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("************************\n");
//	printf("***  1.Add      2.Sub **\n");
//	printf("***  3.mul      4.Div **\n");
//	printf("***       0.exit      **\n");
//	printf("************************\n");
//}
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入俩个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("即将退出程序，请稍后....");
//			Sleep(1000);
//			break;
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		default:
//			printf("正在研发，敬请期待\n");
//		}
//	} while (input);
//}

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

//函数指针数组指针
//int (*(*p)[])(int ,int)
//int add(int x, int y)
//{
//
//}
//
//int main()
//{
//	int arr[] = { 0 };//数组
//	int* p = &arr;//取出数组地址赋给指针p
//
//	int(*pf)(int, int);//函数指针
//	int (*pf[4])(int, int) = add;//函数指针数组
//	int (*(*ppf)[4])(int, int) = &pf;
//	//ppf先与*结合是一个指针，紧接着与外面[]结合，形成指针数组
//	//指针指向的数组有4个元素、
//	//指向的数组的每个元素的类型是一个函数指针int(*)(int ,int)
//
//	return 0;
//}




//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//指针数组
//	int* arr[10] = { 0 };
//	// 数组指针
//	int* (*pa)[10] = &arr;
//	//函数指针
//	int(*pfa)(int, int) = &Add;//Add
//	//函数调用
//	/*int a=(*pfa)(1, 2);
//	//int a=pfa(1, 2);
//	printf("%d", a);
//	int b=pfa(1, 2);
//	printf("%d", b);*/
	//函数指针的数组
	//int(*pdfa[10])(int, int);
	//指向函数指针数组的指针
	//int(*(*ppfa)[10])(int, int) = &pdfa;
//}

//int bubble_sort(int* arr, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",40} };
//	float f[] = { 9.0,8.0,7.0,6.0,5.0 };
//	//bubble_sort(arr, sz);//只能排整数的序列
//	//bubble_sort(f,sz);//不能排其他类型的序列
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////缺点：只能排单一类型的序列


//void* 类型
//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;//会出警告
//	//char ch = 'w';
//	void* p = &a;
//	//p = &ch;
//	*p = 0;//报错
//	p++; 报错
//}
//
//void* 类型指针可以接收任意类型的地址
//void* 类型指针不可以进行解引用操作
//void* 类型指针不可以进行运算
//因为void* 类型是空，无法确定访问多少字节



int cmp_int(const void* e1, void* e2)
{
	// 比较两个整形值
	return *(int*)e1 - *(int*)e2;//因为e1,e2为void型所以需要强制转换
}
int cmp_f(const void* e1, void* e2)
{

	//	return *(float*)e1 - *(float*)e2;//会出现警告
	//return ((int)(*(float*)e1 - *(float*)e2));//这样就不会 但是有问题
	//如果需要降序 就将e1和e2的位置调换
	if (*(float*)e1 - *(float*)e2 > 0)
		return 1;
	else if (*(float*)e1 == *(float*)e2)
		return 0;
	else
	{
		return -1;
	}
}
struct Stu
{
	char name[20];
	int age;
};
//结构体使用年龄比较
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
//结构体使用名称比较
int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
/*比较名字就是比较字符串
 *字符串比较不能直接用><=，应该用strcmp()函数 */

void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	float f[] = { 9.0,8.0,7.0,6.0,5.0 };
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}
void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_f);
	for (int i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}

void test3()
{
	struct Stu s[3] = { {"zhangsan",10},{"lisi",200},{"wangwu",50} };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}
void test4()
{

	struct Stu s[3] = { {"zhangsan",10},{"lisi",200},{"wangwu",50} };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	/*       * 第一个参数：待排序数组的首元素地址
			 * 第二个参数：待排序数组的元素个数
			 * 第三个参数：待排序数组的每个元素的大小-单位是字节
			 * 第四个参数：是函数指针，比较两个元素的所用的函数地址 - 这个函数使用者自己实现
							函数指针的两个参数是：待比较的两个元素的地址
							*/

}
int main()
{
	test1();
	test2();
	test3();//结构体年龄比较
	test4();
	return 0;
}



//第一个参数：待排序数组的首元素地址
//
//第二个参数：待排序数组的元素个数
//
//第三个参数：待排序数组的每个元素的大小 - 单位是字节
//
//第四个参数：是函数指针，比较两个元素的所用的函数地址 - 这个函数使用者自己实现, 函数指针的两个参数是：待比较的两个元素的地址