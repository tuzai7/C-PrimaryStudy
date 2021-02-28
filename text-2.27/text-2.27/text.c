#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//		int aa[2][5] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//		int *ptr1 = (int *)(&aa + 1);
//		int *ptr2 = (int *)(*(aa + 1));
//		printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//		return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void Left_Move(char arr[], int k)
//{                      //左旋函数
//	int size = strlen(arr);
//	char *p, *arr_end, tmp;
//	arr_end = arr + size - 1;
//	tmp = *arr;
//	for (p = arr; p < arr + size - 1; ++p) 
//	{
//		*p = *(p + 1);
//	}
//	*arr_end = tmp;
//	--k;
//	if (k > 0)
//	{
//		Left_Move(arr, k);
//	}
//}
//int Is_Move(char* dest, char* src)
//{  //判断是否是旋转的关系
//	if (strlen(dest) != strlen(src)) 
//	{        //若两个字符串长度不相等，必然不是旋转前后的关系
//		return 0;
//	}
//	if (!strcmp(dest, src))
//	{
//		return 1;
//	}
//	int k = strlen(dest);
//	while (--k) 
//	{
//		Left_Move(src, 1);  //调用左旋函数，每次旋转一次比较一次
//		if (!strcmp(dest, src)) 
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main() 
//{
//	char dest[1024];
//	char src[1024];
//	printf("请输入要判断的两个字符串：\n");
//	scanf("%s", &dest);
//	scanf("%s", &src);
//	int ret = Is_Move(dest, src);
//	printf("%d\n", ret);
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void Left(char c[], int len, int k)
//{
//	k = k%len;
//	char *p = (char *)malloc((2 * len + 1)*sizeof(char));
//	strcpy(p, c);
//	strcat(p, c);
//	strncpy(c, p + k, len);
//	free(p);
//}
//
//int main()
//{
//	char c[] = "ABCD";
//	int k = 2;
//	int len = strlen(c);
//	printf("左旋前：%s\n", c);
//	Left(c, len, k);
//	printf("左旋后：%s\n", c);
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>

//#define ROW 3
//#define COL 3
//int Findnum(int arr[ROW][COL], int row, int col, int key)
//{
//	int left = 0;
//	int right = col - 1;
//	while ((left >= 0) && (right < col))
//	{
//		//如果这个数字小于key，则向后移一位；
//		if (arr[left][right] < key)
//		{
//			left++;
//		}
//		//如果这个数字小于key，则向前移一位；
//		if (arr[left][right] > key)
//		{
//			right--;
//		}
//		//如果这个数字等于key，则返回1；
//		if (arr[left][right] == key)
//		{
//			return 1;
//		}
//	}
//	//否则返回1；
//	return 0;
//
//}
//int main()
//{
//	//定义一个二维数组；
//	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//找出这个数组中9这个数字；
//	int key = 9;
//	//找到了返回1,找不到返回0；
//	int ret = Findnum(arr, ROW, COL, key);
//	if (1 == ret)
//	{
//		printf("找到了！\n");
//	}
//	if (0 == ret)
//	{
//		printf("找不到!\n");
//	}
//
//
//
//	system("pause");
//	return 0;
//}

//
//#include <stdio.h>
//#define ROW 3
//#define COL 4
//int Find(int arr[ROW][COL], int *row, int *col, int n)
//{
//	*row = 0;
//	*col = COL - 1;
//	while ((*row < ROW) && (*col >= 0))
//	{
//		if (arr[*row][*col] > n)
//		{
//			(*col)--;
//		}
//		else if (arr[*row][*col] < n)
//		{
//			(*row)++;
//		}
//		else
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[ROW][COL] = { { 1, 2, 3, 4 }, { 5, 7, 9, 10 }, { 21, 37, 46, 98 } };
//	int input = 0;
//	int row = 0;
//	int col = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &input);
//	int ret = Find(arr, &row, &col, input);
//	if (ret == 1)
//	{
//		printf("row = %d,col = %d\n", row, col);
//	}
//	else
//	{
//		printf("Not found\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//char*Strstr(const char*str, const char*sub)
//{
//	assert(str);
//	assert(sub);
//	const char*str_p = str;//str_p真正向后走
//	const char*start = str_p;//start用来指向起始位置
//	const char*sub_p = sub;
//	while (*start)//外层循环只是决定了从什么时候开始
//	{
//		str_p = start;
//		sub_p = sub;
//		//内层循环才是真正比较
//		while (*str_p&&*sub_p&&*str_p == *sub_p)
//		{
//			str_p++;
//			sub_p++;
//		}
//		//只要两个字符不相等就停下来，或者有一个已经到达\0就停下来
//		//*sub_p=='\0'说明比较成功了，这时候返回起始比较位置，而起始比较位置在start当中保存着
//		if (*sub_p == '\0')
//		{
//			return start;
//		}
//		start++;
//	}
//	return NULL;
//}
//
//int main()
//{
//
//	char str[] = "abbbbcdef";
//	char *p;
//	p = strstr(str, "bbc");
//	printf("%s", p);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//char* my_strcat(char* s, char* g)//实现字符串得追加
//{
//	assert(s&&g);//防止输入为空指针
//	while (*g != '\0')//先将空间大的数组走到'\0'处
//	{
//		g++;
//	}
//	while (*s != '\0')//将空间小的数组追加到比较大的数组后面
//	{
//		*g = *s;//将小数组追加到大数组后面,从'\0'处开始
//		g++;
//		s++;
//	}
//	*g = '\0';//添加结束标志
//	return g;//返回追加完毕的大数组
//}
//int main()
//{
//	char s[] = "abc";//小数组
//	char g[10] = "defg";//大数组
//	my_strcat(s, g);//调用my_strcat函数进行追加
//	char* p = g;//将数组首元素的地址赋给指针p
//	++p;//指针加得*p=e
//	printf("%c\n", *(++p));//指针p再++得到*p=f
//	return 0;
//}

//
//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//	char* start = dest;
//	assert(dest != NULL && src != NULL);
//	while (*dest != '\0')
//		dest++;
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//	return start;
//}
//int main()
//{
//	char a[20] = "hellow";
//	char b[10] = " word !";
//	char* c;
//	c = my_strcat(a, b);
//	printf("%s\n", a);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//
////5.实现strcmp
//
//char Mystrcmp(const char* dest, const char* src)
//{
//	while ((*dest != '\0') && (*src != '\0'))
//	{
//		if (*dest < *src)
//		{
//			return -1;
//		}
//		else if (*dest>*src)
//		{
//			return 1;
//		}
//		else
//		{
//			++dest;
//			++src;
//		}
//	}
//	if (*dest < *src)
//	{
//		return -1;
//	}
//	else if (*dest>*src)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	char dest[] = "hello world";
//	char src[] = "hello";
//	int ret = Mystrcmp(dest, src);
//	printf("%d\n", ret);
//	return 0;
//}





//#include<stdio.h>
//char *my_strcpy(char *dest, const char *str)
//{
//	char *ret = dest;
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[64] = "hello";
//	char arr2[] = "world";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//
//int my_strlen(const char *p)
//{
//	int count = 0;
//	assert(p);
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	const char arr[] = "abcdef";
//	int ret = 0;
//	ret = my_strlen(arr);
//	printf("ret=%d\n", ret);
//	return 0;
//}




//#include <stdio.h>
//#include< assert.h >
//#include<string.h>
//void * my_memmove(void* dest, const void*src, size_t num)
//{
//	assert(dest);
//	assert(src);
//	if (dest<src)
//	{
//		//前->后
//		while (num--)
//		{
//			*(char *)dest = *(char *)src;
//			dest = (char *)dest + 1;
//			src = (char *)src + 1;
//		}
//	}
//	else
//	{
//		//后->前
//		while (num--)
//		{
//			*((char *)dest + num) = *((char *)src + num);
//		}
//	}
//}
//
//int main()
//{
//	char arr[10] = "abcdefg";
//	char arr0[10] = "abcdefg";
//	char arr1[10] = { 0 };
//	my_memmove(arr + 3, arr, 4);
//	my_memmove(arr1, arr0, 4);
//	printf("内存覆盖情况：%s\n", arr + 2);
//	printf("正常情况：%s\n", arr1);
//	system("pause");
//	return 0;
//
//}




#include <stdio.h>

void *mymemcpy(void *str, const void *dst, size_t count) 
{
	void *ret = str;
	while (--count) 
	{
		*(char*)str = *(char*)dst;
		str = (char*)str + 1;
		dst = (char*)dst + 1;
	}
	return ret;
}

int main() 
{
	char str[] = "word hello";
	char dst[] = "hello world";
	void *ret = mymemcpy(str, dst, 9);
	printf("%s\n", (char*)ret);
	return 0;

}