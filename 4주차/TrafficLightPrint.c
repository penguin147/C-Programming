#include <stdio.h>

int main(void)
{
	char color;
	printf("��ȣ���� ���� �Է� (R, G, Y): ");
	color = getchar();

	if (color == 'R')//�Է¹��� ���ڰ� R�̶�� ���������� ����Ѵ�.
		printf("����\n");

	else if (color == 'G')//�Է¹��� ���ڰ� R�� �ƴϰ� G��� �������� ����Ѵ�.
		printf("����\n");

	else//�Է¹��� ���ڰ� R�� �ƴϰ� G�� �ƴ϶�� �����ǡ��� ����Ѵ�.
		printf("����\n");
	return 0;

}
