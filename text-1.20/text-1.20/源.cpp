#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int chinese;
//	int math;
//	int english;
//	printf("��ֱ��������ġ���ѧ������ɼ�");
//	while (scanf("%d %d %d", &chinese, &math, &english) != EOF)
//	{
//		int max = chinese > math ? chinese : math;
//		max = max > english ? max : english;
//		printf("%d\n", max);
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	char ch;
	while (scanf("%c", &ch) != EOF)
	{
		
		if (ch >= 'a'&& ch <= 'z')
		{
			ch = ch - 32;
			
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch + 32;
			
		}   
		printf("%c\n", ch);
		
	}
	return 0;
}

//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****************************\n");
//	printf("*1.��ʼ��Ϸ********2.�˳���Ϸ*\n");
//	printf("*****************************\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("���һ�����֣�");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		srand((unsigned int)time(NULL));
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//
//}