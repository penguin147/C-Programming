#include<stdio.h>
#include<string.h>
int main(void)
{
	char ori[100];//original���ڿ��� ������ �迭
	char comp[100];//compare���ڿ��� ������ �迭
	printf("���ڿ�1�� �Է��Ͻÿ�: ");
	gets_s(ori, 99);//ori�� ���ڿ��� �Է¹޾� �����Ѵ�.
	printf("���ڿ�2�� �Է��Ͻÿ�: ");
	gets_s(comp, 99);//comp�� ���ڿ��� �Է¹޾� �����Ѵ�.
	if (strcmp(ori, comp) == 1)//strcmp�� �� ���ڿ��� ������ 0, �ٸ��� 1�� ��ȯ�ϴ� �Լ��̴�.
	{
		printf("ǥ��!!\n");
	}
	else
	{
		printf("ǥ���ƴ�!!\n");
	}
	return 0;
}
