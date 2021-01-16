#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void text()
//
//{
//	int a = 1;
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		text();
//		i++;
//	}
//	return 0;
//}

//void text()
//
//{
//   static	int a = 1;
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		text();
//		i++;
//	}
//	return 0;
//}
//

int main()
{
	printf("%d\n", sizeof(char *));
	printf("%d\n", sizeof(short *));
	printf("%d\n", sizeof(int *));
	printf("%d\n", sizeof(long *));
}
//指针大小在32位操作系统是4个字节 64位操作系统的8个字节