#include<stdio.h>

struct email//구조체 email을 선언한다. 구조체는 문자형 변수 5개, 정수형 변수 하나를 포함한다.
{
	char title[15];
	char sender[50];
	char receiver[50];
	char content[100];
	char date[20];
	int pri;
};
int main(void)
{
	struct email e1;//구조체 변수를 선언하고 값을 입력받아 할당한다.
	printf("제목: ");
	gets_s(e1.title, 15);
	printf("수신자: ");
	gets_s(e1.sender, 50);
	printf("발신자: ");
	gets_s(e1.receiver, 50);
	printf("내용: ");
	gets_s(e1.content, 100);
	printf("날짜: ");
	gets_s(e1.date, 20);
	printf("우선순위: ");
	scanf_s("%d", &e1.pri);
}
