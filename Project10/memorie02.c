#include<stdio.h>

void main()
{
	int* score; // �迭�� �������̴�
	int n, sum = 0;
	printf("�л� ���� �Է��ϼ���\n");
	scanf("%d", &n); //�л� ���� n���̴�
	score = (int*)malloc(n * sizeof(int)); //�޸� ���� �Ҵ�
	if (score == NULL) //�޸� ������ �Ҵ��� �� ����
	{
		printf("���� �Ҵ� �޸� ����");
		exit(1);
	}
	for (int i = 0; i < n; i++)
	{
		printf("������ �Է��ϼ���\n");
		scanf("%d", &score[i]);
		sum += score[i];
	}
	printf("����� %4.2f\n", (float)sum / n);
	free(score);
	system("pause");
}