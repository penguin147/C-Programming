#include<stdio.h>

int main(void)
{
	int num1;//������ ���� num1�� �����Ѵ�.
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num1);//����ڷκ��� ���� �ϳ��� �Է¹޾� num1�� �����Ѵ�.
	printf("���� �ڸ���: %d\n", num1 / 100);//������ ���� �ڸ� ���ڸ� ���ϱ� 
	printf("���� �ڸ���: %d\n", num1 % 100 / 10);
	printf("���� �ڸ���: %d\n", num1 % 100 % 10);
	return 0;
}
