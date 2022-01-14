#include<stdio.h>

void main()
{
	FILE* fp = NULL;
	fp = fopen("e:test.txt", "W");
	if (fp == NULL)
		printf("파일 열기 실패\n");
	fputc('a', fp); //한 글자 입력
	fputc('b', fp); //한 글자 입력
	fputc('c', fp); //한 글자 입력
	fclose(fp);
	system("pause");
}