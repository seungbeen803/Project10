#include<stdio.h>

void main() //클래스는 사용자 정의 데이터 타입
{
	int n;
	scanf("%d", &n);
	//int score[i]; 프로그램 오류
	int* score;
	score =(int*)malloc(n * sizeof(int)); //동적 메모리 할당
	for (int i = 0; i < n; i++)
	{
		score[i] = i + 10;
	}
	free(score); //메모리 시스템에 반납
	system("pause");
}