#include <stdio.h>
int main(void)
{
	int num;
	printf("Enter a positive integer : ");
	scanf("%d", &num);
	printf("Factors of %d are: ", num);
	for (int i = 1; i <= num; i++)//초깃값이 1인 i가 num이하일 때 아래 내용을 반복한다.Num을 i로 나눈 수가 0이라면 그 수를 출력한다.이 시행이 한번 반복될때마다 i++를 실행한다.

	{
		if (num%i == 0)
		{
			printf("%d  ", i);
		}
	}
}
