//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = { 'b', 'i', 't' };
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int n = 10; 
//	int arr[n] = { 0 };
//	printf("%d\n", arr);
//	printf("%d\n", strlen("c:\test\121"));
//		return 0;
//}

#include<stdio.h>

int compare(int x, int y)
{
	if (x > y)
	{
		printf("x��\n", x);
		return x;
	}
	if (x < y)
	{
		printf("y��\n", y);
		return y;
	}
	else
	{
		printf("һ����\n");
	}
	
}

int main()
{

	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = compare(a, b);
	printf("�����Ϊ��%d\n", c);
	return 0;

}