#include<stdio.h>
int main(void)
{
	FILE *fp;//�ؽ�Ʈ ������ ������ ������ ���������͸� �����Ѵ�.
	char Fvalue[100] = { 0 }, Fname[100];
	int count = 1;
	printf("���� �̸��� �Է��Ͻÿ�: ");
	gets_s(Fname, 99);//����ڷκ��� ���ڿ��� �Է¹޾� Fname�� �����Ѵ�.
	fp = fopen(Fname, "r");////���������Ϳ� Fname�� ��ü�� ����Ű�� �����͸� �����Ѵ�.
	while (1)
	{
		if (feof(fp)) break;//���� ������������ ���� EOF��� ������ ����������.
		fgets(Fvalue, 99, fp);//fp�κ��� ���ڿ� ������ Fvalue�� �����Ѵ�.
		printf("%d     %s", count, Fvalue);
		count++;
	}
	printf("\n");
	return 0;
}
