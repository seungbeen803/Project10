#include<stdio.h>

void main()
{
	FILE* fp = NULL;
	fp = fopen("g:test.txt", "r"); // r=read
	if (fp == NULL)
		printf("���� ���� ����\n");
	int c;
	//�Է� -> fgetc ��� ->  fputc
	while ((c = fgetc(fp)) != EOF) //EOP = end if file
		putchar(c); // ���Ϸ� ���� ������ ȭ�鿡 ���
	fclose(fp);
	system("pause");
}