#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	int a = 5;
	int b = 2;
	printf("交换前的变量：a=%d  b=%d \n",a,b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("交换后的变量： a=%d  b=%d \n",a,b);
	return 0;
}