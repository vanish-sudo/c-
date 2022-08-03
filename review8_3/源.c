#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//字符串逆序
#include<string.h>
#include<assert.h>

//逆序字符串
//void  reverse(char*arr) {
//	assert(arr);
//	int left = 0;
//	char tmp = 0;
//	int right = strlen(arr)-1;
//	
//
//	while (right>left)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	int sz = 0;
//	char arr[256] = { 0 };
//	gets();//读取一行存放到buff里面去 buff也就是输入缓冲区
//	scanf("%s", arr);
//
//	reverse(arr);
//	printf("%s", arr);
//}

//Sn=a+aa+aaa+aaaa+aaaaa的前五项之和，其中a是一个数字
	//例如：2+22+222+2222+22222
//int main()
//{
//	
//	int n = 0;
//	int a = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	int tmp = a;
//	while (n--)
//	{
//		sum = sum + tmp;
//		tmp = (tmp * 10) + a;
//	}
//	printf("%d", sum);
//}

//水仙花数
//例如 153=1^3+5^3+3^3   //0-100000所有的水仙花数 也就是自幂数
//#include<math.h>
//int main() {
//	int i = 0;
//	for (i = 0; i <= 100000; i++) {
//		//判断是否为水仙花数
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		while (tmp/=10)
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp) {
//			sum += (int)pow(tmp % 10, n);//pow返回的是double类型
//				tmp /= 10;
//		}
//		if (i == sum) {
//			printf("%d是水仙花数\n", i);
//		}
//	}
//}


/*
  	   *     1
	  ***    2  3
     *****   3  5
    *******   4  7
   *********   5  9
  ***********    6  11
 *************     7  13




//7行 6个空白  第一行一个每一次增加两个*  2*i+1
//先输入一个数 第一行打印六个空白，第二行打印五个n-1-i


 ***********  11                                //打印n-1
  *********   9        空格由1个到6格  n-1
   *******    7      *  第一次十一55
	*****     5         第二次9
	 ***      3
	  *       1           */
//int main()
//{
//	
//	int n = 7;//层数
//
//	int i = 0;
//	int j = 0;
//	printf("请输入你需要打印的层数:>");
//	scanf("%d", &n);
//	//打印上半部分
//	 //空格 6 5 4。。。。1 0
//	for (i = 1; i <=n; i++) {
//		//先打印空格
//		for ( j = 1; j <= n-i; j++)
//		{
//			printf(" ");
//		}
//
//		//打印*
//		for (j = 1; j <= 2*i-1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	//打印下半部分
//	 //空格 1 2 3.。。。。。5 6
//
//	for (i = 1; i < n; i++) {
//		for (j = 1; j <= i; j++) {
//			printf(" ");
//		}
//		for (j = 1; j <= (2 * (n - i)) - 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//
//	}
//
//}


//喝汽水 1瓶汽水1元 2个空瓶可以换一瓶汽水，给20元 ，可以喝多少汽水
//int main() {
//	int money = 0;
//	int empty = 0;
//	int total = 0;
//	printf("请问您要付多少钱:>");
//	scanf("%d", &money);
//	//买的
//	empty = money;
//	total = empty;
//	while (empty > 1) {
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//}

//法二:
//int main() {
//	int money = 0;
//	
//	int total = 0;
//	printf("请问您要付多少钱:>");
//	scanf("%d", &money);
//	if(money<1)
//		printf("买不了");
//	else {
//		printf("一共喝了%d瓶", 2 * money - 1);
//	}
//}



//调整奇偶数位置
//奇数在前，偶数在后

void move(int* arr,int sz) {
	int left = 0;
	int tmp = 0;
	int right = sz-1;
	while (left < right) {
		//找偶数
		while ((left <right) && (arr[left] % 2 == 1)) {
			left++;
		}
		//找奇数
		while ((left < right) && (arr[right] % 2 == 0)) {
			right--;
		}
		if (left < right) {
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;

}


