#include<stdio.h>

int main(void)
{
	char num[100];
	char rnum[100] = { 0 };
	int count = 0;//rnum�� �ε����� ��Ÿ�� ���� count�� �����Ѵ�.

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(num, 99);//cahr�� �迭 num�� ������ ���ڿ��� �Է¹޴´�.
	for (int i = 0; num[i] != NULL; i++)//�Է¹��� ���ڿ��� ����ŭ �ݺ��Ѵ�.
	{
		if (47 < num[i] && num[i] < 58)//�ƽ�Ű�ڵ�� 48~57�� 2������ 0~9�̹Ƿ� �̰Ϳ� �ش��ϸ� rnum�� �ִ´�.
		{
			rnum[count++] = num[i];
		}
	}
	printf("���: %s\n", rnum);
}
