
//ģ��ʵ��strlen������
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char *str)
//{
//	assert(str != NULL);
//	const char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len=my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}

//дһ����������������һ���ַ��������ݡ�
//#include<stdio.h>
//#include<string.h>
//void revrese(char *str)
//{
//	int len = strlen(str);
//	char*left = str;
//	char*right = str + len - 1;
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	revrese(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + m;
//		sum = sum + k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�
//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if (money > 0)
//	{
//		total = money * 2 - 1;
//		printf("total=%d\n", total);
//	}
//	return 0;
//
//
//}


//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 1;
//	int m = 100000;
//	printf("0��%d��ˮ�ɻ���Ϊ:\n",m);
//	for (i=0; i <= m; i++)
//	{
//		int count = 1;//ˮ�ɻ���������һλ
//		int temp = i;
//		int sum = 0;
//		while (temp / 10)//����whileѭ���жϸ�����λ��
//		{
//			count++;
//			temp /= 10;
//		}
//		temp = i;//���¸�temp��ֵ����Ϊtemp��whileѭ�����Ѿ����޸���
//		while (temp)//�жϸ����Ƿ���ˮ�ɻ���
//		{
//			sum += pow(temp % 10, count);//��temp������������ÿһλ����������pow��������ÿһλ��n�η���nΪ����λ��
//			temp /= 10;//��temp��10��ÿ�ν��������λ��ȥ
//		}
//		if (i == sum)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}


//��ӡͼ��
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//��ӡ�ϲ���
//	for (i = 0; i<line; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j<line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j<2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�²���
//	for (i = 0; i<line - 1; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//ģ��ʵ��ģ��ʵ�ֿ⺯��strcpy

//#include<stdio.h>
//#include<assert.h>
//
//void my_strcpy(char *str, char *scr)
//{
//	char *p = str;
//	assert(str != NULL);//���ԣ����ӡ��һ��������Ϣ
//	assert(scr != NULL);
//	while (*str++ = *scr++)
//	{
//		;
//	}
//	printf("p1 : %s\n", p);
//
//}
//int main()
//{
//	char p1[] = "helloworld";
//	char p2[] = "good";
//	my_strcpy(p1, p2);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
//void my_order(int *arr)
//{
//	int len = strlen(arr);
//	int *left = len;
//	int *right = left + len - 1;
//	while (left<right)
//	{
//		if (((*left) & 1) == 1)
//		{//��1��λ��ֵΪ1˵����ż�����ŵ�����
//			left++;
//		}
//		else if (((*right) & 1) == 0)
//		{//��1��λ��ֵΪ0˵�����������ŵ�ǰ��
//			right--;
//		}
//		else
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//
//}
//int main()
//{
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = strlen(arr);
//	my_order(arr);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d \n ", arr[len]);
//	}
//	return 0;
//}


#include <stdio.h>
void swap(int* left ,int len)
{
	int* right = left + len - 1;
	while (left<right){
		if (((*left) & 1) == 1)//��1��λ��ֵΪ1˵����ż�����ŵ�����
		{ 
			left++;
		}
		else if (((*right) & 1) == 0)//��1��λ��ֵΪ0˵�����������ŵ�ǰ��
		{
			right--;
		}
		else{
			int tmp = *left;
			*left = *right;
			*right = tmp;
		}
	}
}


int main(){
	int a[] = { 1, 2, 3, 4, 5, 6 };
	int sz = sizeof(a) / sizeof(a[0]);
	swap(a, sz);
	for (int  i = 0; i < 6; i++){
		printf("%d ", a[i]);
	}

	return 0;
}