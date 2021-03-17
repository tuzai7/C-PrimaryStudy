#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h> 
//int main()
//{
//	const char*str1 = "abcdef";
//	const char*str2 = "bbb";
//	if (strlen(str2) - strlen(str1)>0)
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}


////计数器方式 
//int my_strlen(const char * str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//不能创建临时变量计数器 
//int my_strlen(const char * str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else   return 1 + my_strlen(str + 1);
//}

//指针-指针的方式 
//int my_strlen(char *s)
//{
//	char *p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}

//模拟实现
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
//	return 0;
//}

//模拟实现strcat 字符追加
//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char*dest, const char*src)
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


//#include <stdio.h> 
//#include <string.h>
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	puts(str1);  return 0;
//}


//#include <stdio.h> 
//#include <string.h>
//int main()
//{
//	char str[][5] = { "R2D2", "C3PO", "R2A6" };
//	int n;
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n<3; n++)
//	if (strncmp(str[n], "R2xx", 2) == 0)
//	{
//		printf("found %s\n", str[n]);
//	}
//	return 0;
//}

//#include <stdio.h> 
//#include <string.h>
//int main()
//{
//	char str[] = "This is a simple string";
//	char * pch;  pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	puts(str);
//	return 0;
//}


//#include <stdio.h> 
//#include <string.h>
//int main()
//{
//	char str[] = "- This, a sample string.";
//	char * pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}


//#include <stdio.h> 
//#include <string.h> 
//#include <errno.h>//必须包含的头文件 
//int main()
//{
//	FILE * pFile;
//	pFile = fopen("unexist.ent", "r");
//	if (pFile == NULL)
//		printf("Error opening file unexist.ent: %s\n", strerror(errno));
//	//errno: Last error number   return 0; 
//}


//void * memcpy(void * dst, const void * src, size_t count)
//{
//	void * ret = dst;
//	assert(dst);
//	assert(src);
//	while (count--)
//	{
//		*(char *)dst = *(char *)src;
//		dst = (char *)dst + 1;
//		src = (char *)src + 1;
//	}
//
//	return(ret);
//}

void * memmove(void * dst, const void * src, size_t count)
{
	void * ret = dst;
	if (dst <= src || (char *)dst >= ((char *)src + count))
	{
		while (count--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst + 1;
			src = (char *)src + 1;
		}
	}
	else
	{
		dst = (char *)dst + count - 1;
		src = (char *)src + count - 1;
		while (count--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst - 1;
			src = (char *)src - 1;
		}
	}

	return(ret);

}