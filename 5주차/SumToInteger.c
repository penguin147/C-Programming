#include <stdio.h>
int main(void)
{
	int num, result = 0;
	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)//i�� num���� �۰ų� ���������� result = i*i + result�� �����Ѵ�. i�� �ʱ갪�� 1�̸� �ѹ� �ݺ��ɶ����� 1�� ���Ѵ�.
	{
		result = i * i + result;
	}
	printf("��갪�� %d�Դϴ�.\n", result);
}
