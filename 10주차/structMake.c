#include<stdio.h>
struct account//account��� ����ü�� �����Ѵ�.����ü�� �������� 2��, ������ ���� 1���� �����Ѵ�.
{
	int number;
	char name[20];
	int balance;
};
int main(void)
{
	struct account a1 = { 1, "ȫ�浿", 100000 };//����ü ������ �����ϰ� ���� �Ҵ��Ѵ�.
	printf("{%d, %s, %d}\n", a1.number, a1.name, a1.balance);
}
