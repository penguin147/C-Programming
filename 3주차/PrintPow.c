#include<stdio.h>


int main(void)
{
	int num1, num2, num3;//������ ���� num1,num2,num3�� �����Ѵ�.
	printf("������ 3�� �Է��Ͻÿ�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);//scanf�Լ��� �̿��� ����ڷκ��� ���� 3���� �Է¹޾� num1, num2, num3�� �����Ѵ�.
	printf("%d * %d - %d = %d\n", num1, num2, num3, num1*num2 - num3);//printf�Լ��� �̿��� num1,num2,num3,num1*num2-3�� ����Ѵ�.
	return 0;
}
