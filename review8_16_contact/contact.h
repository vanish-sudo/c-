#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define DEFALUT_SIZE 3
#define MAX_NAME 20
#define MAx_SEX 5
#define MAX_TELE 12
#define MAX_ADDRESS 30
struct PeoInfo {
	char name[MAX_NAME];
	char sex[MAx_SEX];
	char tele[MAX_TELE];
	char address[MAX_ADDRESS];
	int age;
};

struct Contact {
	int size;
	int count;
	struct PeoInfo *data;

};

enum Choice {
	Exit,
	Add,
	Del,
	Search,       
	Modify,
    Show,          
	Sort       
};

void InitContact(struct Contact* pcon);
void AddContact(struct Contact* pcon);
void ShowContact(const struct Contact* pcon);
void DelContact(struct Contact*con);
void SearchContact(const struct Contact*con);
void ModifyContact(struct Contact*con);
void DestoryContact(struct Contact* con);


