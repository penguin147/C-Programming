#include<stdio.h>
struct point//구조체 하나를 선언한다. 구조체는 정수형 변수 두개를 포함한다.
{
	int x, y;
};
int equal(struct point p1, struct point p2)//두 구조체변수가 같은지를 판단하는 함수이다.
{
	if (p1.x == p2.y && p1.y == p2.y)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main(void)
{
	struct point p1, p2;//구조체 변수 2개를 선언한다.
	char symbol[5];
	printf("첫번째 좌표를 입력하시오(x, y): ");
	scanf("%d %d", &p1.x, &p1.y);//첫번째 구조체 변수에 값을 할당한다.
	printf("두번째 좌표를 입력하시오(x, y): ");
	scanf("%d %d", &p2.x, &p2.y);//두번째 구조체 변수에 값을 할당한다.
	if (equal(p1, p2) == 1)//같다면 =를, 다르면 !=를 더한다.
	{
		strcpy(symbol, "=");
	}
	else
	{
		strcpy(symbol, "!=");
	}
	printf("(%d,%d) %s (%d,%d)", p1.x, p1.y, symbol, p2.x, p2.y);
}
