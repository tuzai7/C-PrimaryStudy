#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>



//int main()
//{
//	//ָ������ - ���ָ�������
//	int* arr[5];//
//	//����ָ�� - ָ�������ָ��
//	int data[10] = {0};
//	int (*pd)[10] = &data;
//	//int (*)[10]
//	//int a = 10;
//
//	return 0;
//}
//void test1(int*p)
//{}
//void test2(int(*p)[4])
//{}
//int main()
//{
//	//һά����
//	int arr[10];
//	int* p = arr;//��Ԫ�صĵ�ַ
//	int (*pa)[10] = &arr;//����ĵ�ַ
//	test1(arr);
//
//	//��ά����
//	int data[3][4];
//	int (*pd)[4] = data;//��Ԫ�صĵ�ַ
//	int (*p2)[3][4] = &data;
//	test2(data);
//
//	return 0;
//}

//����ָ�� - ָ�����ε�ָ��
//����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//����ָ�� - ָ������ָ�� - ��ź����ĵ�ַ

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test(char* str)
//{
//}
//
//
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;
//
//	//char arr[5] = {0};
//	//char (*parr)[5] = &arr;
//
//	//printf("%p\n", &Add);
//	//int (*pf)(int, int) = &Add;//pf���Ǻ���ָ��
//
//	//void (*p)(char*) = &test;
//
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int(* pf)(int, int) = &Add;//&Add;
//
//	int ret = (*pf)(2, 3);//int ret = Add(2, 3);
//	//Add(2, 3);
//	//pf(2, 3);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//int len = my_strlen(arr);
//	//printf("%d\n", len);
//	//int(*pa)[4];
//	int (*pf)(const char*) = my_strlen;
//	int len = (*pf)("bit");
//	printf("%d\n", len);
//
//	len = pf("hello bit");
//	printf("%d\n", len);
//
//	return 0;
//}



//
//( *(  void(*)() )0 ) ();
//
//����0��ַ���ĺ������ú����޲���������������void
//

//void test()
//{
//
//}
//
//int main()
//{
//	void (*pf)() = test;
//
//	return 0;
//}

//
//����һ����������
//�����ĺ�����signal��signal������2����������һ������������int,�ڶ�������������һ������ָ�룬�ú���
//ָ��ָ��ĺ���������int������������void
//signal�����ķ�����������һ������ָ�룬�ú���ָ��ָ��ĺ���������int������������void
//



//������ָ������ void(*)(int) ��һ������ ����pfun_t

//void( * signal( int, void(*)(int) ) )(int);//1
//
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);//2

//����ָ�� - ָ��
//����ָ������ - ����
//��ź���ָ�������
//
//ָ������ - ���ָ�������
//����ָ������� - �������ָ�������


//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//&a; &b;
//	int* arr[] = {&a, &b};
//	//����ָ�������
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pf)(int, int);//����ָ��
//
//	int(* pfA[4])(int, int);//����ָ�������
//
//	//����ָ������
//
//	//pfArr2���Ǻ���ָ������
//	//int (* pfArr[2])(int, int) = { Add, Sub };
//
//	return 0;
//}
//


//������ - �ӡ������ˡ���
//void menu()
//{
//	printf("****************************\n");
//	printf("**** 1. add   2. sub    ****\n");
//	printf("**** 3. mul   4. div    ****\n");
//	printf("**** 0. exit            ****\n");
//	printf("****************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////��������-����ָ��
////�ص�����
//
//void calc(int (*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������2��������:>");
//	scanf("%d%d", &x, &y);
//	ret = p(x, y);
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);//������
//			break;
//		case 2:
//			calc(Sub);//������
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	//����ָ������ - ת�Ʊ�
//	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);//1
//		if (0 == input)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else if (input>=1 && input<=4)
//		{
//			printf("������2��������:>");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//
//	return 0;
//}


//����ָ������
//��ź���ָ�������
//&�������� ����
//ָ����ָ�������ָ����

//int main()
//{
//	//ָ��ӷ�����ĺ���ָ��
//	int(*p)(int, int);//����ָ��
//	//����ָ�������
//	int(*pArr[4])(int, int);
//	//ppArr��ָ����ָ�������ָ��
//	int(*(*ppArr)[4])(int, int) = &pArr;
//
//	return 0;
//}


//void test1()
//{
//	printf("hehe\n");
//}
//
//void test2(void (*p)())
//{
//	p();
//}
//
//int main()
//{
//	test2(test1);
//	return 0;
//}



//
//ð������
//
//��һ�������������ð�������
//
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð�����������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//int main()
//{
//	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//�ų�����
//	print_arr(arr, sz);
//
//	return 0;
//}
//
//�⺯��-qsort - quick sort
// �����������͵�����
//



//int cmp_int(const void* e1, const void* e2)
//{
//	if (*(int*)e1 > *(int*)e2)
//		return 1;
//	else if (*(int*)e1 < *(int*)e2)
//		return -1;
//	else
//		return 0;
//}


#include <stdlib.h>
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

void test1()
{
	//qsort ������������
	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}
int main()
{
	text1();
	return 0;
}
//
struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void*e1, const void*e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test2()
{
	//ʹ��qsort��������ṹ��
	struct Stu arr[] = { { "zhangsan", 20 }, { "lisi", 31 }, { "wangwu", 15 } };
	//�������������򣿻��ǰ������䣿
	//������
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	//����������
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}


//void qsort(void *base, - ���������ݵ���ʼλ��
//	      size_t num, 
//		  size_t width, 
//		  int(*cmp)(const void *e1, const void *e2)
//		  );

void _swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, size_t sz, size_t width, int(*cmp)(const void*e1, const void*e2))
{
	size_t i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����2��Ԫ�صıȽ�
			//base[j] base[j+1] 
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			{
				//���������˳��ͽ���
				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}

void test3()
{
	//qsort ������������
	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

void test4()
{
	//ʹ��qsort��������ṹ��
	struct Stu arr[] = { { "zhangsan", 20 }, { "lisi", 31 }, { "wangwu", 15 } };
	//�������������򣿻��ǰ������䣿
	//������
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	//����������
	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}

int main()
{
	//test1();
	//test2();
	test4();
	return 0;
}

//int main()
//{
//	int a = 10;
//	void* p = &a;
//
//	//void* ��ָ����������Խ����������͵ĵ�ַ
//	//��Ϊvoid*��ָ�룬û�о������ͣ����Բ��ܽ����ò���������++/--
//
//	//int* pa = &a;
//
//	//*pa = 20;
//
//	//void* pv = &a;
//	//*pv = 0;
//	//pv++;//
//
//	return 0;
//}