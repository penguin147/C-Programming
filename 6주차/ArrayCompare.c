#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int array_equal(int a[], int b[], int size)//�� �迭�� ���ϴ� �Լ��� �����.
{
	for (int i = 0; i < size; i++)//�迭�� ũ�⸸ŭ �ݺ��ϸ� �ѹ��̶� ���� �ε����� �� �迭�� ���� �ٸ��� 0�� ��ȯ�ϰ� �׷��� �ʴٸ� 1�� ��ȯ�Ѵ�.
	{
		if (a[i] != b[i])
		{
			return 0;
		}
	}
	return 1;
}
int main(void)
{
	int a[8], b[8];
	scanf("%d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7]);//ù��° �迭�� ��Ҹ� �Է¹޴´�.
	scanf("%d %d %d %d %d %d %d %d", &b[0], &b[1], &b[2], &b[3], &b[4], &b[5], &b[6], &b[7]);//�ι�° �迭�� ��Ҹ� �Է¹޴´�.
	int result = array_equal(a, b, 8);
	if (result == 1)
	{
		printf("2���� �迭�� ����");
	}
	else
	{
		printf("2���� �迭�� �ٸ�");
	}
	return 0;
}
