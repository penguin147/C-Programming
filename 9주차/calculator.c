#include<stdio.h>
#include<string.h>
int main(voin)
{
	char cal[8];//
	int what_cal = 0;
	printf("������ �Է��Ͻÿ�: ");
	gets_s(cal, 8);//���������� ���� �Է¹޴´�. 1���ڸ����� �����ϴ�.
	printf("���� ���: ");
	cal[4] -= 48;//48�� ���Ƿμ� ���� ���� �������� �Ѵ�.
	cal[6] -= 48;//48�� ���Ƿμ� ���� ���� �������� �Ѵ�.
	switch (cal[0])//�����ؾ� �ϴ� ������ add, sub, div, mul�̹Ƿ� ù���ڷμ� ������ �Ǵ��Ҽ� �ִ�.
	{
	case 97: printf("%d", cal[4] + cal[6]); break;//���ϱ�
	case 100: printf("%d", cal[4] / cal[6]); break;//������
	case 109: printf("%d", cal[4] * cal[6]); break;//���ϱ�
	case 115: printf("%d", cal[4] - cal[6]); break;//����
	}
	return 0;
}
