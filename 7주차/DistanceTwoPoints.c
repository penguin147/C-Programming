#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double get_distance(double x1, double y1, double x2, double y2)//������ ������ �� ���� �Է¹޾� �� �������� �Ÿ��� ���� ��ȯ�ϴ� �Լ��̴�.
{
	double d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	return d;
}
int main(void)
{
	double x1, x2, y1, y2;
	printf("ù ��° ���� ��ǥ�� �Է��Ͻÿ�:(x,y)");
	scanf("%lf %lf", &x1, &y1);
	printf("�� ��° ���� ��ǥ�� �Է��Ͻÿ�:(x,y)");
	scanf("%lf %lf", &x2, &y2);
	printf("�� �� ������ �Ÿ��� %lf�Դϴ�.\n", get_distance(x1, y1, x2, y2));
}
