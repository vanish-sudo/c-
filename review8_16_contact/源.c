#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu() {
	printf("******************************\n");
	printf("** 1.Add           2.del    **\n");
	printf("** 3.search        4.modify **\n");
	printf("** 5.show          6.sort   **\n");
	printf("** 0.exit          7,save   **\n");
	printf("******************************\n");
}

int main() {
	int input = 0;
	struct Contact con;//con����ͨѶ¼������1000����ϵ�˵������ʹ����size����ϵ��
	if (!InitContact(&con))//��ʼ��
		return 0;
	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case Exit:
			DestoryContact(&con);
			break; 
		case Add:
			AddContact(&con);
			break;
		case Del:
			DelContact(&con);
			break;
		case Search:
			SearchContact(&con); 
			break;
		case Modify://��
			ModifyContact(&con);
			break;
		case Show:
			ShowContact(&con);
			break;
		case Sort:
			break;
		case Save:
			SaveContact(&con);
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}