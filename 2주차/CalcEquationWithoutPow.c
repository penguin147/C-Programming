#include <stdio.h>

int main(void)
{
	double x;//double�� ���� x�� �����Ѵ�.
	printf("x�� ���� �Է��Ͻÿ�:");
	scanf_s("%lf", &x);//����ڷκ��� �Ǽ��� �Է¹޾� x�� �����Ѵ�.
	printf("���׽��� ���� %f�Դϴ�.\n", 3 * x*x*x - 7 * x*x + 9);//���׽��� ���� ����� ����Ѵ�.
	return 0;
}
