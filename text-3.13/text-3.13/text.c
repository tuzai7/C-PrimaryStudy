#define _CRT_SECURE_NO_WARNINGS 1


//通讯录：1000人
//名字 年龄 性别 电话 住址 
//1.增加一个人的信息
//2.删除一个人的信息
//3.查找一个人的信息
//4.修改一个人的信息
//5.显示通讯录中所有人的信息
//6.排序
//0.退出程序

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
	struct Contact con;//创建一个通讯录
	//初始化通讯录
	InitContact(&con);//传递con地址
	do
	{

		menu();
		printf("请选择功能：>");
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
			printf("退出通讯录！\n");
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