#include <stdio.h> 
#define SQMETER_PER_PYEONG 3.3058//#define�� �̿��� SQMETER_PER_PYEONG�� 3.3058�� �����Ѵ�.
int main(void)
{
	double how_pyung;//double�� ���� how_pyung�� �����Ѵ�.
	printf("���� �Է��ϼ���:");
	scanf_s("%lf", &how_pyung);//����ڷκ��� �Ǽ��� �Է¹޾� how_pyung�� �����Ѵ�.
	printf("%lf�������Դϴ�.\n", how_pyung*SQMETER_PER_PYEONG);//how_pyung * SQMETER_PER_PYEONG�� ���� ����Ѵ�.
	return 0;
}
