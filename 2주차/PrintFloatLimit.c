#include <stdio.h> 

int main(void)
{
	double x;//double형 변수 x를 선언한다. double은 float와 같은 실수형 자료형이지만 float보다 표현범위가 넓다.

	x = 1.23456e-46;//x를 1.23456e-46로 초기화한다. 1.23456e-46란 지수표기법으로 1.23456 * 10 ^ -46을 의미한다.
	printf("x=%10.51lf\n", x);//%lf를 이용해 x를 실수형으로 출력한다..

	return 0;
}
