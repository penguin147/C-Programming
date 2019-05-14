#include <stdio.h>

int main(void)
{
	short i;//short형 변수 i를 선언한다. short형은 -32768에서 32767까지 이다.

	i = 32768;//i를 32767로 초기화한다. short형의 크기가 32767까지이므로 32768으로 초기화할시 -32768로 오버플로우된다.
	printf("i = %d\n", i);//형식지정자 %d를 이용해 i를 10진수로 출력한다.
	return 0;
}
