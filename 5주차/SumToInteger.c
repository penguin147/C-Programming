#include <stdio.h>
int main(void)
{
	int num, result = 0;
	printf("n의 값을 입력하시오: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)//i가 num보다 작거나 같을때까지 result = i*i + result를 실행한다. i의 초깃값은 1이며 한번 반복될때마다 1씩 더한다.
	{
		result = i * i + result;
	}
	printf("계산값은 %d입니다.\n", result);
}
