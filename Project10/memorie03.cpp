#include<stdio.h>

void main()
{
	FILE* fp = NULL;
	fp = fopen("e:test.txt", "W");
	if (fp == NULL)
		printf("���� ���� ����\n");
	fputc('a', fp); //�� ���� �Է�
	fputc('b', fp); //�� ���� �Է�
	fputc('c', fp); //�� ���� �Է�
	fclose(fp);
	system("pause");
}