#include<stdio.h>
int main(void)
{
	FILE *fp;//�ؽ�Ʈ ������ ������ ������ ���������͸� �����Ѵ�.
	fp = fopen("fileIntegerAdd.txt", "r");//���������Ϳ� "fileIntegerAdd.txt"�� ��ü�� ����Ű�� �����͸� �����Ѵ�.
	int value;
	int i = 0, sum = 0;
	double count = 0;
	do
	{
		fscanf(fp, "%d", &value);//value�� �ּҰ��� fileIntegerAdd.txt�� �ִ� ���� �ϳ��� ����Ű���� �Ѵ�.
		sum = value + sum;
		i++;
		count++;
	} while (fgetc(fp) != EOF);//EOF�� end of file�� �ظ��� �������� �ǹ��Ѵ�. ��, fileIntegerAdd.txt���� ������ ���� ���������� �ݺ��Ѵ�.
	printf("�������� ����: %0.0lf\n", count);
	printf("�������� �հ�: %d\n", sum);
	printf("�������� ���: %0.2lf\n", sum / count);
	return 0;
}
