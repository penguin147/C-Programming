#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c, one, two;
	printf("계수 a를 입력하시오 : ");
	scanf("%lf", &a);
	printf("계수 b를 입력하시오 : ");
	scanf("%lf", &b);
	printf("계수 c를 입력하시오 : ");
	scanf("%lf", &c);
	one = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);//one에 첫번째 해인 (-b + sqrt(b*b - 4 * a*c)) / (2 * a)를 대입한다.
	two = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);//two에 첫번째 해인 (-b - sqrt(b*b - 4 * a*c)) / (2 * a)를 대입한다.
	if (a == 0)//만약 a가 0이라면 이차방정식의 해는 -c/b이므로 이를 출력한다.
		printf("위의 이차 방정식의 실근은 %2.2lf입니다.", -c / b);
	else if ((b*b - 4 * a*c) <= 0)//만약 판별식이 0이거나 음수라면 이차방정식의 해는 존재하지 않으므로 이를 출력한다.
		printf("위의 이차 방정식의 실근은 존재하지 않습니다.");
	else//만약 a가 0이 아니고 판별식이 0또는음수가 아니라면 이차 방정식의 해는 one과 two이므로 이를 출력한다.
		printf("위의 이차 방정식의 실근은 %2.2lf와 %2.2lf입니다.", one, two);
	return 0;
}
