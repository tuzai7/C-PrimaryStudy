#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <errno.h>
#include <string.h>

//
//int main()
//{
//	//fopen�����������д����ʽ��
//	//����ļ������ڣ��ᴴ������ļ�
//	//����ļ����ڣ�������ļ�������
//	//fopen����������Զ�����ʽ��
//	//�ļ������ڴ�ʧ��
//
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;//ʧ�ܷ���
//	}
//	//д�ļ�
//	int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	fputc('a', stdout);
//	fputc('b', stdout);
//	fputc('c', stdout);
//
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ļ��ɹ������ļ�
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);//a
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//b
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//c
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);//d
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	int ch = fgetc(stdin);
//	printf("%c\n", ch);
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//дһ������
//	fputs("hello bit\n", pf);
//	fputs("hello world\n", pf);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	char arr[4] = {0};
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��һ������
//	//fgets(arr, 100, pf);
//	//printf("%s\n", arr);
//
//	while (fgets(arr, 10, pf) != NULL)
//	{
//		printf("%s", arr);
//	}
//
//	//fgets�ӱ�׼�������ж�ȡ
//	fgets(arr, 100, stdin);
//	printf("%s\n", arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};

//int main()
//{
//	struct Stu s = {"zhangsan", 20, 66.5f};
//
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//��ʽ����д��
//	fprintf(pf,"%s %d %f", s.name, s.age, s.score);
//
//	//printf("%s %d %f", s.name, s.age, s.score);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//
//int main()
//{
//	struct Stu s = {0};
//
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//��ʽ���Ķ�ȡ
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	fprintf(stdout, "%s %d %f\n", s.name, s.age, s.score);
//
//	//scanf("%s %d %f", s.name, &(s.age), &(s.score));
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//sscanf
//sprintf
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};

//int main()
//{
//	struct Stu s = {"zhangsan", 20, 66.5f};
//	char buf[200] = { 0 };
//
//	//sprintf���԰ѽṹ��������ת��Ϊһ���ַ���
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//
//	printf("�����ַ�������ʽ��%s\n", buf);
//
//	struct Stu tmp = { 0 };
//
//	//sscanf���԰�һ���ַ���ת��Ϊһ���ṹ��������
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("���ո�ʽ������ʽ��%s %d %f\n", tmp.name, tmp.age, tmp.score);
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};

//int main()
//{
//	struct Stu s = { "zhangsan", 20, 99.5 };
//	FILE* pf = fopen("data.txt", "wb");//binary
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&s, sizeof(s), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	struct Stu s = {0};
//	FILE* pf = fopen("data.txt", "rb");//binary
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ļ�-������
//	fread(&s, sizeof(struct Stu), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//

//
//int main()
//{
//	int a = 10000;
//	FILE*pf = fopen("bin.dat", "wb");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//
//	fwrite(&a, sizeof(int), 1, pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	FILE*pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//	//��ȡ
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	
//	//��λ�ļ�ָ�뵽�ļ�����ʼλ��
//	//fseek(pf, -2,SEEK_CUR);
//	//fseek(pf, 0, SEEK_SET);
//	//printf("%d\n", ftell(pf));
//
//	rewind(pf);
//
//	ch = fgetc(pf);//Ҫ�������ȡ'a'
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	FILE*pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//	//��ȡ
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	//�ҽ�����ԭ��
//	if (ferror(pf))
//	{
//		printf("��ȡ�Ƿ�������ʧ�ܣ�������\n");
//	}
//	else if (feof(pf))
//	{
//		printf("�����ļ�ĩβ����������\n");
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	FILE*pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//�Ƚ�����������������
//	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//	Sleep(10000);
//	printf("ˢ�»�����\n");
//	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
//	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//	Sleep(10000);
//	fclose(pf);
//	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//	pf = NULL;
//
//	return 0;
//}

#include<string.h>
#include <errno.h>

//#include<string.h>
//#include <errno.h>
//
//int main()
//{
//	//���·��
//	//.. ��ʾ��һ��Ŀ¼
//	//. ��ǰĿ¼
//	//FILE* pf = fopen("../data.txt", "r");
//	//����·��
//	//./hehe/test.txt
//	//../../
//	FILE* pf = fopen("../../data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//		printf("%s\n", strerror(errno));
//		return 1;//ʧ�ܷ���
//	}
//	//���ļ��ɹ�
//	printf("���ļ��ɹ�\n");
//	//��д�ļ�
//	//...
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
int st(char* str)
{
	if (*str != '\n')
		return 1 + st(str + 1);
	else
		return 0;
}
int main()
{
	//���·��
	//.. ��ʾ��һ��Ŀ¼
	//. ��ǰĿ¼
	//FILE* pf = fopen("../data.txt", "r");
	//����·��
	//./hehe/test.txt
	//../../
	FILE* pf = fopen("../../data.txt", "r");
	if (pf == NULL)
	{
		printf("���ļ�ʧ��\n");
		printf("%s\n", strerror(errno));
		return 1;//ʧ�ܷ���
	}
	//���ļ��ɹ�
	printf("���ļ��ɹ�\n");
	//��д�ļ�
	//...

	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	char arr[] = "str";
	int len = st(arr);
	printf("%d", len);
	return 0;
}
