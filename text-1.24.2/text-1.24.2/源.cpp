#define _CRT_SECURE_NO_WARNINGS 1
//ð������
//#include<stdio.h>
//void bubble_sort(int arr[], int  sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				
//			}
//		}
//	
//	}
//}
//
//int main()
//{
//
//	int arr[] = {9,8,7,6,5,4,3,2,1};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//}

//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�


//#include<stdio.h>
//void init(int arr[])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//}
//void print(int arr[])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("arr[%d]=%d\n", i, arr[i]);
//	}
//}
//void reverse(int arr[])
//{
//	for (int i = 9; i >= 0; i--)
//	{
//		printf("%d  ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10];
//	init(arr);
//	print(arr);
//	reverse(arr);
//	return 0;
//}

//������A�е����ݺ�����B�е����ݽ��н�����������һ����

#include <stdio.h>
int main() 
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int b[5] = { 4, 5, 6, 7, 8 };

	for (int i = 0; i < 5; i++)
	{

		int tmp;
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
		printf(" %d", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf(" %d", b[i]);
	}
	return 0;
}
