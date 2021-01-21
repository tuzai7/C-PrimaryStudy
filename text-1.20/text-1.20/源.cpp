#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int chinese;
//	int math;
//	int english;
//	printf("请分别输入语文、数学、外语成绩");
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
//	printf("*1.开始游戏********2.退出游戏*\n");
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
//		printf("请猜一个数字：");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
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
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//
//}