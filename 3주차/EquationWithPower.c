#include<stdio.h>
#include<math.h>

int main(void)
{
	int num1;//������ ���� num1�� �����Ѵ�.
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num1);//����ڷκ��� ���� �ϳ��� �Է¹޾� num1�� �����Ѵ�.
	printf("������ ���� %lf�Դϴ�.\n", (pow(num1, 3) - 20) / (num1 - 7));//�ŵ������� ������ִ� pow()�Լ��� �̿��� (num1^3-20) / (num1-7)������ ������ �� ����Ѵ�.
	return 0;
}
