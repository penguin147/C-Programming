#include<stdio.h>
#include<stdlib.h>

int move(char *road ,int direction ,int where)//���� �����̴� �Լ��� �ۼ��Ѵ�. direction�� 1�̸� ������, 0�̸� �������� �����δ�.
{
	if (direction == 0)
	{
		road[where] = '_';
		where -= 1;
		road[where] = '*';
	}
	else
	{
		road[where] = '_';
		where += 1;
		road[where] = '*';
	}
	return where;

}

int main(void)
{
	int where = 5;
	char road[10] = { '_','_','_','_','_','*','_','_','_','_' };//���� �����ϼ� �ִ� ���� ��Ÿ�� ũ�Ⱑ 10�� �迭�� '_'�� �ʱ�ȭ�Ѵ�.
	
	for (int j = 0; j < 10; j++)//������ ���¸� ����Ѵ�.
	{
		printf("%c", road[j]);
	}
	printf("\n");

	srand(time(NULL));
	for (int i = 0; i < 20; i++)
	{
		getch();
		getch();
		int direction = rand() % 2;//���� ������ ������ �����Ѵ�. direction�� 1�̸� ������, 0�̸� �������� �����δ�.
		if (where == 0)//���� ���� ���� ���ʿ� �ִٸ� ������ ���������� �����̰� �Ѵ�.
		{
			direction = 1;
		}
		else if (where == 9)
		{
			direction = 0;
		}
		
		where = move(road, direction, where);//������ �������ιۿ� �������� ���ϴ� ��츦 ���������� ���� Ȯ����� �����̰� �Ѵ�.

		for (int j = 0; j < 10; j++)//��Ȳ�� ����Ѵ�.
		{
			printf("%c", road[j]);
		}
		printf("\n");
	}

	return 0;
}
