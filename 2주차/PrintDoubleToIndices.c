#include <stdio.h> 

int main(void)
{
	double num;//double�� ���� num�� �����Ѵ�.
	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &num);//scanf�Լ��� �̿��� ����ڷκ��� �Ǽ��� �Է¹޾� num�� �����Ѵ�.
	printf("�Ǽ��������δ� %lf�Դϴ�.\n", num);//num�� �Ǽ��������� ����Ѵ�.
	printf("�����������δ� %e�Դϴ�.\n", num);//num�� ������������ ����Ѵ�.

}
