#include<stdio.h>
#include<math.h>
//�޸� �Ҵ�
//�����޸� �Ҵ� -> ���α׷��� ���۵Ǳ� ���� �޸𸮸� �Ҵ� �޴� ��
//�����޸� �Ҵ� -> 

int main(void)
{
	printf("�迭�� �� �� ������?\n");
	int n;
	scanf("%d", &n);
	int score[10];
	//int score[n]; //�����߻�
	int* score;
	score = (int*)malloc(n * sizeof(int));
	if (score == NULL) { //�޸𸮿� ������ �Ҵ��� �� ����.
		//����ó��
	}
	free(score);
	system("pause");
}