#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}
#include <stdio.h>
#include <string.h>

//
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}
#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char*ret = dest;
//	while (*dest++ = *src++)//�����ַ���������'\0'
//	{
//		;
//	}
//	return ret;//���ص�Ŀ��ռ����ʼ��ַ
//}
//
//int main()
//{
//	//�ַ���������
//	char arr1[20] = "*************";
//	char arr2[] = "hello bit";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);//
//	return 0;
//}

//strcat - �ַ���׷��

//char* my_strcat(char*dest, const char*src)
//{
//	assert(dest && src);
//	char*ret = dest;
//	//1. �ҵ�Ŀ��ռ��\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2. ׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	printf("%s\n", my_strcat(arr1, arr2));
//
//	return 0;
//}


//int main()
//{
//	char arr[20] = "abc";
//	strcat(arr, arr);
//
//	return 0;
//}
//
//int my_strcmp(const char*s1, const char*s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}

//
//
//int my_strcmp(const char*s1, const char*s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	//char*p = "abcdef";
//	//int ret = strcmp("abq", "abcdef");
//	//int ret = strcmp("abc", "abcd");
//	//int ret = strcmp("abcd", "abcd");
//	//int ret = my_strcmp("abq", "abcdef");
//	//printf("%d\n", ret);
//	if (strcmp("abq", "abcdef") == 1)
//	{
//		printf(">\n");
//	}
//
//	//abq
//	//abcdef
//
//	//�ַ����Ƚ�-���ǱȽϳ���
//	//�Ƚϵ����ַ����ж�Ӧλ�õ��ַ���ASCIIֵ
//
//	return 0;
//}

//
//�ַ�����������-���Ȳ������Ƶ��ַ�����������
//strcpy
//strcat
//strcmp
//

//���������Ƶ��ַ�����������
//strncpy
//strncat
//strncmp


//int main()
//{
//	char arr1[20] = "#######";
//	char arr2[] = "abc";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello \0#####";
//	strncat(arr, "abc", 5);
//
//	return 0;
//}
//

//
//int main()
//{
//	int ret = strncmp("abcdef", "abcd", 5);
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//__cdecl ��һ�ֺ�������Լ��
//�������ε�˳��
//����ջ֡�Ĵ�����ʽ
//

//
//KMP �㷨 �˽�һ��
//
//
//char* my_strstr(const char*s1, const char*s2)
//{
//	assert(s1 && s2);
//	const char *cp = s1;
//
//	if (*s2 == '\0')
//		return (char*)s1;
//
//	while (*cp)
//	{
//		const char *p1 = cp;
//		const char *p2 = s2;
//		while ((*p1) && (*p2) &&  (*p1 == *p2))
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//	
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "defq";
//
//	char*ret = my_strstr(arr1, arr2);//��arr1�в���arr2�ַ�����һ�γ��ֵ�λ��
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("�Ҳ����Ӵ�\n");
//
//	return 0;
//}

//
//int main()
//{
//	char arr[] = "zpw@bitedu.tech.vip.hehe";//@. �ָ��
//	char arr2[30] = { 0 };
//	strcpy(arr2, arr);
//
//	char*p = ".@";//�ָ���ļ��ϵ��ַ���
//	/*printf("%s\n", strtok(arr2, p));
//	printf("%s\n", strtok(NULL, p));
//	printf("%s\n", strtok(NULL, p));*/
//
//	char *ret = NULL;
//	for (ret = strtok(arr2, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//strerror - ���󱨸溯��
//�Ѵ�����ת��Ϊ��Ӧ�Ĵ�����Ϣ�����ش�����Ϣ��Ӧ�ַ�������ʼ��ַ

//int  main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//
//	return 0;
//}

//#include <errno.h>
//
//int main()
//{
//	//printf("hehe\n");
//	FILE* pf = fopen("test.txt", "r");//file open
//	if (pf == NULL)
//	{
//		printf("fopen: %s\n", strerror(errno));
//		perror("fopen");
//	}
//
//	return 0;
//}

#include <ctype.h>


int main()
{
	char arr[20] = { 0 };
	gets(arr);//Hello Bit!
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		printf("%c", arr[i]);
		i++;
	}

	return 0;
}