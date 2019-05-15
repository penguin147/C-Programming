#include<stdio.h>

int main(void)
{
	int num1, num2;//정수형 변수 num1, num2를 선언한다.
	printf("첫 번재 정수를 입력하시오: ");
	scanf("%d", &num1);//scanf함수를 이용해 사용자로부터 정수를 입력받아 num1에 저장한다.
	printf("두 번째 정수를 입력하시오: ");
	scanf_s("%d", &num2);//scanf함수를 이용해 사용자로부터 정수를 입력받아 num2에 저장한다.
	printf("몫은 %d이고 나머지는 %d입니다.", num1 / num2, num1%num2);//printf함수를 이용해 num1/num2와 num1%num2를 출력한다. %는 나머지연산자로서 num1나누기num2의 나머지가 반환된다.
	return 0;
}
