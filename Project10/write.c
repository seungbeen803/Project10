#include<stdio.h>

void main()
{
	FILE* fp = NULL;
	fp = fopen("g:test.txt", "w"); //w=write, r=read
	if (fp == NULL)
		printf("파일 열기 실패\n");
	fputc('a', fp); //한 글자 입력
	fputc('b', fp); //한 글자 입력
	fputc('c', fp); //한 글자 입력
	fputc('d', fp); //한 글자 입력
	fputc('E', fp); //한 글자 입력
	fclose(fp);
	system("pause");
}