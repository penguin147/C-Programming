#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<time.h>
#define size 15
int board[size + 1][size + 1] = { 0 };//게임보드
int check[size + 1][size + 1][2] = { 0 };//게임보드 밑에 깔려있는 게임보드의 어떤 지점이 검사되었나 아닌가를 나타낼 배열
int flag_num;//꽂아진 깃발의 개수를 저장할 정수형 변수
int mine_percent;//지뢰의 확률을 저장할 정수형 변수
int mine_num;//
int R_flag;//맞게 꽂은 깃발의 개수를 저장할 정수형 변수
void start_game(mine_percent)//지뢰의 확률을 받아서 처음게임을 시작하는 함수이다.
{
	srand(time(NULL));
	srand(time(NULL));
	for (int i = 1; i < size; i++)//보드에 지뢰를 mine_percent에 맞게 깐다.
	{
		for (int j = 1; j < size; j++)
		{
			if ((rand() % 100) < mine_percent)
			{
				board[i][j] = 9;//지뢰는 9
				mine_num++;
			}
		}
	}
	for (int i = 1; i < size; i++)// 1,1에서 8,8까지 검사한다. 어떤 한 점을 검사할때는 그 점을 기준으로 3*3의 지뢰의 개수를 조사한다.
	{
		for (int j = 1; j < size; j++)
		{
			if (board[i][j] >= 9)//9이상이라면 지뢰이므로 그점기준 3*3의 지뢰의수를 나타내는 값을 1씩 더한다.
			{
				board[i - 1][j - 1]++;
				board[i - 1][j]++;
				board[i - 1][j + 1]++;
				board[i][j - 1]++;
				board[i][j + 1]++;
				board[i + 1][j - 1]++;
				board[i + 1][j]++;
				board[i + 1][j + 1]++;
			}
		}
	}
}
int print_board(int x, int y, int whatchoose)//만들어진 게임보드를 출력하고 해당 좌표를 열어보는 함수이다. whatchoose는 사용자가 깃발을 꽂을지, 또는 해당 점을 확인할지를 정한다.
{
	for (int i = 1; i < size; i++)
	{
		for (int j = 1; j < size; j++)
		{
			if (i == x && j == y)
			{
				if (whatchoose == 1)//만약 사용자가 해당 점을 확인한다고 한다면
				{
					if (board[x][y] >= 9)//해당 지점의 값이 9이상이라면 즉, 지뢰라면
					{
						symbol(i, j);
						Sleep(2000);
						system("cls");
						printf("game over");//게임종료를 출력하고
						exit(1);//프로그램을 종료한다.
						continue;
					}
					symbol(i, j);//해당 지점의 지뢰의 개수에 맞춰서 값을 띄운다.
					check[i][j][0]++;
					continue;
				}
				else if (whatchoose == 2)//만약 사용자가 해당 지점에 깃발을 꽂는다고 한다면
				{
					if (check[i][j][1] == 0)//만약 그곳이 체크되지 않았다면 즉, 열어본 지점이 아니라면
					{
						printf("※");//깃발을 꼽는다.
						check[i][j][1] = 1;//그리고 한번 깃발을 꽂았다고 기록한다.
						flag_num++;//깃발의 개수인 flag_num을 1 더한다.
						if (board[i][j] >= 9)//깃발을 꽂은 곳이 진짜로 지뢰가 있는 곳이라면
						{
							R_flag++;//깃발을 맞게 꽂은 개수인 R_flag를 1 더한다.
						}
						continue;
					}
					else//만약 곳이 한번 열어본 지점이라면
					{

						check[i][j][1] = 0;//체크되지 않았음으로 다시 돌리고
						flag_num--;//이부분도 다시 되돌려놓는다.
						R_flag--;//이부분도 다시 되돌려놓는다.
					}
				}
			}
			if (check[i][j][0] >= 1)
			{
				symbol(i, j);
			}
			else if (check[i][j][1] >= 1)
			{
				printf("※");
			}
			if (check[i][j][0] < 1 && check[i][j][1] < 1)
			{
				printf("■");
			}
		}
		printf("\n");
	}
}
int symbol(int i, int j)//해당 보드의 지뢰의 개수에 따라 0~8까지를 출력하고 0~8이 아니라면 지뢰를 출력한다.
{
	switch (board[i][j])
	{
	case 0: printf("０"); break;
	case 1: printf("１"); break;
	case 2: printf("２"); break;
	case 3: printf("３"); break;
	case 4: printf("４"); break;
	case 5: printf("５"); break;
	case 6: printf("６"); break;
	case 7: printf("７"); break;
	case 8: printf("８"); break;
	default: printf("☆"); break;
	}
}
int main()
{
	printf("마인 확률을 정하시오( 1 ~ 99 )\n");
	scanf("%d", &mine_percent);
	start_game(mine_percent);
	int x = 0, y = 0, whatchoose = 1;
	while (1)
	{
		system("cls");
		print_board(x, y, whatchoose);
		if (R_flag == mine_num)//지뢰의 개수와 맞게꽂은 깃발의 개수가 같다면
		{
			printf("승리!\n");//승리했음을 출력하고 루프를 빠져나간다.
			break;
		}
		printf("현재 깃발 개수: %d\n", flag_num);
		printf("1.확인 2.깃발");
		scanf("%d", &whatchoose);//확인할지 깃발을 꽂을지를 입력받는다.
		if (whatchoose == 1)//만약 확인한다면
		{
			printf("선택 위치: ");

			scanf("%d %d", &x, &y);//어느위치를 확인할지를 입력받는다.
		}
		else
		{
			printf("선택 위치: ");
			scanf("%d %d", &x, &y);//어느위치에 깃발을 꽂을지를 입력받는다.
		}
	}
}
