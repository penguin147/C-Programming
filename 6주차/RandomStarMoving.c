#include<stdio.h>
#include<stdlib.h>

int move(char *road ,int direction ,int where)//별을 움직이는 함수를 작성한다. direction이 1이면 오른쪽, 0이면 왼쪽으로 움직인다.
{
	if (direction == 0)
	{
		road[where] = '_';
		where -= 1;
		road[where] = '*';
	}
	else
	{
		road[where] = '_';
		where += 1;
		road[where] = '*';
	}
	return where;

}

int main(void)
{
	int where = 5;
	char road[10] = { '_','_','_','_','_','*','_','_','_','_' };//별이 움직일수 있는 판을 나타낼 크기가 10인 배열을 '_'로 초기화한다.
	
	for (int j = 0; j < 10; j++)//최초의 상태를 출력한다.
	{
		printf("%c", road[j]);
	}
	printf("\n");

	srand(time(NULL));
	for (int i = 0; i < 20; i++)
	{
		getch();
		getch();
		int direction = rand() % 2;//별이 움직일 방향을 결정한다. direction이 1이면 오른쪽, 0이면 왼쪽으로 움직인다.
		if (where == 0)//만약 별이 가장 왼쪽에 있다면 무조건 오른쪽으로 움직이게 한다.
		{
			direction = 1;
		}
		else if (where == 9)
		{
			direction = 0;
		}
		
		where = move(road, direction, where);//무조건 한쪽으로밖에 움직이지 못하는 경우를 제외했으니 별을 확률대로 움직이게 한다.

		for (int j = 0; j < 10; j++)//상황을 출력한다.
		{
			printf("%c", road[j]);
		}
		printf("\n");
	}

	return 0;
}
