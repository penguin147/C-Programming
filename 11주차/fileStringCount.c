#include<stdio.h>
int main(void)
{
	FILE *fp;//�ؽ�Ʈ ������ ������ ������ ���������͸� �����Ѵ�.
	fp = fopen("sample.txt", "r");//���������Ϳ� "fileStringCount.txt"�� ��ü�� ����Ű�� �����͸� �����Ѵ�.
	char value[100];
	int i = 0, sum = 0, count = 0;
	while (1)
	{
		if (feof(fp)) break;//���� ������������ ���� EOF��� ������ ����������.
		fgets(value, 99, fp);//�ؽ�Ʈ ������ ���ڿ� ������ ������ value�� �����Ѵ�.
		printf("%s", value);//������ ���ڿ��� ����Ѵ�.
		count++;//������ ���ڿ��� ���� ����.
	}
	printf("\n������ ���� = %d\n", count);
	return 0;
}
