#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <stddef.h>

//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
////offsetof - ������ǽṹ���Ա����ڽṹ����ʼλ�õ�ƫ����
//
//int main()
//{
//	struct S1 s1;
//	//printf("%d\n", sizeof(s1));//
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//
//	return 0;
//}
//
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};


//struct S4
//{
//	char c1;//1
//	struct S3 s3;//16
//	double d;//8
//};
//
//struct S
//{
//	char c;
//	int i;
//};
//
//
//struct S1
//{
//	char c1;//0
//	int i;//1-4
//	char c2;//5
//};
//
//#pragma pack(4)
//struct S3
//{
//	char c;//0
//	//1-3
//	double d;//4-11
//	int i;//12-15
//	//
//};
//#pragma pack()
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//
//	return 0;
//}

//
//λ�� - ������
//λ������һ���̶��Ͻ�ʡ�ռ�
//
//struct A
//{
//	int _a : 2;//_aֻ��Ҫ2������λ
//	int _b : 5;//_bֻ��Ҫ5������λ
//	int _c : 10;
//	int _d : 30;
//};
//
//��16λ�Ļ����� - int�Ĵ�С��2���ֽ�-16����λ��
//��32λ�Ļ����� - int�Ĵ�С��4���ֽ�-32����λ��
//
//
//int main()
//{
//	struct A sa;//
//	//һ�ο���һ������ 4���ֽ�
//	//4 --> 32
//	//_a - 2 
//	//_b - 5
//	//_c - 10
//	//ʣ��15������λ - �����ò��ã�
//	//4 --> 32
//	//_d - 30
//	//C���Ա�׼��û�й涨��
//	//
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}

//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}

//
//������һ��ö������
//
//enum Sex
//{
//	//ö�����͵Ŀ���ȡֵ
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//enum RGB
//{
//	RED=8,//0
//	GREEN,//1
//	BLUE//2
//};
//
//int main()
//{
//	//enum Sex s = FEMALE;
//	//enum RGB rgb = GREEN;
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//
//	return 0;
//}
//
//#define MAX 100
//
//
//enum Option
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//
//void menu()
//{
//	printf("*********************************\n");
//	printf("****  1. add       2. sub   *****\n");
//	printf("****  3. mul       4. div   *****\n");
//	printf("****  0. exit               *****\n");
//	printf("*********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	enum Option input = EXIT;
//	
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			printf("������2��������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case SUB:
//			printf("������2��������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case MUL:
//			printf("������2��������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case DIV:
//			printf("������2��������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case EXIT:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//
//	int a = MAX;
//
//	return 0;
//}
//
//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	union Un u;
//	//44 33 22 11
//	//
//	u.i = 0x11223344;
//	u.c = 0x55;
//
//	printf("%x\n", u.i);
//
//	/*printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));*/
//
//	//printf("%d\n", sizeof(u));//
//
//	return 0;
//}
//

//int check_sys()
//{
//	int a = 1;//0x 00 00 00 01
//	//��                   ��
//	//01 00 00 00 - С��
//	//00 00 00 01 - ���
//	if (1 == *(char*)&a)//int*
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}


//int check_sys()
//{
//	int a = 1;//0x 00 00 00 01
//	//��                   ��
//	//01 00 00 00 - С��
//	//00 00 00 01 - ���
//	return *(char*)&a;//int*
//}
//
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//
//	return u.c;
//}
//
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	return 0;
//}



union U
{
	short arr[7];//14
	int i;//4
};

int main()
{
	union U u;
	printf("%d\n", sizeof(u));//16

	return 0;
}