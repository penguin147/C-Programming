#include <stdio.h>

int main(void)
{
	short i;//short�� ���� i�� �����Ѵ�. short���� -32768���� 32767���� �̴�.

	i = 32767;//i�� 32767�� �ʱ�ȭ�Ѵ�.
	printf("i = %x\n", i);//���������� %x�� �̿��� i�� 16������ ����Ѵ�.
	return 0;
}
