#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//小端存储 所以是反的
//	fclose(pf);
//	pf = (NULL);
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		Sleep(1000);
//		printf("hehe");
//	}
//	return 0;
//}

//每隔1秒往缓冲区放置一个hehe，当缓冲区放满时，则会打印出来，这个编译器缓冲区大小根据c语言编译器而定

//操作文件
//#include<string.h>
//#include<errno.h>
//int main() {
//	//打开文件
//	 //.. 表示上一级路径
//	// . 表示当前路径
//	   //相对路径
//	 FILE*pf= fopen("test.txt", "r");
//	 //绝对路径
//	 //fopen("C:\\Users\\汤家豪\\source\\repos\\review8_19\\test.text", "r");//相对路径
//	 //如果打开失败则会返回空指针
//	 if (pf == NULL) {
//		 printf("%s",strerror(errno)); 
//	 }
//	 //打开成功
//	 //读文件
//	 //关闭文件
//	 fclose(pf);
//	 pf = NULL;
//
//	return 0;
//}

//int main() {
//	FILE* pf = fopen("test.txt", "w");
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	fclose(pf);
//	pf = NULL;
//}

//int main() {
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	fclose(pf);
//	pf = NULL;
//}
//输入函数:指的是从文件中调用信息出来
//输出函数 : 指的是输出到文件中

//从键盘输入
//输出到屏幕
//键盘& 屏幕都是外部设备
//
//键盘 - 标准输入设备 - stdin
//屏幕 - 标准输出设备 - stdout
//是一个程序默认打开的两个流设备
// 
// 以下是默认打开三个流
//stdin FILE*
//stdout FILE*
//stderr  FILE*

//int main() {
//	int c=fgetc(stdin);
//	fputc(c,stdout);
//}

//int main() {
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//		return 0;
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	fclose(pf);
//	pf = NULL;
//}

//int main() {
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		printf(strerror(errno));
//		return 0;
//	}
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//}



//fgets(char*string,n,FLIE*stream)
//第一个参数需要字符数组传参，n是读取的最多的值，最后一个参数是流
//即你要将流中多少个字节放进数组
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf(strerror(errno));
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);//如果文本流里面的语句换行的话，buf会将换行即\n也会被存放
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//}  

//int main()
//{
//	FILE* pf = fopen("text.txt","w");
//	if (pf == NULL)
//	{
//		printf(strerror(errno));
//		return 0;
//	}
//
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	fputs("hello\n", pf);
//	fclose(pf);
//	pf = NULL;
//}

//操作键盘和屏幕
//int main() {
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);//从标准输入流读取
//	fputs(buf, stdout);//输出到标准输出流
//}

//fprintf

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 1,3.14f,"bit" };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d  %.2f  %s", s.n, s.score, s.arr);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//} 

//fscanf

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的输入数据
//	fscanf(pf, "%d  %f  %s", &(s.n), &(s.score), s.arr);//将文件中的数据输入到s中
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//对比一组函数

//scanf / fscanf / sscanf
//printf / fprintf / sprintf


//scanf与printf的比较
//针对标准输入流 / 标准输出流的 格式化输入 / 输出语句

//fscanf与fprintf
//是针对所有输入流 / 所有输出流的 格式化输入 / 输出语句

//sscanf与sprintf

//sscanf
//从字符串中拿出一个格式化数据

//sprintf
//把一个格式化数据存储到字符串中

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	// 把格式化转化成字符串放到buf中。
//	sprintf(buf, "%d  %f  %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//	//从buf中读取格式化的数据到tmp;
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//
//	return 0;
//}

//struct S
//{
//	char name[10];
//	int age;
//	double score;
//};
//int main()
//{
//	//struct S s = { "张三",18,55.6 };
//	struct S tmp = { 0 };
//
//	//FILE* pf = fopen("text.txt", "wb");
//	FILE* pf = fopen("text.txt", "rb");
//
//	if (pf == NULL)
//		return 0;
//
//	//二进制形式写文件
//	//size_t fwrite(const void* buffer, size_t size, size_t count, FILE * stream);
//	//fwrite(&s,sizeof( struct S),1,pf);
//
//	//二进制形式读文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf", tmp.name, tmp.age, tmp.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文件的随机读写
//文件的随机读写
//fseek//定位文件指针
//int fseek(FILE* stream, long offset, int origin);
//第一个参数是类型为FILE*的变量     第二个参数是偏移量  第三个参数是文件指针的当前位置（起始位置）
//关于起始位置有三个选项
//SEEK_CUR  文件指针的当前位置
//SEEK_END  文件的末尾位置
//SEEK_SET  文件起始位置

//int main()
//{
//    FILE* pf = fopen("text.txt", "r");//文件中已经存放abcdef
//    if (!pf)
//    {
//        printf(strerror(errno));
//        return 0;
//    }
//    //定位文件
//    //fseek(pf, 2, SEEK_SET);//读取c
//    fseek(pf, -2, SEEK_END);//读取e
//    //fseek(pf, 2, SEEK_CUR);//读取c
//  //读取文件
//    int ch = fgetc(pf);
//    printf("%c\n", ch);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//ftell
//long int ftell(FILE* stream);
//返回文件指针相对于起始位置的偏移量
//int main()
//{
//    FILE* pf = fopen("text.txt", "r");//文件中已经存放abcdef
//    if (!pf)
//    {
//        printf(strerror(errno));
//        return 0;
//    }
//    //定位文件
//      //fseek(pf,-2,SEEK_END);//读取e
//      //int pos=ftell(pf);
//      //printf("%d\n",pos);//打印4 
//    int pos = ftell(pf);
//    printf("%d\n", pos);//打印0
//    flcose(pf);
//    pf = NULL;
//    return 0;
//}

//rewind
//void rewind(FILE*stream);
//让文件指针的位置回到文件的起始位置

//int main()
//{
//    FILE* pf = fopen("text.txt", "r");//文件中已经存放abcdef
//    if (!pf)
//    {
//        printf(strerror(errno));
//        return 0;
//    }
//    int ch = fgetc(pf);
//    printf("%d", ch);//打印a
//    rewind(pf);//将文件指针的位置回到文件起始位置
//    ch = fgetc(pf);
//    printf("%d", ch);//打印a
//    flcose(pf);
//    pf = NULL;
//    return 0;
//}

//文件结束的判定
//feof();
//不能用feof函数的返回值来直接判断文件是否结束，
//而是应该用于当文件读取结束时判断是读取失败，还是遇到文件尾结束

//int main()
//{
//    //EOF--- 值为-1
//    //feof();//EOF--end 0f file - 文件结束标志,
//    FILE* pf = fopen("text.txt", "r");
//    if (!pf)
//    {
//        perror("text");//也是错误报告函数，与strerror类似，但是perror不需要引头文件
//        return 0;
//    }
//    int ch = fgetc(pf);
//    printf("%d\n", ch);//打印-1即当文件中没有读取的东西时，系统会自动补上EOF   此时text.txt中没有任何东西
//    return 0;
//}



//perror函数演示

int main()
{
    FILE* pf = fopen("text2.txt", "r");//此时text2.txt文本文件并不存在
    if (!pf)
    {
        perror("text2.txt");//打印结果为：text2.txt: 错误信息
    }
    return 0;
}