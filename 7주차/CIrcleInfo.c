#include<stdio.h>
#include<stdlib.h>
double circum(double r)//반지름을 입력하면 원의 둘레를 계산해 반환한다.
{
	double circum = 2 * 3.14 * r;
	return circum;
}
double area(double r)//반지름을 입력하면 원의 넓이를 계산해 반환한다.
{
	double area = r * r * 3.14;
	return area;
}
int main(void)
{
	double r;//반지름을 저장할 실수형 변수 r을 선언한다.
	while (1)
	{
		printf("원의 반지름을 입력하시오: ");
		scanf("%lf", &r);
		if (r == -1)
		{
			break;
		}
		printf("원의 면적은 %lf입니다.\n", area(r));
		printf("원의 둘레는 %lf입니다.\n", circum(r));

	}
}
