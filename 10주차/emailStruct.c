#include<stdio.h>

struct email//����ü email�� �����Ѵ�. ����ü�� ������ ���� 5��, ������ ���� �ϳ��� �����Ѵ�.
{
	char title[15];
	char sender[50];
	char receiver[50];
	char content[100];
	char date[20];
	int pri;
};
int main(void)
{
	struct email e1;//����ü ������ �����ϰ� ���� �Է¹޾� �Ҵ��Ѵ�.
	printf("����: ");
	gets_s(e1.title, 15);
	printf("������: ");
	gets_s(e1.sender, 50);
	printf("�߽���: ");
	gets_s(e1.receiver, 50);
	printf("����: ");
	gets_s(e1.content, 100);
	printf("��¥: ");
	gets_s(e1.date, 20);
	printf("�켱����: ");
	scanf_s("%d", &e1.pri);
}
