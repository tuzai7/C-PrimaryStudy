#define _CRT_SECURE_NO_WARNINGS 1

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

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
//	printf("��������Ҫ��ӡ��������");
//	scanf("%d", &n);
//	recur(n);
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ݹ飺
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
//	printf("������������֣�\n");
//	scanf("%d", &n);
//	fac(n);
//	printf("���Ľ׳�Ϊ��%d\n", fac(n));
//	return 0;
//}

//�ǵݹ飺
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
//	printf("�������������:\n");
//	scanf("%d", &n);
//	fac(n);
//	printf("���Ľ׳�Ϊ:%d\n",fac(n));
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ݹ飺
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
//	printf("�ַ����ĳ���Ϊ��%d\n", my_strlen(arr));
//}

//�ǵݹ飺
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
//	printf("�ַ����ĳ���Ϊ��%d\n", my_strlen(arr));
//}


//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//�ݹ飺
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


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//���룺1729�������19

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
//	printf("������������֣�\n");
//	scanf("%d", &n);
//	DigitSum(n);
//	printf("�䷵��ֵΪ��%d\n",DigitSum(n));
//	return 0;
//
//}
//


//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

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
	printf("�������������:\n");
	scanf("%d", &n);
	printf("�η���:\n");
	scanf("%d", &k);
	biqu(n,k);
	printf("��k�η����Ϊ��%d\n", biqu(n,k));
	return 0;
}

//����쳲�������
//�ݹ�
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
//	printf("���������");
//	scanf("%d", &n);
//	fibo(n);
//	printf("쳲�����ֵΪ��%d\n", fibo(n));
//	return 0;
//}

//�ǵݹ飺
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
//		printf("���������");
//		scanf("%d", &n);
//		fibo(n);
//		printf("쳲�����ֵΪ��%d\n", fibo(n));
//		return 0;
//}