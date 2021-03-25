#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	unsigned char i = 7;
//	int j = 0;
//	for (; i > 0; i -= 3)
//	{
//		++j;
//	}
//	printf("%d\n", j);
//	return 0;
//}

#include<stdio.h>
//int main()
//{
//	char a = 0, ch;
//	printf("ÇëÊäÈëÒ»´®×Ö·û\n");
//	scanf("%s", &ch);
//	while ((ch = getchar()) != '\n');
//	{
//		if (a % 2 != 0 && (ch >= 'a' && ch <= 'z'))
//			ch = ch - 'a' + 'A';
//		a++;
//		putchar(ch);
//	}
//	printf("\n");
//}

//int f(int x)
//{
//	return ((x > 2) ? x*f(x - 1) : 3);
//}
//int main()
//{
//	int i;
//	i = f(f(2));
//	printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	int p[][4] = { { 1 }, { 3, 2 }, { 4, 5, 6 }, { 0 } };
//	printf("%d", p[1][2]);
//}
int fun(int a)
{
	a ^= (1 << 5) - 1;
	return a;
}
int main()
{
	fun(21);
	printf("%d\n", fun(21));
	return 0;
}