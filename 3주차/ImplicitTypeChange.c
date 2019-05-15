#include<stdio.h>

int main(void)
{
	double num1, num2;//실수형 변수 num1, num2를 선언한다.
	int result;//정수형 변수 result를 선언한다.
	printf("실수를 입력하시오: ");
	scanf("%lf %lf", &num1, &num2);//사용자로부터 실수 2개를 입력받아 num1, num2에 저장한다.
	result = num1 + num2;//result 에 num1 과 num2를 더한 값을 대입한다.이때 자동 형변환이 발생해 num1+num2의 소수부분이 손실된다.
	printf("합의 정수부 = %d", result);//printf함수를 이용해 result를 출력한다.
	return 0;
}
