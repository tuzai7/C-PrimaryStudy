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
//{                      //��������
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
//{  //�ж��Ƿ�����ת�Ĺ�ϵ
//	if (strlen(dest) != strlen(src)) 
//	{        //�������ַ������Ȳ���ȣ���Ȼ������תǰ��Ĺ�ϵ
//		return 0;
//	}
//	if (!strcmp(dest, src))
//	{
//		return 1;
//	}
//	int k = strlen(dest);
//	while (--k) 
//	{
//		Left_Move(src, 1);  //��������������ÿ����תһ�αȽ�һ��
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
//	printf("������Ҫ�жϵ������ַ�����\n");
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
//	printf("����ǰ��%s\n", c);
//	Left(c, len, k);
//	printf("������%s\n", c);
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
//		//����������С��key���������һλ��
//		if (arr[left][right] < key)
//		{
//			left++;
//		}
//		//����������С��key������ǰ��һλ��
//		if (arr[left][right] > key)
//		{
//			right--;
//		}
//		//���������ֵ���key���򷵻�1��
//		if (arr[left][right] == key)
//		{
//			return 1;
//		}
//	}
//	//���򷵻�1��
//	return 0;
//
//}
//int main()
//{
//	//����һ����ά���飻
//	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//�ҳ����������9������֣�
//	int key = 9;
//	//�ҵ��˷���1,�Ҳ�������0��
//	int ret = Findnum(arr, ROW, COL, key);
//	if (1 == ret)
//	{
//		printf("�ҵ��ˣ�\n");
//	}
//	if (0 == ret)
//	{
//		printf("�Ҳ���!\n");
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
//	printf("������һ��������");
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
//	const char*str_p = str;//str_p���������
//	const char*start = str_p;//start����ָ����ʼλ��
//	const char*sub_p = sub;
//	while (*start)//���ѭ��ֻ�Ǿ����˴�ʲôʱ��ʼ
//	{
//		str_p = start;
//		sub_p = sub;
//		//�ڲ�ѭ�����������Ƚ�
//		while (*str_p&&*sub_p&&*str_p == *sub_p)
//		{
//			str_p++;
//			sub_p++;
//		}
//		//ֻҪ�����ַ�����Ⱦ�ͣ������������һ���Ѿ�����\0��ͣ����
//		//*sub_p=='\0'˵���Ƚϳɹ��ˣ���ʱ�򷵻���ʼ�Ƚ�λ�ã�����ʼ�Ƚ�λ����start���б�����
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
//char* my_strcat(char* s, char* g)//ʵ���ַ�����׷��
//{
//	assert(s&&g);//��ֹ����Ϊ��ָ��
//	while (*g != '\0')//�Ƚ��ռ��������ߵ�'\0'��
//	{
//		g++;
//	}
//	while (*s != '\0')//���ռ�С������׷�ӵ��Ƚϴ���������
//	{
//		*g = *s;//��С����׷�ӵ����������,��'\0'����ʼ
//		g++;
//		s++;
//	}
//	*g = '\0';//��ӽ�����־
//	return g;//����׷����ϵĴ�����
//}
//int main()
//{
//	char s[] = "abc";//С����
//	char g[10] = "defg";//������
//	my_strcat(s, g);//����my_strcat��������׷��
//	char* p = g;//��������Ԫ�صĵ�ַ����ָ��p
//	++p;//ָ��ӵ�*p=e
//	printf("%c\n", *(++p));//ָ��p��++�õ�*p=f
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
////5.ʵ��strcmp
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
//		//ǰ->��
//		while (num--)
//		{
//			*(char *)dest = *(char *)src;
//			dest = (char *)dest + 1;
//			src = (char *)src + 1;
//		}
//	}
//	else
//	{
//		//��->ǰ
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
//	printf("�ڴ渲�������%s\n", arr + 2);
//	printf("���������%s\n", arr1);
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