#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double get_distance(double x1, double y1, double x2, double y2)//이차원 평면상의 두 점을 입력받아 두 점사이의 거리를 구해 반환하는 함수이다.
{
	double d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	return d;
}
int main(void)
{
	double x1, x2, y1, y2;
	printf("첫 번째 점의 좌표를 입력하시오:(x,y)");
	scanf("%lf %lf", &x1, &y1);
	printf("두 번째 점의 좌표를 입력하시오:(x,y)");
	scanf("%lf %lf", &x2, &y2);
	printf("두 점 사이의 거리는 %lf입니다.\n", get_distance(x1, y1, x2, y2));
}
