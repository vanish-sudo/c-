#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//int main() {
//	char password[20] = { 0 };
//	char ret = '0';
//	int ch = 0;
//	printf("请输入您的密码:>\n");
//	//C语言的字符串为数组形式，
//	//而数组的名称可以表示其地址，故对字符串输入不需要加地址符。
//	scanf("%s", password);
//	do
//	{
//		printf("请确认(Y/N):>\n");
//		//getchar();
//		while ((ret = getchar()) != '\n')
//		{
//			//getcahr()单独使用时只会读取一个字符
//		}
//		ret = getchar();
//		if (ret == 'Y' || ret == 'y')
//		{
//			printf("确认成功\n");
//				break;
//		}	
//		else if (ret == 'Y' || ret == 'y')
//		{
//			printf("确认失败\n");
//			break;
//		}
//		else {
//			printf("重新确认\n");
//		}
//	} while (1);
//}
////如程序中输入密码  scanf和getchar属于输入函数  他们的运行过程是这样的：
////当我们在用键盘敲击密码时 如1234 需要按下回车键确认 在scanf来取走他们之前
////他们被存放在输入缓冲区内  存放的样子是：1234\n 当回车键按下 scanf只取走了
////1234这个密码 此时缓冲区还剩下\n 这个时候getchar 开始运行 当看见缓冲区里面有\n
////时就直接取走\n


//int main() {
//	int ch = 0;
//	while ((ch=getchar())!=EOF) {
//		if (ch < '0' || ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		break;
//		printf("%d", i);
//	}
//}


//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//		//for循环的初始化条件 都可以省略 
//		//但是条件省略时则恒为真
//	}
//}

//int main() {
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++) {
//		for (; j < 10; j++)
//		{
//			printf( "jeje");
//		}//10次jeje
//	}
//}

//int main() {
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y<55; x++, y++)
//	{
//		printf("hehe\n");
//	}
//}


//坑:
//请问循环要循环几次 
//0次
//int main() {
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//int main() {
//	int i = 0;
//	//先执行在判断 最少执行一次
//	do {
//		printf("%d", i);
//		i++;
//	} while (i < 0);
//
//}

//1.计算n的阶乘 5!  5*4*3*2*1
//int main() {
//	int n = 0;
//	int i = 0;
//	int res = 1;
//	printf("请输入你要计算的阶乘:>");
//	scanf("%d", &n);
//	for (i = n; i >= 1; i--)
//	{
//		res = res * i;
//	}
//	printf("%d", res);
//}

//计算1!+ 2!+ 3!+ .... + 10!
//int main() {
//	
//	int i = 0;
//	int j = 0;
//	int res = 1;
//	int sum = 0;
//	for (i = 3; i >= 1; i--) {
//		res = 1;
//		for (j = i; j >= 1; j--)
//		{
//			res = res * j;
//		}
//		sum = sum + res;
//	} 
//	printf("%d", sum);
//	return 0;
//}

//在一个有序数组中编写一个查找某数n 编写函数int binsearch(int x,int v[],int n)

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	int left = 0;
//	int mid = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &n);
//	while (left <= right) {
//		mid = (right + left)/2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了 下标为%d", mid);
//			break;
//		}
//		
//	}
//	if(right<left)
//		printf("该数组中没有此数");
// return 0;
//}

//int main() {
// //welcome to bit!!!!!!
////w###################!
////we#################!!
////wel###############!!!
////welc#############!!!!
////welco###########!!!!!
////welcom#########!!!!!!
////.......
////welcome to bit!!!!!!
//
//	char arr1[] = "Welcome to China!!!!";
//	char arr2[] = "####################";
//	int left = 0;
////strlen算的是字符串长度 -1是算的下标
//
//	int right = strlen(arr1) - 1;
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		//Sleep(1000);//内置为毫秒，1000ms=1s，
//		//             //用Sleep()得用windows.h头文件
//		//system("cls");//执行系统命令  cls 清空屏幕 头文件stdlib.h
//	}
//}

int main() {
	char user[20] = "";
	char password[20] = "";
	int i = 0;
	
	while (i <= 2) {
		printf("请输入账号：>");
		scanf("%s", user);
		printf("请输入密码：>");
		scanf("%s", password);
		//==不能用来比较俩个字符是否相等 应该使用一个库函数 strcmp
		if (strcmp(user, "tang1561150107") != 0 || strcmp(password, "gsq123456") != 0)
		{
			i++;
			printf("账号或者密码错误请重新输入");
		}
		else
		{
			printf("登录成功");
				break;
		}
	}
}