#include <stdio.h>
#include <math.h>
int main(void)
{
	double result = 0, repeat, denominator = 1, count = 2, num;
	printf("�ݺ�Ƚ��: ");
	scanf_s("%lf", &repeat);
	while (count - 1 < repeat)//�������� ���ϱ� ���� �Է¹��� Ƚ����ŭ �������� ���ϴ� �������� �ݺ��Ѵ�. �ݺ��ϴ� Ƚ���� Ŀ������ ��Ȯ���� �ö󰣴�.
	{
		result = (pow(-1, count) *  (4 / denominator)) + result;
		denominator = denominator + 2;
		count++;
	}
	printf("%lf", result);
}
