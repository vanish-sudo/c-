#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//С�˴洢 �����Ƿ���
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

//ÿ��1��������������һ��hehe��������������ʱ������ӡ�����������������������С����c���Ա���������

//�����ļ�
//#include<string.h>
//#include<errno.h>
//int main() {
//	//���ļ�
//	 //.. ��ʾ��һ��·��
//	// . ��ʾ��ǰ·��
//	   //���·��
//	 FILE*pf= fopen("test.txt", "r");
//	 //����·��
//	 //fopen("C:\\Users\\���Һ�\\source\\repos\\review8_19\\test.text", "r");//���·��
//	 //�����ʧ����᷵�ؿ�ָ��
//	 if (pf == NULL) {
//		 printf("%s",strerror(errno)); 
//	 }
//	 //�򿪳ɹ�
//	 //���ļ�
//	 //�ر��ļ�
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
//	//���ļ�
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	fclose(pf);
//	pf = NULL;
//}
//���뺯��:ָ���Ǵ��ļ��е�����Ϣ����
//������� : ָ����������ļ���

//�Ӽ�������
//�������Ļ
//����& ��Ļ�����ⲿ�豸
//
//���� - ��׼�����豸 - stdin
//��Ļ - ��׼����豸 - stdout
//��һ������Ĭ�ϴ򿪵��������豸
// 
// ������Ĭ�ϴ�������
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
//��һ��������Ҫ�ַ����鴫�Σ�n�Ƕ�ȡ������ֵ�����һ����������
//����Ҫ�����ж��ٸ��ֽڷŽ�����
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf(strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);//����ı����������任�еĻ���buf�Ὣ���м�\nҲ�ᱻ���
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	//�ر��ļ�
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

//�������̺���Ļ
//int main() {
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ
//	fputs(buf, stdout);//�������׼�����
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
//	//��ʽ������ʽд�ļ�
//	fprintf(pf, "%d  %.2f  %s", s.n, s.score, s.arr);
//
//	//�ر��ļ�
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
//	//��ʽ������������
//	fscanf(pf, "%d  %f  %s", &(s.n), &(s.score), s.arr);//���ļ��е��������뵽s��
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�Ա�һ�麯��

//scanf / fscanf / sscanf
//printf / fprintf / sprintf


//scanf��printf�ıȽ�
//��Ա�׼������ / ��׼������� ��ʽ������ / ������

//fscanf��fprintf
//��������������� / ����������� ��ʽ������ / ������

//sscanf��sprintf

//sscanf
//���ַ������ó�һ����ʽ������

//sprintf
//��һ����ʽ�����ݴ洢���ַ�����

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
//	// �Ѹ�ʽ��ת�����ַ����ŵ�buf�С�
//	sprintf(buf, "%d  %f  %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp;
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
//	//struct S s = { "����",18,55.6 };
//	struct S tmp = { 0 };
//
//	//FILE* pf = fopen("text.txt", "wb");
//	FILE* pf = fopen("text.txt", "rb");
//
//	if (pf == NULL)
//		return 0;
//
//	//��������ʽд�ļ�
//	//size_t fwrite(const void* buffer, size_t size, size_t count, FILE * stream);
//	//fwrite(&s,sizeof( struct S),1,pf);
//
//	//��������ʽ���ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf", tmp.name, tmp.age, tmp.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ļ��������д
//�ļ��������д
//fseek//��λ�ļ�ָ��
//int fseek(FILE* stream, long offset, int origin);
//��һ������������ΪFILE*�ı���     �ڶ���������ƫ����  �������������ļ�ָ��ĵ�ǰλ�ã���ʼλ�ã�
//������ʼλ��������ѡ��
//SEEK_CUR  �ļ�ָ��ĵ�ǰλ��
//SEEK_END  �ļ���ĩβλ��
//SEEK_SET  �ļ���ʼλ��

//int main()
//{
//    FILE* pf = fopen("text.txt", "r");//�ļ����Ѿ����abcdef
//    if (!pf)
//    {
//        printf(strerror(errno));
//        return 0;
//    }
//    //��λ�ļ�
//    //fseek(pf, 2, SEEK_SET);//��ȡc
//    fseek(pf, -2, SEEK_END);//��ȡe
//    //fseek(pf, 2, SEEK_CUR);//��ȡc
//  //��ȡ�ļ�
//    int ch = fgetc(pf);
//    printf("%c\n", ch);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//ftell
//long int ftell(FILE* stream);
//�����ļ�ָ���������ʼλ�õ�ƫ����
//int main()
//{
//    FILE* pf = fopen("text.txt", "r");//�ļ����Ѿ����abcdef
//    if (!pf)
//    {
//        printf(strerror(errno));
//        return 0;
//    }
//    //��λ�ļ�
//      //fseek(pf,-2,SEEK_END);//��ȡe
//      //int pos=ftell(pf);
//      //printf("%d\n",pos);//��ӡ4 
//    int pos = ftell(pf);
//    printf("%d\n", pos);//��ӡ0
//    flcose(pf);
//    pf = NULL;
//    return 0;
//}

//rewind
//void rewind(FILE*stream);
//���ļ�ָ���λ�ûص��ļ�����ʼλ��

//int main()
//{
//    FILE* pf = fopen("text.txt", "r");//�ļ����Ѿ����abcdef
//    if (!pf)
//    {
//        printf(strerror(errno));
//        return 0;
//    }
//    int ch = fgetc(pf);
//    printf("%d", ch);//��ӡa
//    rewind(pf);//���ļ�ָ���λ�ûص��ļ���ʼλ��
//    ch = fgetc(pf);
//    printf("%d", ch);//��ӡa
//    flcose(pf);
//    pf = NULL;
//    return 0;
//}

//�ļ��������ж�
//feof();
//������feof�����ķ���ֵ��ֱ���ж��ļ��Ƿ������
//����Ӧ�����ڵ��ļ���ȡ����ʱ�ж��Ƕ�ȡʧ�ܣ����������ļ�β����

//int main()
//{
//    //EOF--- ֵΪ-1
//    //feof();//EOF--end 0f file - �ļ�������־,
//    FILE* pf = fopen("text.txt", "r");
//    if (!pf)
//    {
//        perror("text");//Ҳ�Ǵ��󱨸溯������strerror���ƣ�����perror����Ҫ��ͷ�ļ�
//        return 0;
//    }
//    int ch = fgetc(pf);
//    printf("%d\n", ch);//��ӡ-1�����ļ���û�ж�ȡ�Ķ���ʱ��ϵͳ���Զ�����EOF   ��ʱtext.txt��û���κζ���
//    return 0;
//}



//perror������ʾ

int main()
{
    FILE* pf = fopen("text2.txt", "r");//��ʱtext2.txt�ı��ļ���������
    if (!pf)
    {
        perror("text2.txt");//��ӡ���Ϊ��text2.txt: ������Ϣ
    }
    return 0;
}