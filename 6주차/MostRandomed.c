#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int most, index, value, count[10] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < 100; i++)//������ ���� value�� 0���� 9���� ���߿� �������� �̾� �����ϰ� count�迭�� value��° �ε����� 1 �ø���.�̸� 100�� �����Ѵ�.
	{
		value = rand() % 10;
		count[value]++;
	}
	most = count[0];
	index = 0;
	for (int i = 1; i < 10; i++)//���� ū ���� �̴� �˰����̴�. ù��° ���� most�� ��� ���� �װ� ���Ͽ� �������� �� ũ�ٸ� most�� �����Ѵ�.
	{
		if (most < count[i])
		{
			most = count[i];
			index = i;
		}
		
	}
	printf("���� ���� ������ �� = %d\n", index);
	return 0;
}
