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


//杨辉三角
//#include <stdio.h>
//
//int main()
//{
//	int s = 1, h;                    // 数值和高度
//	int i, j;                        // 循环计数
//	scanf("%d", &h);                 // 输入层数
//	printf("1\n");                   // 输出第一个 1
//	for (i = 2; i <= h;s=1,  i++)         // 行数 i 从 2 到层高
//	{
//		printf("1 ");                // 第一个 1
//		for (j = 1; j <= i - 2; j++) // 列位置 j 绕过第一个直接开始循环
//			printf("%d ", (s = (i - j) * s / j));
//		printf("1\n");               // 最后一个 1，换行
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
//				printf("犯人是%c", i);
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
//						if (A*B*C*D*E == 120)//五人名次不同相乘为120，减少筛选范围 
//						{
//							//以下5人的叙述中都只说对了一半 
//							if (((B == 2) + (A == 3) == 1) && //A选手说：B第二，我第三
//								((B == 2) + (E == 4) == 1) && //B选手说：我第二，E第四
//								((C == 1) + (D == 2) == 1) &&//C选手说：我第一，D第二
//								((C == 5) + (D == 3) == 1) &&//D选手说：C最后，我第三
//								((E == 4) + (A == 1) == 1))//E选手说：我第四，A第一
//							{
//
//								printf("A=%d,B=%d,C=%d,D=%d,E=%d\n", A, B, C, D, E);//输出五人的名次
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
//	printf("n的值为：%d\n", n);    
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;    
//	printf("num的值为：%d\n", n);    
//	printf("*pFloat的值为：%f\n", *pFloat);    
//	return 0;
//}


#include <stdio.h> 
int check_sys() 
{   
	int i =0;
	printf("输入：\n");
	scanf("%d", &i);
     return (*(char *)&i); 
} 
int main() 
{   
	int ret = check_sys(); 
     if(ret == 1)    
    {       
		 printf("小端\n");  
    }  
     else    
    {        
		 printf("大端\n");   
    }  
        return 0;
}