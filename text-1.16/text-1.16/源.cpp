#define _CRT_SECURE_NO_WARNINGS 1

//����ϰ��д�������ַ���ǰ��

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", num);
//	if (5 == num)
//		printf("yes\n");
//}

//�������100���ڵ�����
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		if (i <= 100)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}


//����ѧϰ switch ���


//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//
//}


//����whileѭ��

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//����EOF��ʹ��

//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch = getchar();
//		putchar(ch);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch = getchar();
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//����Sleepʹ��

//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//		Sleep(100);
//
//	}
//}

//����ѭ�����Σ���Ϊ0��

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}
//


//��������n�Ľ׳�

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//---����1��+2��+3��+��������+10��

#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1; //ÿ�μ����1��ʼ
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = ret*n;
		sum = sum + ret;

	}
	printf("sum=%d\n", sum);
	return 0;
}
