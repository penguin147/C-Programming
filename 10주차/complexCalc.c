#include<stdio.h>
struct boksosu//구조체를 생성한다. 구조체는 실수형 변수 두개를 포함한다.
{
	double num;
	double bok;
};
int main(void)
{
	struct boksosu b1, b2;//구조체 변수 두개를 선언한다.
	printf("첫번째 복소수를 입력하시오(a,b): ");
	scanf_s("%lf %lf", &b1.num, &b1.bok);//첫번째 구조체 변수에 값을 할당한다.
	printf("두번째 복소수를 입력하시오(a,b): ");
	scanf_s("%lf %lf", &b2.num, &b2.bok);//두번째 구조체 변수에 값을 할당한다.
	printf("%0.1lf + %0.1lfi\n", b1.num + b2.num, b1.bok + b2.bok);
}
