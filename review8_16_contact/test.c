#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
//��ʼ��ͨѶ¼
void InitContact(struct Contact* pcon) {
	pcon->data = malloc(3 * sizeof(struct PeoInfo));
	if (pcon != NULL) {
		pcon->size = 0;
		pcon->count = DEFALUT_SIZE;
	}

}

//�������� ������������򷵻�0 (�Լ�ʵ��)
static int Add_copacity(struct Contact* pcon) {
	struct PeoInfo* ptr = (struct PeoInfo*)realloc(pcon->data, (pcon->count + 2) * sizeof(struct PeoInfo));
	if (ptr == NULL)
		return 0;
	(pcon)->data = ptr;
	pcon->count += 2;
	return 1;
}

void checkcapacity(struct Contact* pcon) {
	if (pcon->size == pcon->count) {
	struct PeoInfo*ptr=	(struct PeoInfo*)realloc(pcon->data, (pcon->count + 2) * sizeof(struct PeoInfo));
	if (ptr != NULL)
	{
		pcon->data = ptr;
		pcon->count += 2;
		printf("���ݳɹ�");
	}
	}
}

//������ϵ��
void AddContact(struct Contact* pcon) {

	//��������
	//checkcapacity(pcon);
	//printf("��������ϵ�˵�����:>\n");
	//scanf("%s", pcon->data[pcon->size].name);
	//printf("��������ϵ�˵��Ա�:>\n");
	//scanf("%s", pcon->data[pcon->size].sex);
	//printf("��������ϵ�˵�����:>\n");
	//scanf("%d", &(pcon->data[pcon->size].age));
	//printf("��������ϵ�˵ĵ绰:>\n");
	//scanf("%s", pcon->data[pcon->size].tele);
	//printf("��������ϵ�˵ĵ�ַ:>\n");
	//scanf("%s", pcon->data[pcon->size].address);
	//printf("��ӳɹ�\n");
	//pcon->size++;

	//�Լ�����

	//�ж�ͨѶ¼�Ƿ��Ѿ�����
	if (pcon->size == pcon->count) {
		if (Add_copacity(pcon) == 0) {
			printf("��ϵ������");
			return;
		}
	}
	printf("��������ϵ�˵�����:>\n");
	scanf("%s", pcon->data[pcon->size].name);
	printf("��������ϵ�˵��Ա�:>\n");
	scanf("%s", pcon->data[pcon->size].sex);
	printf("��������ϵ�˵�����:>\n");
	scanf("%d", &(pcon->data[pcon->size].age));
	printf("��������ϵ�˵ĵ绰:>\n");
	scanf("%s", pcon->data[pcon->size].tele);
	printf("��������ϵ�˵ĵ�ַ:>\n");
	scanf("%s", pcon->data[pcon->size].address);
	printf("��ӳɹ�\n");
	pcon->size++;


	//�ж�ͨѶ¼�Ƿ��Ѿ�����

	/*if (pcon->size == DEFALUT_SIZE) {
		printf("ͨѶ¼�������޷���ӣ�");
		return ;
	}*/
	/*printf("��������ϵ�˵�����:>\n");
	scanf("%s", pcon->data[pcon->size].name);
	printf("��������ϵ�˵��Ա�:>\n");
	scanf("%s", pcon->data[pcon->size].sex);
	printf("��������ϵ�˵�����:>\n");
	scanf("%d", &(pcon->data[pcon->size].age));
	printf("��������ϵ�˵ĵ绰:>\n");
	scanf("%s", pcon->data[pcon->size].tele);
	printf("��������ϵ�˵ĵ�ַ:>\n");
	scanf("%s", pcon->data[pcon->size].address);
	printf("��ӳɹ�\n");
	pcon->size++;*/
}

//չʾ��ϵ��
void ShowContact(const struct Contact* pcon) {
	if (pcon->size == 0) {
		printf("��ϵ��Ϊ��");
		return;
	}
	printf("%-s\t\t%-s\t\t%-s\t\t%-s\t\t%-s\n", "����", "�Ա�", "����", "�绰����", "��ַ");
	int i = 0;
	for (i = 0; i < pcon->size; i++) {
		printf("%-s\t\t%-s\t\t%-d\t\t%-s\t\t%-s\n", pcon->data[i].name, pcon->data[i].sex, pcon->data[i].age, pcon->data[i].tele, pcon->data[i].address);
	}
}

//������ϵ��
int seekContact( char*name, const struct Contact*pcon) {
	int i = 0;
	for (i = 0; i < DEFALUT_SIZE; i++) {
		if (0 == strcmp(name, pcon->data[i].name)) {
			return i;
		}
	}
	//û�ҵ�����-1;
return -1;
}


//ɾ����ϵ��
void DelContact(struct Contact* pcon) {
	char name[MAX_NAME] = {'\0'};
	int receive = 0;//���ܷ���ֵ
	int j = 0;
	printf("��������ɾ���˵�������>");
	scanf("%s", name);
	receive=seekContact(name, pcon);
	if (receive == -1)
	{
		printf("û�д���");
		return;
	}

	j = receive;
	for (j; j < DEFALUT_SIZE-1; j++) {
		pcon->data[j] = pcon->data[j + 1];
	}
	pcon->size--;
	printf("ɾ���ɹ�\n");
}

//������ϵ��
void SearchContact(const struct Contact* pcon) {
	char name[MAX_NAME] = { '\0' };
	int receive = 0;
	printf("�������ѯ��������>");
	scanf("%s", name);
	receive = seekContact(name, pcon);
	if (receive == -1) {
		printf("û�д���");
		return;
	}
	printf("%-s\t\t%-s\t\t%-s\t\t%-s\t\t%-s\n", "����", "�Ա�", "����", "�绰����", "��ַ");
	printf("%-s\t\t%-s\t\t%-d\t\t%-s\t\t%-s\n", pcon->data[receive].name,
		                                        pcon->data[receive].sex, 
		                                        pcon->data[receive].age, 
                                         		pcon->data[receive].tele, 
												pcon->data[receive].address);
}

//�޸���ϵ��
void ModifyContact(struct Contact* pcon){
	char name[MAX_NAME] = {'\0'};
	int receive = 0;//���ܷ���ֵ
	printf("���������޸���ϵ�˵�������>");
	scanf("%s", name);
	receive = seekContact(name, pcon);
	if (receive == -1)
	{
		printf("û�д���");
		return;
	}
	printf("��������ϵ�˵�����:>\n");
	scanf("%s", pcon->data[receive].name);
	printf("��������ϵ�˵��Ա�:>\n");
	scanf("%s", pcon->data[receive].sex);
	printf("��������ϵ�˵�����:>\n");
	scanf("%d", &(pcon->data[receive].age));
	printf("��������ϵ�˵ĵ绰:>\n");
	scanf("%s", pcon->data[receive].tele);
	printf("��������ϵ�˵ĵ�ַ:>\n");
	scanf("%s", pcon->data[receive].address);
	printf("�޸ĳɹ�\n");
}







//�ͷ��ڴ�
void DestoryContact(struct Contact* pcon) {
	free(pcon->data);
	pcon->data = NULL;
}
