#include<stdio.h>

int main(void)
{
	int num1;//정수형 변수 num1을 선언한다.
	printf("정수를 입력하시오: ");
	scanf_s("%d", &num1);//사용자로부터 정수 하나를 입력받아 num1에 저장한다.
	printf("백의 자리수: %d\n", num1 / 100);//정수의 백의 자리 숫자를 정하기 
	printf("십의 자리수: %d\n", num1 % 100 / 10);
	printf("일의 자리수: %d\n", num1 % 100 % 10);
	return 0;
}
