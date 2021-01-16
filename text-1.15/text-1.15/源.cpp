#define _CRT_SECURE_NO_WARNINGS 1


//输出结果
//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//}

//输出是什么三角形
//#include<stdio.h>
//
//
//
//int main(){
//	int m, n, k;
//	while (scanf("%d%d%d", &m, &n, &k) != EOF){
//
//		if (m + n>k&&m + k>n&&n + k>m){
//
//			if (m == n&&n == k&&m == k)
//				printf("Equilateral triangle!\n");
//			else if (m == n || m == k || n == k)
//				printf("Isosceles triangle!\n");
//			else  printf("Ordinary triangle!\n");
//
//
//
//		}
//		else{
//			printf("Not a triangle!\n");
//		}
//
//
//
//	}
//
//输出三角形周长和面积
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a, b, c;
//	float C, S;
//	scanf("%d %d %d", &a, &b, &c);
//	C = a + b + c;
//	float p = (a + b + c) / 2.00;
//	S = sqrt(p*(p - a)*(p - b)*(p - c));
//	printf("circumference=%.2f area=%.2f", C, S);
//}

//输出一个数 从1到它 共有几个偶数几个奇数
#include<stdio.h>
int main()
{
	int n ;
	int a = 0;
	int b = 0;
	int i ;
	scanf("%d", &n);
	for ( i = 0; i< n; i++)
	{
		if (i%2 == 0)
			a++;
		else
			b++;    
	}
	printf("%d %d",a, b);
	return 0;
}
