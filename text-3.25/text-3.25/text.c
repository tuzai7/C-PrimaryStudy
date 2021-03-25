#define _CRT_SECURE_NO_WARNINGS 1

//atoi  把一个字符串转换成整型
//1.NULLL指针的问题
//2.空字符串
//3.”@！#￥ 特殊符号
//4.空白字符
//#include<stdio.h>
//#include<ctype.h>
//enum State
//{
//	VALID,
//	INVALID
//};
//enum State state = INVALID; //全局变量
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
//	//处理+-
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
//		printf("合法的 %d\n", ret);
//	}
//	else
//	{
//		printf("不合法的 %d\n", ret);
//	}
//	return 0;
//}

//
//#include <stdlib.h>
//#include <ctype.h>

//1. NULL指针的问题
//2. 空字符串
//3. @!#  特殊符号
//4. 空白字符

//enum State
//{
//	VALID,
//	INVALID
//};
//
////全局变量
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
//	//4. - 跳过
//	while (isspace(*str))
//	{
//		str++;
//	}
//	//处理正负号
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
//	//合法的
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
//		printf("合法的:%d\n", ret);
//	}
//	else
//	{
//		printf("不合法的:%d\n", ret);
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
//	if (strlen(src) < len) //判断源字符串长度是否小于len
//	{
//		len = strlen(src);
//	}
//
//	while (len--)
//	{
//		*dest++ = *src++;
//	}
//
//	*dest = '\0'; //strncat总是在结果后面添加'\0'，而不是用'\0'填充目标剩余空间
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

//找单生狗
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
//	//异或
//	for (i = 0; i < sz; i++)
//	{
//		num ^= arr[i];
//	}
//	//找出num的二进制中的1，找到第一个为1的位就行
//	int pos = 0;//记录是第几位为1
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//分组
//	//把arr数组中每隔元素中二进制的第pos位为1的全部异或在一起
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
//	//1. 把这个数所有的偶数位保留，奇数为0
//	//   把得到的数字，向左移动一位
//	//2. 把这个数所有的奇数位保留，偶数为0
//	//   把得到的数字，向右移动一位
//	//3. 把前面得到的2个数字按位或
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