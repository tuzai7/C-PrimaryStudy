#define _CRT_SECURE_NO_WARNINGS 1


//ͨѶ¼��1000��
//���� ���� �Ա� �绰 סַ 
//1.����һ���˵���Ϣ
//2.ɾ��һ���˵���Ϣ
//3.����һ���˵���Ϣ
//4.�޸�һ���˵���Ϣ
//5.��ʾͨѶ¼�������˵���Ϣ
//6.����
//0.�˳�����

#include<stdio.h>
#include"contact.h"

void menu()
{
	printf("********************************\n");
	printf("***  1. add        2. del    ***\n");
	printf("***  3.search      4.modify  ***\n");
	printf("***  5.show        6.sort    ***\n");
	printf("***         0.exit           ***\n");
	printf("********************************\n");
}
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
void test()
{
	int input = 0;
	struct Contact con;//����һ��ͨѶ¼
	//��ʼ��ͨѶ¼
	InitContact(&con);//����con��ַ
	do
	{

		menu();
		printf("��ѡ���ܣ�>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContcat(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼��\n");
			break;
		case SORT:
			break;

		}
	} while (input);
}
int main()
{
	test();
	return 0;
}