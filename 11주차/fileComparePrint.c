#include<stdio.h>
int main(void)
{
	FILE *fp;//���� �ؽ�Ʈ ������ ������ ������ ���������͸� �����Ѵ�.
	FILE *fpp;//���� �ؽ�Ʈ ������ ������ ������ ���������͸� �����Ѵ�.
	char Fvalue[100] = { 0 }, Svalue[100] = { 0 }, Fname[100], Sname[100];
	int compare;
	printf("ù��° ���� �̸�: ");
	gets_s(Fname, 99);//����ڷκ��� ���ڿ��� �Է¹޾� Fname�� �����Ѵ�.
	printf("�ι�° ���� �̸�: ");
	gets_s(Sname, 99);//����ڷκ��� ���ڿ��� �Է¹޾� Sname�� �����Ѵ�.
	fp = fopen(Fname, "r");//���������Ϳ� Fname�� ��ü�� ����Ű�� �����͸� �����Ѵ�.
	fpp = fopen(Sname, "r");//���������Ϳ� Sname�� ��ü�� ����Ű�� �����͸� �����Ѵ�.
	while (1)
	{
		if (feof(fp)) break;//���� ������������ ���� EOF��� ������ ����������.
		fgets(Fvalue, 99, fp);//fp�κ��� ���ڿ� ������ Fvalue�� �����Ѵ�.
		fgets(Svalue, 99, fpp);//fpp�κ��� ���ڿ� ������ Svalue�� �����Ѵ�.
		compare = strcmp(Fvalue, Svalue);//Fvalue�� Svalue�� ���� ���Ѵ�.
		if (compare != 0)//�� ������ �����̶� �ٸ��ٸ� �ٸ� ������ ����ϰ� ������ ����������.
		{
			printf("%s%s", Fvalue, Svalue);
			break;
		}
	}
	if (compare == 0)
	{
		printf("�� ������ �����ϴ�.\n");
	}
	return 0;
}
