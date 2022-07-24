#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main() {
//	int a = 10;//申请了4个字节空间
//	int* p = &a;//p是一个变量 指针变量
//	double d = 3.14;
//	double* pd = &d;
//	printf("%lf\n", *pd); //*解引用操作符 或者间接访问操作符
//	printf("%d\n", sizeof(pd));/*32位平台是4 64位平台是8*/
//	printf("%p\n",& a);
//	printf("%d\n", *p); //*解引用操作符 或者间接访问操作符
//	printf("%d\n", sizeof(int*));/*32位平台是4 64位平台是8*/
//	printf("%d\n", sizeof(short*));/*32位平台是4 64位平台是8*/
//	printf("%d\n", sizeof(char*));/*32位平台是4 64位平台是8*/
//	printf("%d\n", sizeof(float*));/*32位平台是4 64位平台是8*/
//	printf("%d\n", sizeof(double*));/*32位平台是4 64位平台是8*/
//
//	return 0;
//}


//结构体

//表达人或者书时  他们是复杂对象
//名字-身高-年龄-身份证号
//书名--作者--出版社--定价--书号
//复杂对象---结构体 我们自己创造出来的一种类型
//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main() {
//	struct Book b1 = { "c语言程序设计",55 };
//	struct Book* pd = &b1;
//	//b1.name = "c++";//不可以直接改 因为name是数组名  本质上是地址 不可直接更改
//	strcpy(b1.name,"c++");//可以使用字符串拷贝  库函数 库 string.h
//	printf("%s\n", b1.name);
//	printf("%d\n", b1.price);
//	b1.price = 12;
//	printf("%d\n", b1.price);
//	//利用pd打印出我的书名和价格
//	//结构体变量.成员
//	//	结构体变量->成员
//	printf("%s\n", (*pd).name);
//	printf("%s\n",pd->name);
//	return 0;
//}


//分支语句和循环

//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else if (18 <= age && age <= 28)
//		printf("青年\n");
//	else if (age >= 28 && &age < 50)
//		printf("壮年");
//	else if (age >= 50 && &age < 90)
//		printf("老年");
//	else
//		printf("已成年\n");
//}



////悬空else
////else和他理他最近的未匹配的else进行匹配
//int main() {
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//			printf("haha\n");
//	return 0;
//}
//



//判断一个数是否位奇数
//输出1--100之间的奇数
int Odd(int x) {
	if (x % 2 == 1)
		return 1;
	return 0;
}

//int main() {
//	int num = 0;
//	int isOdd = 0;
//	printf("请输入一个数字:>\n");
//	scanf("%d",&num);
//	isOdd=Odd(num);
//	if (isOdd == 1)
//		printf("%d是奇数\n", num);
//	else
//		printf("%d不是奇数\n", num);
//	return 0;
//}

//int main() {
//	int isOdd = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		isOdd = Odd(i);
//		if (isOdd == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}


//int main() {
//		int day = 0;
//	printf("请输入一个数字:>\n");
//	scanf("%d", &day);
//		//switch();括号中必须为整形
//	//case 后面必须是整形常量表达式  字符也是整形常量 
//	switch (day) {
//	case 1:
//		printf("星期一\n");
//		break;
//	case 1:
//		printf("星期二\n");
//		break;
//	case 2:
//		printf("星期三\n");
//		break;
//	case 3:
//		printf("星期四\n");
//		break;
//	case 4:
//		printf("星期五\n");
//		break;
//	case 5:
//		printf("星期六\n");
//		break;
//	case 6:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误\n");
//	};
//	return 0;
//}

//C语言0为假 非零为真 负数也为真
//int main() {
//	int i = 1;
//	//先判断在执行 可能不执行
//	while (i <= 5) {
//		if (i == 5)
//			continue;  //提前结束此次循环进入下次
//		printf("%d", i);
//		i++;
//	};
//	i = 1;
//	printf("\n");
//	//先执行在判断 最少执行一次
//	do {
//		printf("%d", i);
//		i++;
//	} while (i <0);
//}

int main()
{
	int ch = 0;
	putchar(ch);
	//getchar 如果遇见Ctrl+z 就会退出循环
	//EOF -->end of file --》-1
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
		
	}
}
