#include<stdio.h>
#include<string.h>
#include<float.h>
#include<limits.h>
//int main() {
//	int i = -20;
////10000000000000000000000000010100  源码
////11111111111111111111111111101011  反码
////11111111111111111111111111101100  补码
//	unsigned int j = 10;
////00000000000000000000000000001010
////11111111111111111111111111110110 a+j 补码
////11111111111111111111111111110101     反码
////10000000000000000000000000001010  -10
//  	printf("%d\n",i+j);
//	return 0;
//
//}

//int main() {
//	unsigned int i;
//	//i永远都是大于等于0的数，因为i 是无符号类型
//	for (i = 9; i >= 0; i--) {
//		printf("%u\n", i);
//	}
//}
//int main() {
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++) {
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	//-1 -2.......-127 -128 127 126.....3 2 1 0   strlen 是寻找\0，所以只有255
//}
// 
//unsigned char i = 0;
//int main() {
//	for (i = 0; i <= 255; i++) {
//		printf("hello world\n");
//	}
//	return 0;
//}

//结果死循环
//原因：因为unsigned char 的范围只有0--255 而循环可以是255+1=0

//浮点型的存储
//int  
//char 
//short
//long 之类的范围查询 使用limits.h头文件
// double float 取值范围查询 使用float.h头文件
//int main() {
//	double d = 1E10;
//	printf("%lf", d);
//}
int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为%d\n", n);
	printf("*pFloat的值为%f\n", *pFloat);

	*pFloat = 9.0;
	printf("n的值为%d\n", n);
	printf("*pFloat的值为%f\n", *pFloat);
	return 0;

}