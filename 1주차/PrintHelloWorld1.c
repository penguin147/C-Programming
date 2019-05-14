#include <stdio.h> //printf, scanf등의 함수가 선언되어 있는 stdio.h 라는 헤더 파일을 이 프로그램에 포함하겠다는 의미이다. 

int main(void)// int(정수)형의 main함수를 선언한다. 이때 입력값은 void(아무것도 없음)이다.
{
	printf("Hello World\n");//괄호 안에 있는 것을 출력해 주는 printf함수를 이용해 문자열인 Hello World를 출력한다.이후 \n(줄바꿈문자)를 사용한다.

	return 0;//main함수에서 0값을 반환한다.일반적으로 0을 반환하는것은 함수를 성공적으로 종료한다는 것을 의미한다.
}
