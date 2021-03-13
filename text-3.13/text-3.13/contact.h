
#include<stdio.h>
#include<string.h>
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#define MAX 1000

//����һ������Ϣ�Ľṹ��
struct PeoInfo
{
	char name[20];
	int age;
	char sex[5];
	char tele[12];
	char addr[30];
};


//ͨѶ¼�Ľṹ��
struct Contact
{
	struct PeoInfo data[MAX]; //1000�˵Ŀռ�
	int sz; //��ʾͨѶ¼��ǰ��ŵ��˵���Ϣ����

};


//����������

//��ʼ��ͨѶ¼�ĺ���
void InitContact(struct Contact* pc);

//����һ���˵���Ϣ
void AddContact(struct Contact* pc);

//��ӡͨѶ¼�е���Ϣ
void ShowContact(const struct Contact* pc);

//ɾ��һ���˵���Ϣ
void DelContact(struct Contact* pc);

//����ָ����ϵ��
void SearchContcat(struct Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(struct Contact* pc);