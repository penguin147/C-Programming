#include<stdio.h>
int main(void)
{
	int alp_count[26] = { 0 };//�ش� ���ĺ��� ������ �迭�� �����.
	char s[82];//���ڿ��� �Է¹��� �迭
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(s, 81);//���ڿ��� �Է¹޴´�.
	for (int i = 0; i < strlen(s); i++)//�Է¹��� ���ڿ��� ���̸�ŭ �ݺ��Ѵ�.
	{
		int alphabat = 97;
		for (int j = 0; j < 26; j++)//�ش� ���ڰ� � ���ĺ������� �Ǵ��ϰ� �ش� �ε����� �迭�� �����Ѵ�.
		{
			if (s[i] == alphabat)
			{
				alp_count[alphabat - 97]++;
			}
			alphabat++;
		}
	}
	for (int i = 97; i < 123; i++)
	{
		printf("%c: %d\n", i, alp_count[i - 97]);
	}
}
