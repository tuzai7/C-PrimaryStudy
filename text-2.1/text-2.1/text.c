#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p )[i]);
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}


//�������
//#include <stdio.h>
//
//int main()
//{
//	int s = 1, h;                    // ��ֵ�͸߶�
//	int i, j;                        // ѭ������
//	scanf("%d", &h);                 // �������
//	printf("1\n");                   // �����һ�� 1
//	for (i = 2; i <= h;s=1,  i++)         // ���� i �� 2 �����
//	{
//		printf("1 ");                // ��һ�� 1
//		for (j = 1; j <= i - 2; j++) // ��λ�� j �ƹ���һ��ֱ�ӿ�ʼѭ��
//			printf("%d ", (s = (i - j) * s / j));
//		printf("1\n");               // ���һ�� 1������
//	}          
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//		char i;
//		for (i = 'a'; i < 'd'; i++)
//		{
//			if ((i != 'a') + (i == 'c') + (i == 'd') + (i == 'c') == 3)
//			{
//				printf("������%c", i);
//			}
//		}
//
//}


//#include <stdio.h>
//int main()
//{
//	int A, B, C, D, E;
//	for (A = 1; A <= 5; ++A)
//	{
//		for (B = 1; B <= 5; ++B)
//		{
//			for (C = 1; C <= 5; ++C)
//			{
//				for (D = 1; D <= 5; ++D)
//				{
//					for (E = 1; E <= 5; ++E)
//					{
//						if (A*B*C*D*E == 120)//�������β�ͬ���Ϊ120������ɸѡ��Χ 
//						{
//							//����5�˵������ж�ֻ˵����һ�� 
//							if (((B == 2) + (A == 3) == 1) && //Aѡ��˵��B�ڶ����ҵ���
//								((B == 2) + (E == 4) == 1) && //Bѡ��˵���ҵڶ���E����
//								((C == 1) + (D == 2) == 1) &&//Cѡ��˵���ҵ�һ��D�ڶ�
//								((C == 5) + (D == 3) == 1) &&//Dѡ��˵��C����ҵ���
//								((E == 4) + (A == 1) == 1))//Eѡ��˵���ҵ��ģ�A��һ
//							{
//
//								printf("A=%d,B=%d,C=%d,D=%d,E=%d\n", A, B, C, D, E);//������˵�����
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	int n = 9;    
//	float *pFloat = (float *)&n;    
//	printf("n��ֵΪ��%d\n", n);    
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	*pFloat = 9.0;    
//	printf("num��ֵΪ��%d\n", n);    
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);    
//	return 0;
//}


#include <stdio.h> 
int check_sys() 
{   
	int i =0;
	printf("���룺\n");
	scanf("%d", &i);
     return (*(char *)&i); 
} 
int main() 
{   
	int ret = check_sys(); 
     if(ret == 1)    
    {       
		 printf("С��\n");  
    }  
     else    
    {        
		 printf("���\n");   
    }  
        return 0;
}