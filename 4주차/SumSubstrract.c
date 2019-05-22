#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("정수를 입력하시오 :");
	scanf("%d", &num1);
	printf("정수를 입력하시오 :");
	scanf("%d", &num2);
	printf("두 수의 합은 %d입니다.\n", num1 + num2);//입력받은 두 정수의 합은 어느쪽이 큰지가 상관이 없으므로 그냥 더한다.
	if (num1 > num2)
		printf("두 수의 차는 %d입니다.\n", num1 - num2);//만약 num1이 num2 보다 크다면 두 수의 차는 num1 – num2이므로 이를 출력한다.
	else
		printf("두 수의 차는 %d입니다.\n", num2 - num1);//만약 num1이 num2보다 크지 않다면 두 수의 차는 num2 – num1이므로 이를 출력한다.
	return 0;
}
