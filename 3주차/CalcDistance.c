#include<stdio.h>
#include<math.h>

int main(void)
{
	double x1, x2, y1, y2,distance;//실수형 변수 x1,x2,y1,y2,distance를 선언한다.
	printf("첫번째 점 (x1,y1): ");
	scanf("%lf %lf", &x1, &y1);//scanf함수를 이용해 사용자로부터 실수 두개를 입력받아 x1, y1에 저장한다.
	printf("두번재 점 (x2,y2): ");
	scanf_s("%lf %lf", &x2, &y2);//scanf함수를 이용해 사용자로부터 실수 두개를 입력받아 x2, y2에 저장한다.
	distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));//distance에 제곱근을 계산해주는 sqrt함수와 거듭제곱을 계산해주는 pow함수를 이용해 (x1,y1), (x2,y2)사이의 거리를 계산한 후 저장한다.
	printf("Distance = %lf", distance);//distance를 출력한다.
	return 0;
}
