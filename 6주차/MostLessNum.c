#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int most, less, count[10] = { 0 };
	srand(time(NULL));
	for (int num = 0; num < 10; num++)//count�迭�� �������� ���� �����Ѵ�.
	{
		count[num] = rand();
	}
	most = count[0];
	less = count[0];

	for (int i = 1; i < 10; i++)//�ִ񰪰� �ּڰ��� ���ϴ� �˰����ε� ù���� �ε����� �ִ�,�ּڰ����� �����س��� ���� ���� �� ũ�ų� ������ ���� �ִ�,�ּڰ��� �����Ѵ�.
	{
		if (most < count[i])
		{
			most = count[i];
		}

		if (less > count[i])
		{
			less = count[i];
		}
	}
	printf("�ִ밪�� %d\n", most);
	printf("�ּҰ��� %d\n", less);
	return 0;
}
