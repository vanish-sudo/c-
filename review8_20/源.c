#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//外部函数声明
//extern int Add(int x, int y);
//
//int main() {
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++) {
//		 printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int c = Add(a, b);
//	printf("c=%d ", c);
//	getchar();
//}
//预处理
//#include 
//头文件的包含   预编译（预处理）
//删除注释（使用空格替换注释）       预编译（预处理）
//#define 替换
//预处理其实就是文本操作  

//编译
//把C语言代码翻译成汇编代码
//语法分析
//词法分析
//语义分析
//符号汇总 

//汇编
//把汇编代码转换成了二进制指令
//行程符号表（包括函数和函数地址）

//链接
//合并段表
//符号表的合并与重定位

//预定义符号
//int main() {
//	//__FILE__   进行编译的源文件
//	printf("%s\n", __FILE__); //绝对路径+文件名称
//	//__LINE__ 行数
//	printf("%d\n", __LINE__); //行数
//	//__DATE__ 日期
//	printf("%s", __DATE__);
//	//__TIME__ 时间
//	printf("%s", __TIME__);
//
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("DATE.txt", "w");
//	for (i = 0; i < 10; i++) {
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%d ", arr[i]);
//	}
//	//__FUNCTION__    所在函数的函数名
//	printf("%s", __FUNCTION__);
//
//	//__STDC__  如果编译器遵循ANSI C（严格遵循C语言标准） 其值为1，否则未定义
//	//printf("%d ", __STDC__); vs未定义 gcc定义了
//}


//#开头
//预处理指令
//#define
//#include
//#pragma pack(4)
//#pragma 
//#endif
//#if 
//#line
//#ifdef 


//#define MAX 100
//#define STR "hehe"
//#define reg register
//#define do_forever for(;;)
//int main() {
//	reg int a = 0;//等价于 register int a=0;
//
//	int max = MAX;
//	printf("%d \n", max);
//	printf("%s \n", STR);
//	//不加分号 执行下一行代码并且死循环
//	do_forever
//		printf("%d \n", max);
//	//加上分号
//	do_forever;//死循环
//
//    return 0;
//}

//#define MAX 100
//#define MAX 100;
//以上是否需要加分号

//#define MAX 100;
//int main() {
//	int a = MAX;//等价于 int a=100;;也就是俩条语句
//	printf("%d", a);
//	//printf("%d ", MAX);//等价于printf("%d ",100;); 报错   语法错误                       
//}

//建议不要加上; 这样容易导致问题

//#define 定义宏
//#define机制包括了一个规定 允许把参数替换到文本中，这种实现通常称为宏或定义宏

//下面是宏的声明方式
//#define name(parament-list) stuff 其中parament-list 是一个由逗号隔开的符号表
//他们可能出现在stuff中 注意：参数列表必须与name紧邻 如果俩者之间有任何空白存在 
//参数列表就会被解释为stuff的一部分

//#define SQUARE(X) X*X
//int main() {
//	int ret = SQUARE(5);//等价于 int ret=x*x 其中x=5
//	printf("%d ", ret);
//	int ret1 = SQUARE(5 + 1);//等价于 int ret1=5+1*5+1
//	printf("%d ", ret1);
//	return 0;
//}

//#define SQUARE(X) (X)*(X)
//int main() {
//	int ret1 = SQUARE(5 + 1);//等价于 int ret1=(5+1)*(5+1)
//	printf("%d ", ret1);
//	return 0;
//} 

//#define DOUBLE(x) x+x
//int main() {
//	int a = 5;
//	int ret = 10 * DOUBLE(a);//等价于 10*5+5
//	printf("%d\n", ret); 
//}

//#define MAX 100
//#define DOUBLE(x) x+x
//int main() {
//	int a = 5;
//	int ret = 10 * DOUBLE(MAX + MAX);//等价于10*100+100+100+100
//	printf("%d\n", ret); 
//}

//#define MAX 100
//#define DOUBLE(x) (x)+(x)
//int main() {
//	int a = 5;
//	int ret = 10 * DOUBLE(MAX + MAX);//等价于10*(100+100)+(100+100)
//	printf("%d\n", ret);
//}

//void print(int a) {
//	printf("the value of a is %d\n", a);
//}
//
//int main() {
//	int a = 10;
//	int b = 10;
//	printf("the value of a is %d\n", a);
//	print(a);
//	print(b);
//}

//函数无法做到 printf("the value of a is %d\n", a); 打印a显示a 打印b显示b

//#define PRINT(x) printf("the value of "#x" is %d\n",x)
//int main() {
//	int a = 10;
//	int b = 10;
//	printf("hello world\n");
//	printf("hello"" world\n");
//	printf("hel""lo"" world\n");
//	PRINT(a);//等价于printf("the value of ""a"" is %d\n",a)
//	PRINT(b);//等价于printf("the value of ""b"" is %d\n",b)
//}
////#是把一个宏参数变成字符串
////## 可以把位于它两边的符号合成一个符号 他允许宏定义从分离的文本片段创建标识符
//
//#define CAT(X,Y) X##Y
//int main() {
//	int class84 = 2019;
//	printf("%d\n", CAT(class, 84));
//	//以下是执行步骤 
//	//printf("%d\n", class##84);
//	//printf("%d\n", class84);
//}

//#define MAX(X,Y) (X)>(Y)?(X):(Y)
//int main() {
//	int a = 10;
//	int b = 11;
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	max = MAX(a++, b++);//现在参数带有副作用了 也就是a,b被改变
//	                    //等价于（a++）>(b++)?(a++):(b++)
//	printf("%d\n", max);
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//} 

//宏的优点
//int Max(int a, int b) {
//	return a > b ? a : b;
//}
//float Max2(float a, float b) {
//	return a > b ? a : b;
//}
//#define MAX(a,b) (a)>(b)?(a):(b)
//int main() {
//	int a = 10;
//	int b = 20;
//	float c = 20;
//	float d = 20;
//	int max = Max(a, b);
//	printf("%d", max);
//	 max = MAX(a, b);
//	printf("%d", max);
//
//	//函数在调用的时候会有函数调用和返回的开销
//	 max = Max2(c, d);
//	printf("%d", max);
//	//宏在预处理阶段完成了替换 比函数效率高一点
//	//没有函数的调用和返回的开销
//	max = MAX(c, d);
//	printf("%d", max);
//}


//宏的缺点
//每次使用宏的时候,一份宏定义的代码将插入到程序中 除非宏比较短 
//否则可能大幅度增加程序长度 
//#define TEST(x,y) printf("test\n");
//int main() {
//
//	TEST();
//	TEST();
//	TEST();
//
//	return 0;
//} 



//宏可以传类型
//#define SIZEOF(type) sizeof(type)
//int main() {
//	int ret = SIZEOF(int);
//	 //ret = sizeof(int);
//	printf("%d ", ret);
//}

//#define MALLOC(num,type) (type*)malloc(num * sizeof(type))
//int main() {
//	int* p = (int*)malloc(10 * sizeof(int));
//	int* pf = MALLOC(10, int);
//	//以上等价
//	return 0;
//}

//#undef 这条指令用于移除一个宏定义

//#define MAX 100
//int main() {
//
//	printf("%d", MAX);//可执行
//#undef MAX
//	printf("%d", MAX);//不可执行
//
//	return 0;
//}

//命令行定义
//看bite课件 似乎vs不可用 gcc可用

//条件编译
//#define DEBUG 0
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		arr[i] = 0;
//#ifdef DEBUG  //如果没有定义DEBUG 则不执行下面语句 定义了则执行
//		printf("%d ", arr[i]);
//
//#endif // DEBUG
//#ifndef DEBUG
//		printf("%d ", arr[i]);//如果没有定义DEBUG 则执行下面语句 定义了不则执行
//#endif // !DEBUG
//
//
//	}
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		arr[i] = 0;
//#if 1  //#if后面表达式为真,则执行#if 与#endif 包括的语句(#if与#endif需要一对一对出现)
//		printf("%d ", arr[i]);
//#endif
//	}
//}

//多分支的条件编译
//int main() {
//#if 1==2
//	printf("hehe");
//#elif 1==1
//	printf("haha");
//#else
//	printf("嘿嘿");
//#endif
//	return 0;
//}

//#define DEBUG 0
//int main() {
//#if defined(DEBUG) //如果没有定义DEBUG 则不执行下面语句 定义了则执行
//	printf("hehe");
//#endif
//#if !defined(DEBUG) //如果没有定义DEBUG 则执行下面语句 定义了则不执行
	//printf("haha");
//#endif
	//return 0;
//}


//#include"源.h"
//int main() {
//	printf("%d", Add(10, 20));
//	printf("hehe\n");
//	return 0;
//}


//在使用库函数中我们可能会多次引入相同的库
//这样会使得在编译过程中代码会有重复的代码 
//因此我们可以在头文件这样进行设置（看头文件）
//#include"源.h"
//#include"源.h"
//#include"源.h"
//int main() {
//	printf("%d", Add(10, 20));
//	printf("hehe\n");
//	return 0;
//}

//offsetof
//offsetof是一个宏 头文件是stddef
//offsetof求得是偏移量 第一个参数是类型 第二个参数是成员名
//#include<stddef.h>
struct S {
	char c1;
	int a;
	char c2;
};
//
//int main() {
//	//struct S s;
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}

//自制my_offsetof
//起始地址减目标地址就是偏移量
//但是offsetof可以不创建变量求偏移量
//也就是说我们并不知道起始地址
//我们可以假设起始地址是0

#define MY_OFFSETOF(struct_name,rember_name) (int)&(((struct_name*)0)->rember_name)
int main() {
		printf("%d\n", MY_OFFSETOF(struct S, c1));
	printf("%d\n", MY_OFFSETOF(struct S, a));
	printf("%d\n", MY_OFFSETOF(struct S, c2));
	return 0;
}