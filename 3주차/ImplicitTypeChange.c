#include<stdio.h>

int main(void)
{
	double num1, num2;//�Ǽ��� ���� num1, num2�� �����Ѵ�.
	int result;//������ ���� result�� �����Ѵ�.
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &num1, &num2);//����ڷκ��� �Ǽ� 2���� �Է¹޾� num1, num2�� �����Ѵ�.
	result = num1 + num2;//result �� num1 �� num2�� ���� ���� �����Ѵ�.�̶� �ڵ� ����ȯ�� �߻��� num1+num2�� �Ҽ��κ��� �սǵȴ�.
	printf("���� ������ = %d", result);//printf�Լ��� �̿��� result�� ����Ѵ�.
	return 0;
}
