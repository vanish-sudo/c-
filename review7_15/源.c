#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//int main() {
//	//算法实现
//	/*a放最大值
//	b次之
//    c中放最小值*/
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (b > a) {
//		tmp = a;
//		a = b;
//		b = tmp;
//	};
//	if (c > a)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	};
//	if (c > b) {
//		tmp = b;
//		b = c;
//		c = tmp;
//	};
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//


//写一个代码打印出1-100之间所有的3的倍数
//int main() {
//
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//		
//	}
//}


//给定两个数，求这两个数的最大公约数
//int main() {
//	int a = 18;
//	int b = 24;
//	int rest = 0;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	while (a%b!=0) {
//		rest = a % b;
//		a = b;
//		b = rest;
//	}
//	printf("%d", b);
//}

//打印1000-2000年的闰年
//int main() {
//	int years = 1000;
//	//被4整除且不被100整除
//	//能被400整除
//	for (years; years <= 2000; years++)
//	{
//		if ((years % 4 == 0 && years % 100 != 0)|| years % 400 == 0)
//			printf("%d\n", years);
//		
//	}
//}

//找出1到100中的有多少个9
//int main() {
//	int i = 0;
//	int rest = 0;
//	int sum = 0;
//	for (i = 1; i < 100; i++) {
//		if (i % 10 == 9)
//			sum++;
//		if (i / 10 == 9)
//			sum++;
//	}
//	printf("%d ", sum);
//	//9 19 29 39 49 59 69 79 
//}

//判断是否为素数
//int main() {
//	int i, j;
//	int count = 0;
//	for (i = 100; i <= 200; i++) {
//		for (j = 2; j <= i; j++) {
//			if (i % j == 0) 
//				break;
//		}
//		if (i == j)
//		{
//			printf("这个数是素数%d\n", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//}

//int main() {
//	int i, j, count;
//	count = 0;
//	//偶数中只有2是素数 所有在求2以上的素数时可以排除所有偶数
//		for (i = 101; i <= 200; i+=2) {
//			for (j = 2; j <= sqrt(i); j++) {
//				if (i % j == 0) 
//					break;
//			}
//			if (sqrt(i) < j)
//			{
//				printf("这个数是素数%d\n", i);
//				count++;
//			}
//		}
//		printf("%d", count);
//}


//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4..... + 1 / 99 - 1 / 100的值打印结果

//int main() {
//	double rest1 = 0.0;
//	double rest2 = 0.0;
//	int i = 0;
//	//算奇数项
//	for (i = 1; i <= 100; i+=2)
//	{
//		rest1 = rest1+(1.0 / i);
//	}
//	//算偶数项
//	for (i = 2; i <= 100; i += 2)
//	{
//		rest2 = rest2 + (1.0 / i);
//	}
//	printf("%lf", rest1 - rest2);
//}



/*法二*/
//int main()
//{
//
//	int i = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + 1.0 / i;
//		sum = -sum;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//

//找出十个整数中最大的数
//int main() {
//	int i = 0;
//	int arr[] = { -10,-6,-4,-1,-2,-4,-1,-4,-5,-67,-9 };
//	int max = arr[0];
//	for (i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


//乘法口诀表
//int main() {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++) {
//			printf("%d*%d=%-3d",i,j,i*j);
//		}
//		printf("\n");
//
//	}
//}

//编写代码在整形有序数组中找到具体某个数
//int main() {
//	 int arr[] = { 1,2,3,4,5,6,7,8,9};
//	int tmp = 0;
//	int k = 0;
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
//	scanf("%d",&k);
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid - 1;
//		}
//		else if(arr[mid]==k) {
//			printf("找到了 %d 下标为%d", arr[mid],mid);
//			break;
//		}
//	}
//	if (left >right)
//	{
//		printf("没有此数字");
//	}
//
//}


//猜数字
//1.电脑会生成一个随机数
//2,。猜数字

int main() {
	int n = 1;
	//1.生成随机数
/*拿时间戳生成起点*/
//time_t time(time_t *timer)     time_t本质上是个整形
//ret= rand((unsigned)time(NULL)); 	//rand生成伪随机数 范围在0---RAND_MAX(十六进制为0x7fff  十进制为32767)
	srand((unsigned)time(NULL));
do {
	
		menu();
		int select = 0;
		printf("请选择:>");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏");
			return 0;
		default:
			printf("输入非法数字 请重新输入");
			break;
		}
	
	
		Sleep(2000);
		system("cls");


} while (n);


printf("欢迎下次光临");
}


//int main() {
//	printf("hello bit1\n");
//	goto again;
//	printf("hello bit2\n");
//again:
//	printf("hello bit3\n");
//
//	return 0;
//}


int main() {
	//shut down -s -t 60
	char str[20]="";
	system("shutdown -s -t 60");
again:
	printf("请注意：你的电脑将在1分钟内关机 如果输入我是猪 ，就取消关机\n请输入:>");
	scanf("%s", str);
	if (strcmp(str, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}