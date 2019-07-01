#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int most, index, value, count[10] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < 100; i++)//정수형 변수 value에 0부터 9까지 수중에 랜덤으로 뽑아 저장하고 count배열의 value번째 인덱스를 1 올린다.이를 100번 실행한다.
	{
		value = rand() % 10;
		count[value]++;
	}
	most = count[0];
	index = 0;
	for (int i = 1; i < 10; i++)//가장 큰 수를 뽑는 알고리즘이다. 첫번째 항을 most로 잡고 다음 항과 비교하여 다음항이 더 크다면 most를 갱신한다.
	{
		if (most < count[i])
		{
			most = count[i];
			index = i;
		}
		
	}
	printf("가장 많이 생성된 수 = %d\n", index);
	return 0;
}
