#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int num1 = 200;//全局变量  定义：在代码块{}之外的变量


int main() {
	//c语言语法规定，变量要定义在当前代码块的最前面

	//int a = 0;
	//scanf("%d", &a);
	int math1 = 0;
	int math2 = 0;
	char ch = 'A';
	int d = 20;
	float b = 5.0;
	double p = 3.14;
	//年龄 20 体重 86
	short age = 20;//向内存申请2个字节=16个bit位用来存放20
	float weight = 86.5;//想内存申请四个字节，存放小数
	int num2 = 30;//局部变量 定义在代码块{}内的变量
	int num1 = 10;
	//局部变量和全局变量的名字建议不要相同 容易产生误会，产生bug
	//当局部变量和全局变量名字相同时 局部变量优先
	extern int g_val;
	



	printf("你好C语言");

	printf("char 字符类型\n");

	printf("%c\n", ch);
	printf("%d\n", ch);
	printf("\nint 整形");

	printf("十进制输出 %d\n", d);
	printf("八进制输出 %o\n", d);
	printf("十六进制输出 %x\n", d);
	printf("float 浮点型\n");

	printf("浮点型%f\n", b);
	printf("double 双精度型\n");
	
	printf("双精度%lf\n", p);

	//计算空间
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	//C语言标准规定
		//size(long)>=size(int)



	printf("体重%.2f,年龄：%d\n", weight, age);
	printf("全局变量num1 %d, 局部变量num2 %d\n", num1, num2);
	
	printf("num1 %d\n", num1);

	//计算2个数据的和

	printf("请输入两个数:>");
	scanf("%d%d",&math1,&math2);
	printf("%d", math1 + math2);

	printf("外部声明变量");
	printf("关于 extern  %d", g_val);
	return 0;
}
//数据类型
//int  整形 
//short 短整型
//long  长整型
//long long 长长整型
//float 浮点型
//double 双精度浮点型
//char 字符型
