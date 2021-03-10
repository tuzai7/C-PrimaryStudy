#define _CRT_SECURE_NO_WARNINGS 1
//strcpy 字符拷贝
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char*ret = dest;
//	while (*dest++ = *src++)//拷贝字符串 包括\0
//	{
//		;
//	}
//	return  ret; //返回的是目标空间的起始地址
//}
//int main()
//{
//	char arr1[20] = "***********";
//	char arr2[] = "nice guy";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//    return 0;
//
//}


//strcat 字符追加
//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char*dest,const char*src)
//{
//	assert(dest&&src != NULL);
//	char *ret = dest;
//	while (*dest) 
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "good ";
//	char arr2[] = "guy";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcmp比较大小
//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char*s1, const char*s2)
//{
//	assert(*s1 && *s2 != NULL);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	/*char *p = "abcdef";*/
//	//int ret = strcmp("cd", "abcd");
//	int ret = strcmp("abcd", "cd");
//	//int ret = strcmp("abcd", "abcd");
//	/*int ret = my_strcmp("acd", "abcdef");*/
//	printf("%d\n", ret);
//	return 0;
//}

//strncpy
//#include<stdio.h>
//#include<assert.h>
//char* my_strncpy(char*dest, const char*src)
//{
//	assert(*dest&&*src);
//		char * cp = dest;
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

//strstr
#include<stdio.h>
int mian()
{

}