#define _CRT_SECURE_NO_WARNINGS 1
//模仿qsort的功能实现一个通用的冒泡排序
//#include<stdio.h>
//#include<stdlib.h>
//
//int comp(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//void Swap(int*a, int* b)
//{
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void Bubblesort(int* arr, int size, int width, int(*comp)(const void* a, const void* b))
//{
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = size - 1; j>i; j--)
//		{
//			int ret = comp(&arr[j - 1], &arr[j]);
//			if (ret>0)
//			{
//				Swap(&arr[j - 1], &arr[j]);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr, size, sizeof(arr[0]), comp);
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void *x, const void *y)     //整型
{                                          
return (*(int*)x) - (*(int*)y);
}

int cmp1(const void *x, const void *y)   //字符型
{
	return (*(char*)x) - (*(char*)y);
}

int cmp2(const void *x, const void *y)   //字符串
{
	return strcmp(*(char**)x, *(char**)y);
}

int cmp3(const void *x, const void *y)  //浮点型
{
	return (*(double*)x) - (*(double*)y);
}

int main()
{
	int i = 0;
	int arr1[] = { 1, 25, 36, 58, 49, 17, 66, 77, 9 };
	qsort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), cmp);
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	
	
	char arr2[] = { 'w', 'h', 'g', 'a', 'f', 'c', 'r', 'u', 't' };
	qsort(arr2, sizeof(arr2) / sizeof(arr2[0]), sizeof(arr2[0]), cmp1);
	for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	
	
	char *arr3[] = { "asd", "tgb", "ujn", "ghj", "bn" };
	qsort(arr3, sizeof(arr3) / sizeof(*arr3), sizeof(*arr3), cmp2);
	for (i = 0; i < sizeof(arr3) / sizeof(*arr3); i++)
	{
		printf("%s ", arr3[i]);
	}
	printf("\n");
	
	
	double arr4[] = { 9.1,8.1,7.1,6.1,5.1,4.1,3.1,2.1,1.1,0.1 };
	qsort(arr4, sizeof(arr4) / sizeof(arr4[0]), sizeof(arr4[0]), cmp3);
	for (i = 0; i < sizeof(arr4) / sizeof(arr4[0]); i++)
	{
		printf("%.2f ", arr4[i]);
	}
	printf("\n");
	return 0;
}
