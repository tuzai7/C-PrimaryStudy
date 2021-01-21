#define _CRT_SECURE_NO_WARNINGS 1

// 用函数判断素数
//#include<stdio.h>
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= i ; j++)
//	{
//		if (i%j == 0)
//		{
//			return 0;
//		}	
//			return 1;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

 //二分法函数查找
//#include<stdio.h>
//int binary_search(int arr[], int k,  int  sz)
//{
//	
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid]>k)
//		{
//			right=mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	
//		return -1;
//
//}
//int main()
//{
//	//有序的
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//二分查找的
//	//找到了，返回下标
//	//找不到，返回 -1
//	//arr是数组 arr作为参数 传参的时候传递的是数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}

//继续猜拳游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("***********************\n");
//	printf("***********************\n");
//	printf("*1.开始游戏**2.退出游戏*\n");
//	printf("***********************\n");
//	printf("***********************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请猜数字>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了请重新猜：\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了请重新猜：\n");
//		}
//		else
//		{
//			printf("恭喜你！猜对了\n");
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do{
//		menu();
//		printf("请输入你的选择");
//		scanf("%d", &input);
//		switch (1)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//
//			printf("退出游戏\n");
//			break;
//
//		default:
//			printf("请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

// KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//#include<stdio.h>
//int main()
//{
//	int year;
//	int month;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//		{
//			printf("31\n");
//		}
//		else if (month == 2)
//		{
//			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//			{
//				printf("29\n");
//			}
//			else{
//				printf("28\n");
//			}
//		}
//		else
//		{
//			printf("30\n");
//		}
//	}
//	return 0;
//}


//公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
//#include<stdio.h>
//int main()
//{
//	int arr[7] = { 0 };
//	int max = 0;
//	int min = 0;
//	int i = 0;
//	float sum = 0;
//	for (i = 0; i<7; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	min = arr[0];
//	for (i = 0; i<7; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//		if (arr[i]<min)
//		{
//			min = arr[i];
//		}
//	}
//	for (i = 0; i<7; i++)
//	{
//		sum += arr[i];
//	}
//	sum -= (max + min);
//	sum /= 5;
//	printf("%.2f\n", sum);
//	return 0;
//}

//用函数判断是否为闰年
//#include<stdio.h>
//int is_year(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_year(year) == 1)
//			printf("%d ", year);
//	}
//	
//}


//交换函数
#include<stdio.h>
void swap(int* px,int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("交换后: a=%d b=%d\n ", a, b);
	return 0;
}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定

//#include<stdio.h>
//void mul(int n)
//{
//	int i;
//	int j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d = %-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入要打印的表数：");
//	scanf("%d", &n);
//	mul(n);
//	return 0;
//}