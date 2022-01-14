#include<stdio.h>

void main()
{
	int* score; // 배열은 포인터이다
	int n, sum = 0;
	printf("학생 수를 입력하세요\n");
	scanf("%d", &n); //학생 수는 n명이다
	score = (int*)malloc(n * sizeof(int)); //메모리 동적 할당
	if (score == NULL) //메모리 공간을 할당할 수 없다
	{
		printf("동적 할당 메모리 오류");
		exit(1);
	}
	for (int i = 0; i < n; i++)
	{
		printf("점수를 입력하세요\n");
		scanf("%d", &score[i]);
		sum += score[i];
	}
	printf("평균은 %4.2f\n", (float)sum / n);
	free(score);
	system("pause");
}