#include<stdio.h>


int main(void)
{
	int num1, num2, num3;//정수형 변수 num1,num2,num3을 선언한다.
	printf("정수를 3개 입력하시오: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);//scanf함수를 이용해 사용자로부터 정수 3개를 입력받아 num1, num2, num3에 저장한다.
	printf("%d * %d - %d = %d\n", num1, num2, num3, num1*num2 - num3);//printf함수를 이용해 num1,num2,num3,num1*num2-3을 출력한다.
	return 0;
}
