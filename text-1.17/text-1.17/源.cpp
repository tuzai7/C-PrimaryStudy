#define _CRT_SECURE_NO_WARNINGS 1

/*
1.д���뽫��������С�������
2.дһ�������ӡ1-100֮������3�ı���������
3.���������� ���������������Լ��
4.��ӡ1000�굽2000��֮�������
5.дһ�����룺��ӡ100-200֮�������
6.��д������һ�� 1-100�����������г��ֶ��ٸ�����9
7.����1/1-1/2+1/3-1/4+1/5...+1/99-1/100��ֵ ��ӡ�����
8.��ʮ�����������ֵ
9.����Ļ�����9*9�˷��ھ���
10.��д������һ���������������в��Ҿ����ĳ����
   Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
11.����11�����ֵ��ʲô
12.����12 ����Ľ����ʲô
13.����13 ���ֵa�Ƕ���
 */

//#include<stdio.h>  // ��Ŀһ
//int main()
//{
//	int a ;
//	int b ;
//	int c ;
//	int s;
//	printf("�������������֣�\n");
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
//	printf("��С���������%d %d %d\n", a, b, c);
//
//}


//#include<stdio.h> //��Ŀ��
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

//#include<stdio.h>  //��Ŀ��
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

//#include<stdio.h>  //��Ŀ��
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
//	printf("���ж��ٸ��������������꣺%d ", count);
//	return 0;
//}


//#include<stdio.h>  //��Ŀ��
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
//#include<stdio.h>  //��Ŀ��
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
//	printf("�����ǣ�%d\n", count-1);
//	return 0;
//}	

//#include<stdio.h>  //��Ŀ��
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

#include<stdio.h>   /��Ŀ��

int main() 
{
	int a[10];
    int max;
	int i ;
	printf("������10��������");
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



//#include <stdio.h> //����11
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


//#include <stdio.h>  //����12
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


//#include <stdio.h>  //����13
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