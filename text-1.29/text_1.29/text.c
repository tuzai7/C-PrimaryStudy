#define _CRT_SECURE_NO_WARNINGS 1

//ģ��ʵ��strlen����
#include<stdio.h>
#include<assert.h>
int my_strlen(const char*str)
{
	assert(str != NULL);
	const char* start = str;
	while (*str)
	{
		str++;
	}
	return str - start;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}