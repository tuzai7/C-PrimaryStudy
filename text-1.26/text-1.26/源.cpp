#define _CRT_SECURE_NO_WARNINGS 1

//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	c = a ^ b;//c的二进制有几个1就是有几个不同
//	for (i = 0; i < 32; i++)
//	{
//		if (((c >> i) & 1) == 1)//每次左移都拿c的最后一个二进制位按位与1，如果得出的结果是1，则计数器自增一次
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include <stdio.h>
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	//偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	return 0;
//}


#include<stdio.h>
int count_one(int n)
{
	int count = 0; 

	while (n != 0)  
	{
		if (n % 2 == 1) //满足尾数是1.
			count++;
		n /= 2;        //除2，右移一位。(二进制)
	}
	return count;
}

int main()
{
	int n;
	printf("请输入一个数：\n");
	while (scanf("%d", &n) != EOF)  
	{
		printf("二进制中一的个数：%d \n", count_one(n));
	}
	return 0;
}

