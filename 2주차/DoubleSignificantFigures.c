#include <stdio.h> 

int main(void)
{
	double x;//double형 변수 x를 선언한다. double은 float와 같은 실수형 자료형이지만 float보다 표현범위가 넓다.

	x = 1.2345678901234567890;//x를 1.2345678901234567890으로 초기화한다.
	printf("x=%10.20f\n", x);//double형의 유효숫자는 16자리이기 때문에 소수점 16자리까지는 제대로 출력된다.
	return 0;
}
