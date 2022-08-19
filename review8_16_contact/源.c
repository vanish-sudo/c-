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
	struct Contact con;//con就是通讯录，包含1000个联系人的容量和存放了size个联系人
	if (!InitContact(&con))//初始化
		return 0;
	do {
		menu();
		printf("请选择:>");
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
		case Modify://改
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