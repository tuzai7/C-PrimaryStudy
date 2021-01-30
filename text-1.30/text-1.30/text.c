
//模拟实现strlen函数。
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

//写一个函数，可以逆序一个字符串的内容。
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

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
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

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）
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
//	printf("0到%d的水仙花数为:\n",m);
//	for (i=0; i <= m; i++)
//	{
//		int count = 1;//水仙花数至少是一位
//		int temp = i;
//		int sum = 0;
//		while (temp / 10)//利用while循环判断该数的位数
//		{
//			count++;
//			temp /= 10;
//		}
//		temp = i;//重新给temp赋值，因为temp在while循环中已经被修改了
//		while (temp)//判断该数是否是水仙花数
//		{
//			sum += pow(temp % 10, count);//对temp求余是求它的每一位数，再利用pow函数对其每一位求n次方，n为它的位数
//			temp /= 10;//对temp除10是每次将它的最低位除去
//		}
//		if (i == sum)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}


//打印图形
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//打印上部分
//	for (i = 0; i<line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j = 0; j<line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j<2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下部分
//	for (i = 0; i<line - 1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//模拟实现模拟实现库函数strcpy

//#include<stdio.h>
//#include<assert.h>
//
//void my_strcpy(char *str, char *scr)
//{
//	char *p = str;
//	assert(str != NULL);//断言，会打印出一条错误信息
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
//		{//与1按位与值为1说明是偶数，放到后面
//			left++;
//		}
//		else if (((*right) & 1) == 0)
//		{//与1按位与值为0说明是奇数，放到前面
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
		if (((*left) & 1) == 1)//与1按位与值为1说明是偶数，放到后面
		{ 
			left++;
		}
		else if (((*right) & 1) == 0)//与1按位与值为0说明是奇数，放到前面
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