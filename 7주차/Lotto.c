#include<stdio.h>
#include<stdlib.h>
int get_number(void)//�ζǹ�ȣ�� �������� �̾� ��ȯ�ϴ� �Լ��̴�.
{
	int rotto_num = rand() % 45 + 1;
	return rotto_num;
}
int main(void)
{
	srand(time(NULL));
	int rotto[6];
	for (int i = 0; i < 6; i++)//�ζǹ迭�� �ζǹ�ȣ�� �޾� �����Ѵ�.
	{
		rotto[i] = get_number();
	}
	while (1)//rotto�迭 �ȿ� �ִ� ��ҵ��� ���� ��ġ������ �˻��Ѵ�. �ݺ����� ���� ����Ͽ� 0��°�迭�� 1��°�迭, 0��°�迭�� 2��°�迭 �̷� ������� �迭�� ��ҵ��� ���� ���� ���� ������ get_number�Լ��� �̿��� �ߺ��Ǵ� ��Ҹ� �ٽ� �ʱ�ȭ�Ѵ�. �׸��� �ߺ��Ǵ� ��Ҹ� �ʱ�ȭ �� ������ a++�� �����Ѵ�. �˻簡 ���� �� a�� 0�̶�� ��, �˻� ���� �ߺ��Ǵ� ��Ұ� �ѹ��� �����ٸ� �˻��ϴ� ������ �����.
	{
		int a = 0;
		for (int i = 0; i < 6; i++)
		{
			for (int j = i + 1; j < 6; j++)
			{
				if (rotto[i] == rotto[j])
				{
					rotto[i] = rand() % 45 + 1;
					a++;
				}
			}
		}
		if (a == 0)
		{
			break;
		}
	}
	printf("������ �ζ� ��ȣ�� ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d, ", rotto[i]);
	}
	printf("%d�Դϴ�.\n", rotto[5]);
}
