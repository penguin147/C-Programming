#include <stdio.h>
#include <math.h>
int main(void)
{
	double result = 0, repeat, denominator = 1, count = 2, num;
	printf("반복횟수: ");
	scanf_s("%lf", &repeat);
	while (count - 1 < repeat)//원주율을 구하기 위해 입력받은 횟수만큼 원주율을 구하는 방정식을 반복한다. 반복하는 횟수가 커질수록 정확도가 올라간다.
	{
		result = (pow(-1, count) *  (4 / denominator)) + result;
		denominator = denominator + 2;
		count++;
	}
	printf("%lf", result);
}
