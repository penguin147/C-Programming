#include<stdio.h>
#include<stdlib.h>
double circum(double r)//�������� �Է��ϸ� ���� �ѷ��� ����� ��ȯ�Ѵ�.
{
	double circum = 2 * 3.14 * r;
	return circum;
}
double area(double r)//�������� �Է��ϸ� ���� ���̸� ����� ��ȯ�Ѵ�.
{
	double area = r * r * 3.14;
	return area;
}
int main(void)
{
	double r;//�������� ������ �Ǽ��� ���� r�� �����Ѵ�.
	while (1)
	{
		printf("���� �������� �Է��Ͻÿ�: ");
		scanf("%lf", &r);
		if (r == -1)
		{
			break;
		}
		printf("���� ������ %lf�Դϴ�.\n", area(r));
		printf("���� �ѷ��� %lf�Դϴ�.\n", circum(r));

	}
}
