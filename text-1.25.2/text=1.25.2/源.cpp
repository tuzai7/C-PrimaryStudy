#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	int a = 5;
	int b = 2;
	printf("����ǰ�ı�����a=%d  b=%d \n",a,b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("������ı����� a=%d  b=%d \n",a,b);
	return 0;
}