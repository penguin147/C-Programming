#include <stdio.h>

int main(void)
{
	int num;
	printf("정수를 입력하시오.");
	scanf("%d", &num);
	if (num % 2 == 1)//입력 받은 정수 num이 짝수인지 홀수인지를 구별하기 위해 2로 나눈 나머지가 1인지 0인지를 구별한다. 1이라면 홀수일 것이고 0이라면 짝수일 것이다.
	{
		printf("%d는(은) 홀수입니다.\n", num);
	}
	else
	{
		printf("%d는(은) 짝수입니다.\n", num);
	}
	return 0;
}
