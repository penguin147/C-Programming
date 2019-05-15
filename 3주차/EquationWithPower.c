#include<stdio.h>
#include<math.h>

int main(void)
{
	int num1;//정수형 변수 num1을 선언한다.
	printf("정수를 입력하시오: ");
	scanf_s("%d", &num1);//사용자로부터 정수 하나를 입력받아 num1에 저장한다.
	printf("수식의 값은 %lf입니다.\n", (pow(num1, 3) - 20) / (num1 - 7));//거듭제곱을 계산해주는 pow()함수를 이용해 (num1^3-20) / (num1-7)연산을 수행한 후 출력한다.
	return 0;
}
