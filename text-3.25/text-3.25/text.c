#define _CRT_SECURE_NO_WARNINGS 1

//atoi  ��һ���ַ���ת��������
//1.NULLLָ�������
//2.���ַ���
//3.��@��#�� �������
//4.�հ��ַ�
//#include<stdio.h>
//#include<ctype.h>
//enum State
//{
//	VALID,
//	INVALID
//};
//enum State state = INVALID; //ȫ�ֱ���
//int my_atoi(const char* str)
//{
//	int flag = 0;
//	//1
//	if (str == NULL)
//	{
//		return 0;
//	}
//	//2
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	//4  
//	while (isspace(*str))
//	{
//		str++;
//	}
//	//����+-
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long num = 0;
//	while (*str != '\0')
//	{
//		if (isdigit(*str))
//		{
//			num = num * 10 + flag*(*str-'0');
//			if (num > INT_MAX || num < INT_MIN)
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			return 0;
//		}
//		str++;
//	}
//	state = VALID;
//	return (int)num;
//}
//int main()
//{
//	int ret = my_atoi("-11111234");
//	if (state == VALID)
//	{
//		printf("�Ϸ��� %d\n", ret);
//	}
//	else
//	{
//		printf("���Ϸ��� %d\n", ret);
//	}
//	return 0;
//}

//
//#include <stdlib.h>
//#include <ctype.h>

//1. NULLָ�������
//2. ���ַ���
//3. @!#  �������
//4. �հ��ַ�

//enum State
//{
//	VALID,
//	INVALID
//};
//
////ȫ�ֱ���
//enum State state = INVALID;
//
//int my_atoi(const char* str)
//{
//	int flag = 1;
//	//1.
//	if (str == NULL)
//		return 0;
//	//2.
//	if (*str == '\0')
//		return 0;
//	//4. - ����
//	while (isspace(*str))
//	{
//		str++;
//	}
//	//����������
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long num = 0;
//	while (*str != '\0')
//	{
//		if (isdigit(*str))
//		{
//			num = num * 10 + flag* (*str - '0');
//			if (num > INT_MAX || num < INT_MIN)
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			return 0;
//		}
//		str++;
//	}
//
//	//�Ϸ���
//	state = VALID;
//	return (int)num;
//}
//
//
//int main()
//{
//	int ret = my_atoi(" 113");
//	if (state == VALID)
//	{
//		printf("�Ϸ���:%d\n", ret);
//	}
//	else
//	{
//		printf("���Ϸ���:%d\n", ret);
//	}
//
//	return 0;
//}



//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//char* MyStrncat(char* dest, char* src, size_t len)
//{
//	assert(NULL != dest && NULL != src);
//
//	char* ret = dest;
//	int offset = 0;
//	while (*dest)
//	{
//		*dest++;
//	}
//
//	if (strlen(src) < len) //�ж�Դ�ַ��������Ƿ�С��len
//	{
//		len = strlen(src);
//	}
//
//	while (len--)
//	{
//		*dest++ = *src++;
//	}
//
//	*dest = '\0'; //strncat�����ڽ���������'\0'����������'\0'���Ŀ��ʣ��ռ�
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[6] = "World";
//	char arr2[15] = "Hello ";
//	printf("%s\n", MyStrncat(arr2, arr1, 9));
//	return 0;
//}

//
//#include<stdio.h>
//#include<assert.h>
//char* my_strncpy(char*dest, const char*src)
//{
//	assert(*dest&&*src);
//	char * cp = dest;
//	while (*cp)
//	{
//		cp++;
//	}
//	while (*cp++ = *src++)
//	{
//		;
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[20] = "*******";
//	char arr2[] = "abc";
//	my_strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//�ҵ�����
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int num = 0;
//	int n1 = 0;
//	int n2 = 0;
//	//���
//	for (i = 0; i < sz; i++)
//	{
//		num ^= arr[i];
//	}
//	//�ҳ�num�Ķ������е�1���ҵ���һ��Ϊ1��λ����
//	int pos = 0;//��¼�ǵڼ�λΪ1
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//����
//	//��arr������ÿ��Ԫ���ж����Ƶĵ�posλΪ1��ȫ�������һ��
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			n1 ^= arr[i];
//		}
//	}
//
//	n2 = num^n1;
//
//	printf("%d %d\n", n1, n2);
//
//	return 0;
//}

//#include<stdio.h>
//#define SWAP(X)  X=(((X&0x55555555)<<1) | ( (X&0xaaaaaaaa)>>1))
//int main()
//{
//	int a = 10;
//	//1. ����������е�ż��λ����������Ϊ0
//	//   �ѵõ������֣������ƶ�һλ
//	//2. ����������е�����λ������ż��Ϊ0
//	//   �ѵõ������֣������ƶ�һλ
//	//3. ��ǰ��õ���2�����ְ�λ��
//
//	//00000000000000000000000001011010
//	//10101010101010101010101010101010
//	//
//	//01010101010101010101010101010101
//	//0x55555555
//	
//	printf("%d\n", SWAP(a));
//	//00000000000000000000000000000101 - 5
//	return 0;
//}


#include<stdio.h>
#include<stddef.h>

#define OFFSETOF(struct_name,men_name)  (int)&(((struct_name*)0)->men_name)

struct S
{
	char c;
	int i;
	double d;
};
int main()
{
	printf("%d\n", OFFSETOF(struct S, c));
	printf("%d\n", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, d));
	return 0;
}