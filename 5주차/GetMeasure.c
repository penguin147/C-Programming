#include <stdio.h>
int main(void)
{
	int num;
	printf("Enter a positive integer : ");
	scanf("%d", &num);
	printf("Factors of %d are: ", num);
	for (int i = 1; i <= num; i++)//�ʱ갪�� 1�� i�� num������ �� �Ʒ� ������ �ݺ��Ѵ�.Num�� i�� ���� ���� 0�̶�� �� ���� ����Ѵ�.�� ������ �ѹ� �ݺ��ɶ����� i++�� �����Ѵ�.

	{
		if (num%i == 0)
		{
			printf("%d  ", i);
		}
	}
}
