#include<stdio.h>

void main()
{
	FILE* fp = NULL;
	fp = fopen("g:test.txt", "w"); //w=write, r=read
	if (fp == NULL)
		printf("���� ���� ����\n");
	fputc('a', fp); //�� ���� �Է�
	fputc('b', fp); //�� ���� �Է�
	fputc('c', fp); //�� ���� �Է�
	fputc('d', fp); //�� ���� �Է�
	fputc('E', fp); //�� ���� �Է�
	fclose(fp);
	system("pause");
}