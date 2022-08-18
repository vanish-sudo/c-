#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
//初始化通讯录
void InitContact(struct Contact* pcon) {
	pcon->data = malloc(3 * sizeof(struct PeoInfo));
	if (pcon != NULL) {
		pcon->size = 0;
		pcon->count = DEFALUT_SIZE;
	}

}

//增加容量 如果不能增加则返回0 (自己实现)
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
		printf("增容成功");
	}
	}
}

//增加联系人
void AddContact(struct Contact* pcon) {

	//鹏哥做的
	//checkcapacity(pcon);
	//printf("请输入联系人的姓名:>\n");
	//scanf("%s", pcon->data[pcon->size].name);
	//printf("请输入联系人的性别:>\n");
	//scanf("%s", pcon->data[pcon->size].sex);
	//printf("请输入联系人的年龄:>\n");
	//scanf("%d", &(pcon->data[pcon->size].age));
	//printf("请输入联系人的电话:>\n");
	//scanf("%s", pcon->data[pcon->size].tele);
	//printf("请输入联系人的地址:>\n");
	//scanf("%s", pcon->data[pcon->size].address);
	//printf("添加成功\n");
	//pcon->size++;

	//自己做的

	//判断通讯录是否已经满了
	if (pcon->size == pcon->count) {
		if (Add_copacity(pcon) == 0) {
			printf("联系人已满");
			return;
		}
	}
	printf("请输入联系人的姓名:>\n");
	scanf("%s", pcon->data[pcon->size].name);
	printf("请输入联系人的性别:>\n");
	scanf("%s", pcon->data[pcon->size].sex);
	printf("请输入联系人的年龄:>\n");
	scanf("%d", &(pcon->data[pcon->size].age));
	printf("请输入联系人的电话:>\n");
	scanf("%s", pcon->data[pcon->size].tele);
	printf("请输入联系人的地址:>\n");
	scanf("%s", pcon->data[pcon->size].address);
	printf("添加成功\n");
	pcon->size++;


	//判断通讯录是否已经满了

	/*if (pcon->size == DEFALUT_SIZE) {
		printf("通讯录已满，无法添加！");
		return ;
	}*/
	/*printf("请输入联系人的姓名:>\n");
	scanf("%s", pcon->data[pcon->size].name);
	printf("请输入联系人的性别:>\n");
	scanf("%s", pcon->data[pcon->size].sex);
	printf("请输入联系人的年龄:>\n");
	scanf("%d", &(pcon->data[pcon->size].age));
	printf("请输入联系人的电话:>\n");
	scanf("%s", pcon->data[pcon->size].tele);
	printf("请输入联系人的地址:>\n");
	scanf("%s", pcon->data[pcon->size].address);
	printf("添加成功\n");
	pcon->size++;*/
}

//展示联系人
void ShowContact(const struct Contact* pcon) {
	if (pcon->size == 0) {
		printf("联系人为空");
		return;
	}
	printf("%-s\t\t%-s\t\t%-s\t\t%-s\t\t%-s\n", "名字", "性别", "年龄", "电话号码", "地址");
	int i = 0;
	for (i = 0; i < pcon->size; i++) {
		printf("%-s\t\t%-s\t\t%-d\t\t%-s\t\t%-s\n", pcon->data[i].name, pcon->data[i].sex, pcon->data[i].age, pcon->data[i].tele, pcon->data[i].address);
	}
}

//搜索联系人
int seekContact( char*name, const struct Contact*pcon) {
	int i = 0;
	for (i = 0; i < DEFALUT_SIZE; i++) {
		if (0 == strcmp(name, pcon->data[i].name)) {
			return i;
		}
	}
	//没找到返回-1;
return -1;
}


//删除联系人
void DelContact(struct Contact* pcon) {
	char name[MAX_NAME] = {'\0'};
	int receive = 0;//接受返回值
	int j = 0;
	printf("请输入所删除人的姓名：>");
	scanf("%s", name);
	receive=seekContact(name, pcon);
	if (receive == -1)
	{
		printf("没有此人");
		return;
	}

	j = receive;
	for (j; j < DEFALUT_SIZE-1; j++) {
		pcon->data[j] = pcon->data[j + 1];
	}
	pcon->size--;
	printf("删除成功\n");
}

//查找联系人
void SearchContact(const struct Contact* pcon) {
	char name[MAX_NAME] = { '\0' };
	int receive = 0;
	printf("请输入查询的姓名：>");
	scanf("%s", name);
	receive = seekContact(name, pcon);
	if (receive == -1) {
		printf("没有此人");
		return;
	}
	printf("%-s\t\t%-s\t\t%-s\t\t%-s\t\t%-s\n", "名字", "性别", "年龄", "电话号码", "地址");
	printf("%-s\t\t%-s\t\t%-d\t\t%-s\t\t%-s\n", pcon->data[receive].name,
		                                        pcon->data[receive].sex, 
		                                        pcon->data[receive].age, 
                                         		pcon->data[receive].tele, 
												pcon->data[receive].address);
}

//修改联系人
void ModifyContact(struct Contact* pcon){
	char name[MAX_NAME] = {'\0'};
	int receive = 0;//接受返回值
	printf("请输入所修改联系人的姓名：>");
	scanf("%s", name);
	receive = seekContact(name, pcon);
	if (receive == -1)
	{
		printf("没有此人");
		return;
	}
	printf("请输入联系人的姓名:>\n");
	scanf("%s", pcon->data[receive].name);
	printf("请输入联系人的性别:>\n");
	scanf("%s", pcon->data[receive].sex);
	printf("请输入联系人的年龄:>\n");
	scanf("%d", &(pcon->data[receive].age));
	printf("请输入联系人的电话:>\n");
	scanf("%s", pcon->data[receive].tele);
	printf("请输入联系人的地址:>\n");
	scanf("%s", pcon->data[receive].address);
	printf("修改成功\n");
}







//释放内存
void DestoryContact(struct Contact* pcon) {
	free(pcon->data);
	pcon->data = NULL;
}
