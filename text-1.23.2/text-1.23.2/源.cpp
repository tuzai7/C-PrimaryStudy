#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int i = 1;//����
void move(int n, char a, char c)//��ʾ�ƶ�·�� 
{
	
	printf("��%d�� : �ѵ�%d�����Ӵ�%c--->�ƶ���%c\n", i++, n, a, c);
}

void Hanoi(int n, char a, char b, char c)//�ݹ��㷨 
{
	if (n == 1) move(n, a, c);  //���ֻ��һ��������ôֱ�Ӵ�A���Ƶ�C�� 
	else
	{
		Hanoi(n - 1, a, c, b);  //��A��n-1�������Ƶ�B��
		move(n, a, c);          //�����һ�����Ӵ�A���Ƶ�C�� 
		Hanoi(n - 1, b, a, c);  //��B��n-1�������Ƶ�C�� 
	}
}
int main()
{
	int m;
	scanf("%d", &m);//�������ӵĸ��� 
	Hanoi(m, 'A', 'B', 'C');
	return 0;
}