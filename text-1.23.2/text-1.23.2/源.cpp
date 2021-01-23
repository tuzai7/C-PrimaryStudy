#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int i = 1;//步数
void move(int n, char a, char c)//显示移动路径 
{
	
	printf("第%d步 : 把第%d个盘子从%c--->移动到%c\n", i++, n, a, c);
}

void Hanoi(int n, char a, char b, char c)//递归算法 
{
	if (n == 1) move(n, a, c);  //如果只有一个盘子那么直接从A柱移到C柱 
	else
	{
		Hanoi(n - 1, a, c, b);  //把A柱n-1个盘子移到B柱
		move(n, a, c);          //把最后一个盘子从A柱移到C柱 
		Hanoi(n - 1, b, a, c);  //把B柱n-1个盘子移到C柱 
	}
}
int main()
{
	int m;
	scanf("%d", &m);//输入盘子的个数 
	Hanoi(m, 'A', 'B', 'C');
	return 0;
}