#include<stdio.h>
struct point//����ü �ϳ��� �����Ѵ�. ����ü�� ������ ���� �ΰ��� �����Ѵ�.
{
	int x, y;
};
int equal(struct point p1, struct point p2)//�� ����ü������ �������� �Ǵ��ϴ� �Լ��̴�.
{
	if (p1.x == p2.y && p1.y == p2.y)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main(void)
{
	struct point p1, p2;//����ü ���� 2���� �����Ѵ�.
	char symbol[5];
	printf("ù��° ��ǥ�� �Է��Ͻÿ�(x, y): ");
	scanf("%d %d", &p1.x, &p1.y);//ù��° ����ü ������ ���� �Ҵ��Ѵ�.
	printf("�ι�° ��ǥ�� �Է��Ͻÿ�(x, y): ");
	scanf("%d %d", &p2.x, &p2.y);//�ι�° ����ü ������ ���� �Ҵ��Ѵ�.
	if (equal(p1, p2) == 1)//���ٸ� =��, �ٸ��� !=�� ���Ѵ�.
	{
		strcpy(symbol, "=");
	}
	else
	{
		strcpy(symbol, "!=");
	}
	printf("(%d,%d) %s (%d,%d)", p1.x, p1.y, symbol, p2.x, p2.y);
}
