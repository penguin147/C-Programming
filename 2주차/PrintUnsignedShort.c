#include <stdio.h>

int main(void)
{
	unsigned short i;//unsigned short�� ���� i�� �����Ѵ�. unsigned short���� 0���� 65535�����̴�.

	i = 32768;//i�� 32767�� �ʱ�ȭ�Ѵ�. i�� unsigned short���̹Ƿ� �����÷ο���� �ʴ´�.

	printf("i = %d\n", i);//���������� %d�� �̿��� i�� 10������ ����Ѵ�.
	return 0;
}
