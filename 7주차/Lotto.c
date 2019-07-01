#include<stdio.h>
#include<stdlib.h>
int get_number(void)//로또번호를 랜덤으로 뽑아 반환하는 함수이다.
{
	int rotto_num = rand() % 45 + 1;
	return rotto_num;
}
int main(void)
{
	srand(time(NULL));
	int rotto[6];
	for (int i = 0; i < 6; i++)//로또배열에 로또번호를 받아 저장한다.
	{
		rotto[i] = get_number();
	}
	while (1)//rotto배열 안에 있는 요소들이 서로 겹치는지를 검사한다. 반복문을 겹쳐 사용하여 0번째배열과 1번째배열, 0번째배열과 2번째배열 이런 방법으로 배열의 요소들을 비교해 같은 것이 있으면 get_number함수를 이용해 중복되는 요소를 다시 초기화한다. 그리고 중복되는 요소를 초기화 할 때마다 a++를 실행한다. 검사가 끝난 후 a가 0이라면 즉, 검사 도중 중복되는 요소가 한번도 없었다면 검사하는 루프를 벗어난다.
	{
		int a = 0;
		for (int i = 0; i < 6; i++)
		{
			for (int j = i + 1; j < 6; j++)
			{
				if (rotto[i] == rotto[j])
				{
					rotto[i] = rand() % 45 + 1;
					a++;
				}
			}
		}
		if (a == 0)
		{
			break;
		}
	}
	printf("생성된 로또 번호는 ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d, ", rotto[i]);
	}
	printf("%d입니다.\n", rotto[5]);
}
