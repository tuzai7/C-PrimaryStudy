#define _CRT_SECURE_NO_WARNINGS 1

//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	c = a ^ b;//c�Ķ������м���1�����м�����ͬ
//	for (i = 0; i < 32; i++)
//	{
//		if (((c >> i) & 1) == 1)//ÿ�����ƶ���c�����һ��������λ��λ��1������ó��Ľ����1�������������һ��
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//#include <stdio.h>
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	//ż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	return 0;
//}


#include<stdio.h>
int count_one(int n)
{
	int count = 0; 

	while (n != 0)  
	{
		if (n % 2 == 1) //����β����1.
			count++;
		n /= 2;        //��2������һλ��(������)
	}
	return count;
}

int main()
{
	int n;
	printf("������һ������\n");
	while (scanf("%d", &n) != EOF)  
	{
		printf("��������һ�ĸ�����%d \n", count_one(n));
	}
	return 0;
}

