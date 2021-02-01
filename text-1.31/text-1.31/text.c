#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<math.h>
//int main()
//{   //判断i是否为水仙花数
//	//1.计算i的位数n
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int tmp = i;
//		int n = 1;
//		while (tmp / 10)
//		{
//			n++;
//			tmp / 10;
//		}
//	
//		//2.获取i的每一位，并计算每一位的n的次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.判断并输出
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i+j);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n: %d\n", n);
	printf("*pFloat: %f\n", *pFloat);
	*pFloat = 9.0;
	printf("%d\n", n);
	printf("%f\n", *pFloat);
	return 0;
}