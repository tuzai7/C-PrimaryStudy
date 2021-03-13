
#include<stdio.h>
#include<string.h>
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#define MAX 1000

//描述一个人信息的结构体
struct PeoInfo
{
	char name[20];
	int age;
	char sex[5];
	char tele[12];
	char addr[30];
};


//通讯录的结构体
struct Contact
{
	struct PeoInfo data[MAX]; //1000人的空间
	int sz; //表示通讯录当前存放的人的信息个数

};


//函数的声明

//初始化通讯录的函数
void InitContact(struct Contact* pc);

//增加一个人的信息
void AddContact(struct Contact* pc);

//打印通讯录中的信息
void ShowContact(const struct Contact* pc);

//删除一个人的信息
void DelContact(struct Contact* pc);

//查找指定联系人
void SearchContcat(struct Contact* pc);

//修改指定联系人
void ModifyContact(struct Contact* pc);