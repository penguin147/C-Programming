#include<stdio.h>
#include<math.h>

int main(void)
{
	double x1, x2, y1, y2,distance;//�Ǽ��� ���� x1,x2,y1,y2,distance�� �����Ѵ�.
	printf("ù��° �� (x1,y1): ");
	scanf("%lf %lf", &x1, &y1);//scanf�Լ��� �̿��� ����ڷκ��� �Ǽ� �ΰ��� �Է¹޾� x1, y1�� �����Ѵ�.
	printf("�ι��� �� (x2,y2): ");
	scanf_s("%lf %lf", &x2, &y2);//scanf�Լ��� �̿��� ����ڷκ��� �Ǽ� �ΰ��� �Է¹޾� x2, y2�� �����Ѵ�.
	distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));//distance�� �������� ������ִ� sqrt�Լ��� �ŵ������� ������ִ� pow�Լ��� �̿��� (x1,y1), (x2,y2)������ �Ÿ��� ����� �� �����Ѵ�.
	printf("Distance = %lf", distance);//distance�� ����Ѵ�.
	return 0;
}
