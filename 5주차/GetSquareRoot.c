#include <stdio.h>
int main(void)
{
	int num = 1;
	double x, a;
	printf("어떤 수의 제곱근을 알고싶으신가요?: ");
	scanf_s("%lf", &a);
	x = a;
	while (num < 100000)//제곱근을 구하기위해 100000번 계산하지만 수를 더 올릴수록 정확도가 올라간다.
	{
		x = (a / x + x) * 1 / 2;//x에 (a/x+x)*1/2를 대입한다. 이때 1/2를 먼저 쓰게 되면 c언어에서는 정수와 실수의 계산의 값을 정수부분만 처리하기 때문에 1/2를 나중에 적어야 한다.
		num++;
	}
	printf("%lf", x);
}
