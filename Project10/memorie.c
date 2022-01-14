#include<stdio.h>
#include<math.h>
//메모리 할당
//정적메모리 할당 -> 프로그램이 시작되기 전에 메모리를 할당 받는 것
//동적메모리 할당 -> 

int main(void)
{
	printf("배열을 몇 개 만들까요?\n");
	int n;
	scanf("%d", &n);
	int score[10];
	//int score[n]; //에러발생
	int* score;
	score = (int*)malloc(n * sizeof(int));
	if (score == NULL) { //메모리에 공간을 할당할 수 없다.
		//오류처리
	}
	free(score);
	system("pause");
}