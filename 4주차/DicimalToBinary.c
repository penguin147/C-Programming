#include <stdio.h>

int main(void)
{
	int binary, num;//정수형 변수 binary 와 num을 선언한다.
	printf("1~255사이의 숫자를 입력하세요");
	scanf("%d", &num);
	for (int i = 7; i > -1; i--)//정수형 변수 i를 선언하고 7로 초기화한 후 한번 반복시마다 i--를 하며 i > -1를 만족하지 않을때까지 10~11번째줄을 반복한다.
	{
		binary = (num >> i) & 1;//binary 에 (num >> i) & 1의 값을 대입한다. 이때 num >> i는 num의 비트를 i만큼 오른쪽으로 이동시키라는 것이고 & 1은 num >> i의 비트가 1 즉, 00000001과 and연산을 한다는 것이다.
		printf("%d", binary);//binary값을 출력한다.
	}
	printf("\n");
}
