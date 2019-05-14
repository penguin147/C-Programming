#include <stdio.h>

int main(void)
{
	short i;//short형 변수 i를 선언한다.
	i = 32767;//i를 32767로 초기화한다.
	printf("i = %o\n", i);//형식지정자 %o를 이용해 i를 8진수로 출력한다.
	return 0;
}
