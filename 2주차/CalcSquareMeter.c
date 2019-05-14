#include <stdio.h> 
#define SQMETER_PER_PYEONG 3.3058//#define을 이용해 SQMETER_PER_PYEONG을 3.3058로 지정한다.
int main(void)
{
	double how_pyung;//double형 변수 how_pyung을 선언한다.
	printf("평을 입력하세요:");
	scanf_s("%lf", &how_pyung);//사용자로부터 실수를 입력받아 how_pyung에 저장한다.
	printf("%lf평방미터입니다.\n", how_pyung*SQMETER_PER_PYEONG);//how_pyung * SQMETER_PER_PYEONG한 값을 출력한다.
	return 0;
}
