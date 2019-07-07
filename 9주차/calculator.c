#include<stdio.h>
#include<string.h>
int main(voin)
{
	char cal[8];//
	int what_cal = 0;
	printf("연산을 입력하시오: ");
	gets_s(cal, 8);//연산종류와 수를 입력받는다. 1의자리수만 가능하다.
	printf("연산 결과: ");
	cal[4] -= 48;//48을 빼므로서 실제 값을 가지도록 한다.
	cal[6] -= 48;//48을 빼므로서 실제 값을 가지도록 한다.
	switch (cal[0])//구현해야 하는 연산은 add, sub, div, mul이므로 첫글자로서 연산을 판단할수 있다.
	{
	case 97: printf("%d", cal[4] + cal[6]); break;//더하기
	case 100: printf("%d", cal[4] / cal[6]); break;//나누기
	case 109: printf("%d", cal[4] * cal[6]); break;//곱하기
	case 115: printf("%d", cal[4] - cal[6]); break;//빼기
	}
	return 0;
}
