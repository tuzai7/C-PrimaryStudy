#define _CRT_SECURE_NO_WARNINGS 1

// �ú����ж�����
//#include<stdio.h>
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= i ; j++)
//	{
//		if (i%j == 0)
//		{
//			return 0;
//		}	
//			return 1;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

 //���ַ���������
//#include<stdio.h>
//int binary_search(int arr[], int k,  int  sz)
//{
//	
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid]>k)
//		{
//			right=mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	
//		return -1;
//
//}
//int main()
//{
//	//�����
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//���ֲ��ҵ�
//	//�ҵ��ˣ������±�
//	//�Ҳ��������� -1
//	//arr������ arr��Ϊ���� ���ε�ʱ�򴫵ݵ���������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}

//������ȭ��Ϸ
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("***********************\n");
//	printf("***********************\n");
//	printf("*1.��ʼ��Ϸ**2.�˳���Ϸ*\n");
//	printf("***********************\n");
//	printf("***********************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("�������>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´��������²£�\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С�������²£�\n");
//		}
//		else
//		{
//			printf("��ϲ�㣡�¶���\n");
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do{
//		menu();
//		printf("���������ѡ��");
//		scanf("%d", &input);
//		switch (1)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//
//			printf("�˳���Ϸ\n");
//			break;
//
//		default:
//			printf("������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

// KiKi����ĳ��ĳ���ж����죬��������ʵ�֡�������ݺ��·ݣ�������һ��������ж����졣
//#include<stdio.h>
//int main()
//{
//	int year;
//	int month;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//		{
//			printf("31\n");
//		}
//		else if (month == 2)
//		{
//			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//			{
//				printf("29\n");
//			}
//			else{
//				printf("28\n");
//			}
//		}
//		else
//		{
//			printf("30\n");
//		}
//	}
//	return 0;
//}


//����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ���
//#include<stdio.h>
//int main()
//{
//	int arr[7] = { 0 };
//	int max = 0;
//	int min = 0;
//	int i = 0;
//	float sum = 0;
//	for (i = 0; i<7; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	min = arr[0];
//	for (i = 0; i<7; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//		if (arr[i]<min)
//		{
//			min = arr[i];
//		}
//	}
//	for (i = 0; i<7; i++)
//	{
//		sum += arr[i];
//	}
//	sum -= (max + min);
//	sum /= 5;
//	printf("%.2f\n", sum);
//	return 0;
//}

//�ú����ж��Ƿ�Ϊ����
//#include<stdio.h>
//int is_year(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_year(year) == 1)
//			printf("%d ", year);
//	}
//	
//}


//��������
#include<stdio.h>
void swap(int* px,int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ��a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("������: a=%d b=%d\n ", a, b);
	return 0;
}


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��

//#include<stdio.h>
//void mul(int n)
//{
//	int i;
//	int j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d = %-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("������Ҫ��ӡ�ı�����");
//	scanf("%d", &n);
//	mul(n);
//	return 0;
//}