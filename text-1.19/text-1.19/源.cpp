﻿#define _CRT_SECURE_NO_WARNINGS 1
//演示多个字符从两端移动 向中间汇聚
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<CoreWindow.h>
int main()
{
	char arr1[] = "I love my girl Liuyilin ~~~~~";
	char arr2[] = "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);
		system("cls");
		left++;
		right--;

	}
	printf("%s\n", arr2);
	return 0;

}

