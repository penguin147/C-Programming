#include <stdio.h>
#include<math.h>

int main(void)
{
	double x;//double�� ���� x�� �����Ѵ�.
	printf("x�� ���� �Է��Ͻÿ�:");
	scanf_s("%lf", &x);//����ڷκ��� �Ǽ��� �Է¹޾� x�� �����Ѵ�.
	printf("���׽��� ���� %f�Դϴ�.\n", 3 * pow(x, 3) - 7 * pow(x, 2) + 9);//������ �����ִ� �Լ� pow()�� �̿��Ͽ� ���׽��� ���� ����Ѵ�.
	return 0;
}
