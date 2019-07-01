#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int most, less, count[10] = { 0 };
	srand(time(NULL));
	for (int num = 0; num < 10; num++)//count배열에 무작위의 수를 저장한다.
	{
		count[num] = rand();
	}
	most = count[0];
	less = count[0];

	for (int i = 1; i < 10; i++)//최댓값과 최솟값을 구하는 알고리즘인데 첫번재 인덱스를 최댓값,최솟값으로 지정해놓고 다음 값이 더 크거나 작으면 각각 최댓값,최솟값을 갱신한다.
	{
		if (most < count[i])
		{
			most = count[i];
		}

		if (less > count[i])
		{
			less = count[i];
		}
	}
	printf("최대값은 %d\n", most);
	printf("최소값은 %d\n", less);
	return 0;
}
