#include<stdio.h>
#include<stdlib.h>
int get_number(void)//호출시 로또번호를 무작위로 반환하는 함수이다.
{
	int rotto_num = rand() % 45 + 1;
	return rotto_num;
}
int main(void)
{
	srand(time(NULL));//랜덤 함수의 시드값을 변경해줌으로서 랜덤 함수의 호출시마다 반환되는 값을 다르게 한다.
	int rotto[6];
	for (int i = 0; i < 6; i++)//로또번호를 저장하는 배열에 로또번호를 뽑아 저장한다.
	{
		rotto[i] = get_number();
	}
	while (1)//중복되는 번호가 있는지 검사하는 반복문이다. 만약 중복되는 번호가 존재한다면, 그 번호를 다시뽑아 다시 저장한다. 중복되는 번호가 없으면 반복문을 빠져나간다.
	{
		int a = 0;
		for (int i = 0; i < 6; i++)
		{
			for (int j = i + 1; j < 6; j++)
			{
				if (rotto[i] == rotto[j])//중복되는 번호가 존재한다면
				{
					rotto[i] = rand() % 45 + 1;//해당 배열의 번호를 다시 뽑고
					a++;//a에 1을 더해줌으로서 중복되었다는것을 알린다.
				}
			}
		}
		if (a == 0)//만약 중복되는 번호가 없다면 즉, a가 0이라면 반복분을 빠져나간다.
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
