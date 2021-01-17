#define _CRT_SECURE_NO_WARNINGS 1

/*
1.写代码将三个数从小到大输出
2.写一个代码打印1-100之间所有3的倍数的数字
3.给定两个数 求这两个数的最大公约数
4.打印1000年到2000年之间的闰年
5.写一个代码：打印100-200之间的素数
6.编写程序数一下 1-100的所有整数中出现多少个数字9
7.计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100的值 打印出结果
8.求十个整数中最大值
9.在屏幕上输出9*9乘法口诀表
10.编写代码在一个整形有序数组中查找具体的某个数
   要求：找到了就打印数字所在的下标，找不到则输出：找不到。
11.代码11输出的值是什么
12.代码12 输出的结果是什么
13.代码13 输出值a是多少
 */

//#include<stdio.h>  // 题目一
//int main()
//{
//	int a ;
//	int b ;
//	int c ;
//	int s;
//	printf("请输入三个数字：\n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b )
//	{
//		s = b;
//		b = a;
//		a = s;
//	}
//	if (a > c)
//	{
//		s = c;
//		c = a;
//		a = s;
//	}
//	if (b > c)
//	{
//		s = c;
//		c = b;
//		b = s;
//	}
//	printf("从小到大输出：%d %d %d\n", a, b, c);
//
//}


//#include<stdio.h> //题目二
//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>  //题目三
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int s = 0;
//	scanf("%d %d", &a, &b);
//	while (s = a % b)
//	{
//		a = b;
//		b = s;
//	}
//	printf("%d\n", b);
//	return 0;
//
//}

//#include<stdio.h>  //题目四
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("共有多少个符合条件的闰年：%d ", count);
//	return 0;
//}


//#include<stdio.h>  //题目五
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//#include<stdio.h>  //题目六
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			count++;
//			
//		}
//		if (i % 10 == 9)
//		{
//			count++;
//			
//		}
//	}
//	printf("总数是：%d\n", count-1);
//	return 0;
//}	

//#include<stdio.h>  //题目七
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	int flag = 1.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//
//	}
//	printf("%f\n", sum);
//	return 0;
//}

#include<stdio.h>   /题目八

int main() 
{
	int a[10];
    int max;
	int i ;
	printf("请输入10个整数：");
	for (i = 0; i < 10; i++) 
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	for ( i = 0; i < 10; i++) 
	    {
		if (a[i]>max) 
		{
			max = a[i];
			i++;
		}
	}
	printf("max=%d", max);	
	return 0;
}



//#include <stdio.h> //代码11
//
//   int main()
//{
//	   int i = 0;
//	   for (i = 0; i<10; i++)
//	   {
//		   if (i = 5)
//			   printf("%d ", i);
//	   }
//	   return 0;
//   }


//#include <stdio.h>  //代码12
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}


//#include <stdio.h>  //代码13
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}