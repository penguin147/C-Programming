#include<stdio.h>

int main(void)
{
	int num1;//정수형 변수 num1을 선언한다.
	printf("정수를 입력하시오: ");
	scanf_s("%d", &num1);//사용자로부터 정수 하나를 입력받아 num1에 저장한다.
	printf("백의 자리수: %d\n", num1 / 100);//어떤 정수의 백의자리수는 그 정수를 100으로 나눈 몫이다.
	printf("십의 자리수: %d\n", num1 % 100 / 10);//어떤 정수의 십의자리수는 그 정수를 100으로 나눈 나머지를 10으로 나눈 몫이다.
	printf("일의 자리수: %d\n", num1 % 100 % 10);//어떤 정수의 일의자리수는 그 정수를 100으로 나눈 나머지를 10으로 나눈 나머지이다.
	return 0;
}