#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int array_equal(int a[], int b[], int size)//두 배열을 비교하는 함수를 만든다.
{
	for (int i = 0; i < size; i++)//배열의 크기만큼 반복하며 한번이라도 같은 인덱스의 두 배열의 값이 다르면 0을 반환하고 그렇지 않다면 1을 반환한다.
	{
		if (a[i] != b[i])
		{
			return 0;
		}
	}
	return 1;
}
int main(void)
{
	int a[8], b[8];
	scanf("%d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7]);//첫번째 배열의 요소를 입력받는다.
	scanf("%d %d %d %d %d %d %d %d", &b[0], &b[1], &b[2], &b[3], &b[4], &b[5], &b[6], &b[7]);//두번째 배열의 요소를 입력받는다.
	int result = array_equal(a, b, 8);
	if (result == 1)
	{
		printf("2개의 배열은 같음");
	}
	else
	{
		printf("2개의 배열은 다름");
	}
	return 0;
}
