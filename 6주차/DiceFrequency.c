#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	srand(time(NULL));
	int whatmyun[6] = { 0 };
	for (int i = 0; i < 60000; i++)//�ֻ����� 60000�� �����ٰ� �����Ͽ� 60000�� �ݺ��Ѵ�.
	{
		int myun = (rand() % 6);//�ֻ����� 1���� 6������ ���� �ϳ��̹Ƿ� 1���� 6������ �������� ���� myun�� �����Ѵ�.
		for (int j = 0; j < 6; j++)//�ش� ���� ������ �� �� - 1 ��° �ε����� ���� 1 ���Ѵ�.
		{
			if (myun == j)
			{
				whatmyun[j]++;
			}
		}
	}
	printf("====================\n");
	printf("��        ��      \n");
	printf("====================\n");
	for (int i = 0; i < 6; i++)//1���� 6������ ��� ���� �󵵸� ����Ѵ�.
	{
		printf("%d         %d\n", i + 1, whatmyun[i]);
	
	}


	return 0;
}
