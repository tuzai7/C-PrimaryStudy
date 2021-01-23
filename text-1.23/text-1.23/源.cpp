#define _CRT_SECURE_NO_WARNINGS 1

//递归方式实现打印一个整数的每一位

//#include<stdio.h>
//void recur(int n)
//{
//	if (n / 10 == 0)    
//	{
//		printf("%d ", n);
//	}
//	else 
//	{
//		recur(n / 10);
//		printf("%d ", n%10);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入你要打印的整数：");
//	scanf("%d", &n);
//	recur(n);
//	return 0;
//}

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//递归：
//#include<stdio.h>
//int  fac(int n)
//{
//	if (n < 2)
//	{
//		return 1;
//	}
//	else
//	{
//		n = n*fac(n - 1);
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入你的数字：\n");
//	scanf("%d", &n);
//	fac(n);
//	printf("他的阶乘为：%d\n", fac(n));
//	return 0;
//}

//非递归：
//#include<stdio.h>
//int fac(int N)
//{
//	int ret = 1;
//	for (int i = 2; i <= N; i++)
//	{
//		ret *= i;
//	}
//
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入你的数字:\n");
//	scanf("%d", &n);
//	fac(n);
//	printf("他的阶乘为:%d\n",fac(n));
//	return 0;
//}


//递归和非递归分别实现strlen
//递归：
//#include<stdio.h>
//int my_strlen(char *arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "hello world";
//	my_strlen(arr);
//	printf("字符串的长度为：%d\n", my_strlen(arr));
//}

//非递归：
//#include<stdio.h>
//int my_strlen(char *arr)
//{
//	int count = 0;
//	while(*arr != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello world";
//	my_strlen(arr);
//	printf("字符串的长度为：%d\n", my_strlen(arr));
//}


//编写一个函数 reverse_string(char * string)（递归实现）
//
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//
//要求：不能使用C函数库中的字符串操作函数。
//递归：
//#include<stdio.h>
//void reverse_string(char * string)
//{
//	if (*string != '\0')
//	{
//		reverse_string(string + 1);
//	}
//	else
//	{
//		printf("%c", *string);
//	}
//	printf("%c", *string);
//}
//int main()
//{
//	char *string = "abcdef";
//	reverse_string(string);
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//输入：1729，输出：19

//#include<stdio.h>
//int DigitSum(int n)
//{
//	
//	if (n <10)                                      
//	{
//		return n;
//	}
//	else
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入你的数字：\n");
//	scanf("%d", &n);
//	DigitSum(n);
//	printf("其返回值为：%d\n",DigitSum(n));
//	return 0;
//
//}
//


//编写一个函数实现n的k次方，使用递归实现。

#include<stdio.h>
int biqu(int n,int k)
{
	if (k <= 0)
		return 1;
	else
		return n*biqu(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	printf("请输入你的数字:\n");
	scanf("%d", &n);
	printf("次方数:\n");
	scanf("%d", &k);
	biqu(n,k);
	printf("其k次方结果为：%d\n", biqu(n,k));
	return 0;
}

//计算斐波那契数
//递归
//#include<stdio.h>
//int fibo(int n)
//{
//	if (n <=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fibo(n - 1) + fibo(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("你输入的数");
//	scanf("%d", &n);
//	fibo(n);
//	printf("斐波那契值为：%d\n", fibo(n));
//	return 0;
//}

//非递归：
//#include<stdio.h>
//int fibo(int n)
//{
//	int a = 1;
//	int	b = 1;
//	int c = 1;
//
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//			
//int main()
//{
//		int n = 0;
//		printf("你输入的数");
//		scanf("%d", &n);
//		fibo(n);
//		printf("斐波那契值为：%d\n", fibo(n));
//		return 0;
//}