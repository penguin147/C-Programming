#include<stdio.h>
struct boksosu//����ü�� �����Ѵ�. ����ü�� �Ǽ��� ���� �ΰ��� �����Ѵ�.
{
	double num;
	double bok;
};
int main(void)
{
	struct boksosu b1, b2;//����ü ���� �ΰ��� �����Ѵ�.
	printf("ù��° ���Ҽ��� �Է��Ͻÿ�(a,b): ");
	scanf_s("%lf %lf", &b1.num, &b1.bok);//ù��° ����ü ������ ���� �Ҵ��Ѵ�.
	printf("�ι�° ���Ҽ��� �Է��Ͻÿ�(a,b): ");
	scanf_s("%lf %lf", &b2.num, &b2.bok);//�ι�° ����ü ������ ���� �Ҵ��Ѵ�.
	printf("%0.1lf + %0.1lfi\n", b1.num + b2.num, b1.bok + b2.bok);
}
