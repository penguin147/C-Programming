#include<stdio.h>

int main(void)
{
	int num1, num2;//������ ���� num1, num2�� �����Ѵ�.
	printf("ù ���� ������ �Է��Ͻÿ�: ");
	scanf("%d", &num1);//scanf�Լ��� �̿��� ����ڷκ��� ������ �Է¹޾� num1�� �����Ѵ�.
	printf("�� ��° ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num2);//scanf�Լ��� �̿��� ����ڷκ��� ������ �Է¹޾� num2�� �����Ѵ�.
	printf("���� %d�̰� �������� %d�Դϴ�.", num1 / num2, num1%num2);//printf�Լ��� �̿��� num1/num2�� num1%num2�� ����Ѵ�. %�� �����������ڷμ� num1������num2�� �������� ��ȯ�ȴ�.
	return 0;
}
