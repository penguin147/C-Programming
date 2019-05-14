#include <stdio.h>

int main(void)
{
	double x;//double형 변수 x를 선언한다.
	printf("x의 값을 입력하시오:");
	scanf_s("%lf", &x);//사용자로부터 실수를 입력받아 x에 저장한다.
	printf("다항식의 값은 %f입니다.\n", 3 * x*x*x - 7 * x*x + 9);//다항식의 값을 계산해 출력한다.
	return 0;
}
