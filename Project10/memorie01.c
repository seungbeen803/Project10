#include<stdio.h>

void main() //Ŭ������ ����� ���� ������ Ÿ��
{
	int n;
	scanf("%d", &n);
	//int score[i]; ���α׷� ����
	int* score;
	score =(int*)malloc(n * sizeof(int)); //���� �޸� �Ҵ�
	for (int i = 0; i < n; i++)
	{
		score[i] = i + 10;
	}
	free(score); //�޸� �ý��ۿ� �ݳ�
	system("pause");
}