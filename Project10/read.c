#include<stdio.h>

void main()
{
	FILE* fp = NULL;
	fp = fopen("g:test.txt", "r"); // r=read
	if (fp == NULL)
		printf("파일 열기 실패\n");
	int c;
	//입력 -> fgetc 출력 ->  fputc
	while ((c = fgetc(fp)) != EOF) //EOP = end if file
		putchar(c); // 파일로 읽은 내용을 화면에 출력
	fclose(fp);
	system("pause");
}