#include <stdio.h>

int main(void)
{
	char color;
	printf("신호등의 색깔 입력 (R, G, Y): ");
	color = getchar();

	if (color == 'R')//입력받은 문자가 R이라면 “정지”를 출력한다.
		printf("정지\n");

	else if (color == 'G')//입력받은 문자가 R이 아니고 G라면 “진행을 출력한다.
		printf("진행\n");

	else
		printf("주의\n");//입력받은 문자가 R도 아니고 G도 아니라면 “주의”를 출력한다.
	return 0;

}
