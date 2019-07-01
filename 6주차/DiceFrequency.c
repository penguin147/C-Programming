#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	srand(time(NULL));
	int whatmyun[6] = { 0 };
	for (int i = 0; i < 60000; i++)//주사위를 60000번 굴린다고 가정하여 60000번 반복한다.
	{
		int myun = (rand() % 6);//주사위는 1부터 6까지의 수중 하나이므로 1부터 6까지의 무작위의 수를 myun에 저장한다.
		for (int j = 0; j < 6; j++)//해당 면이 나오면 그 면 - 1 번째 인덱스의 값을 1 더한다.
		{
			if (myun == j)
			{
				whatmyun[j]++;
			}
		}
	}
	printf("====================\n");
	printf("면        빈도      \n");
	printf("====================\n");
	for (int i = 0; i < 6; i++)//1부터 6까지의 모든 면의 빈도를 출력한다.
	{
		printf("%d         %d\n", i + 1, whatmyun[i]);
	
	}


	return 0;
}
