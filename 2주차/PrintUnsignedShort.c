#include <stdio.h>

int main(void)
{
	unsigned short i;//unsigned short형 변수 i를 선언한다. unsigned short형은 0부터 65535까지이다.

	i = 32768;//i를 32767로 초기화한다. i는 unsigned short형이므로 오버플로우되지 않는다.

	printf("i = %d\n", i);//형식지정자 %d를 이용해 i를 10진수로 출력한다.
	return 0;
}
