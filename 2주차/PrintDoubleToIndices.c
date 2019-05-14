#include <stdio.h> 

int main(void)
{
	double num;//double형 변수 num을 선언한다.
	printf("실수를 입력하시오:");
	scanf("%lf", &num);//scanf함수를 이용해 사용자로부터 실수를 입력받아 num에 저장한다.
	printf("실수형식으로는 %lf입니다.\n", num);//num을 실수형식으로 출력한다.
	printf("지수형식으로는 %e입니다.\n", num);//num을 지수형식으로 출력한다.

}
