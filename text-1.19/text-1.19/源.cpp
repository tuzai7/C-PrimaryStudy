#define _CRT_SECURE_NO_WARNINGS 1
//演示多个字符从两端移动 向中间汇聚
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<CoreWindow.h>
//int main()
//{
//	char arr1[] = "I love my girl Liuyilin ~~~~~";
//	char arr2[] = "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//	return 0;
//
//}


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


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***********************\n");
	printf("***********************\n");
	printf("*1.开始游戏**2.退出游戏*\n");
	printf("***********************\n");
	printf("***********************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("请猜数字>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了请重新猜：\n");
		}
		else if (guess < ret)
		{
			printf("猜小了请重新猜：\n");
		}
		else
		{
			printf("恭喜你！猜对了\n");
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请输入你的选择");
		scanf("%d", &input);
		switch (1)
		{
		case 1:
			game();
			break;
		case 2:

			printf("退出游戏\n");
			break;

		default:
			printf("请重新选择\n");
			break;
		}
	} 
	while (input);
	return 0 ;
}