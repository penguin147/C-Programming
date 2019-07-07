#include<stdio.h>
struct account//account라는 구조체를 선언한다.구조체는 정수변수 2개, 문자형 변수 1개를 포함한다.
{
	int number;
	char name[20];
	int balance;
};
int main(void)
{
	struct account a1 = { 1, "홍길동", 100000 };//구조체 변수를 선언하고 값을 할당한다.
	printf("{%d, %s, %d}\n", a1.number, a1.name, a1.balance);
}
