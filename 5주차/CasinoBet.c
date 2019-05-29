#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define randomize() srand((unsigned int)time(NULL))//rand()함수는 seed를 바꿔주지 않으면 매번 같은 값이 나오기 때문에 그 seed를 바꿔 주기 위해 srand()를 이용하고 이것의 전달인자로 받는 부분에 time()를 이용해 실행 할 때마다 다른 난수를 실행시켜주는 것을 간편화 하기 위해 매크로함수인 randomize()를 선언한다.
int main(void)
{
	int money = 50;
	double win = 0, bets = 0;
	printf("초기 금액 $50\n");
	printf("목표 금액 $250\n");
	randomize();//위에서 선언한 randomize()를 사용한다
	for (int count = 0; count < 1000; count++)
	{
		while (1)
		{
			bets++;
			if ((double)rand() / RAND_MAX < 0.5) money++;
			else money--;
			if (money == 0)
			{
				break;
			}
			if (money == 250)
			{
				win++;
				break;
			}
		}
	}//여기서는 2개의 반복문과 3개의 조건문이 사용된다.일단 가장 바깥쪽에서는 카지노에 1000번 가는 것을 계산해 카지노에서 승패를 정하는 계산이 1000번 반복되도록 한다.그리고 그 안쪽에 있는 while (1)문은 승패를 정하는 계산을 시행하는 조건문이 담겨져 있다.카지노에 가게 되면 이기거나 질 때까지 계속 게임을 함을 전제하므로 일단 만약 도박에서 이긴다면 1원을 갖고 진다면 1원을 잃는 시행이 이루어지고 나서 만약 돈이 0원이 되면 패배하므로 반복에서 빠져나오고 만약 돈이 250이 되어 승리한다면 승리카운트를 하나 올리고 시행이 종료되도록 한다.

	printf("1000번중 %lf번 승리\n", win);
	printf("이긴 확률 = %lf%% \n", win / 10);
	printf("평균 배팅 횟수 = %lf회 \n", bets / 1000);
}
