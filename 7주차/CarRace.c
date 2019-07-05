#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
void draw_car(int x1, int y1)//자동차를 그리는 함수이다.
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Rectangle(hdc, x1 + 10, y1 - 2, x1 + 50, y1 + 40);//자동차의 윗부분
	Rectangle(hdc, x1 - 30, y1 + 20, x1 + 70, y1 + 50);//자동차의 아랫부분
	Ellipse(hdc, x1 - 10, y1 + 35, x1 + 13, y1 + 58);//왼쪽바퀴
	Ellipse(hdc, x1 + 40, y1 + 35, x1 + 63, y1 + 58);//오른쪽바퀴
	for (int i = 0; i < 3; i++)//연기
	{
		Ellipse(hdc, x1 + 75 + 12 * i, y1 + 38 - 8 * i, x1 + 85 + 12 * i, y1 + 48);
	}
}
int check_win(x, y, z)//세 자동차중 누가 이겼는지를 알려주는 함수이다.
{
	if (x < 35)
	{
		printf("1번 차가 승리하였습니다.!");
		return 0;
	}
	else if (y < 35)
	{
		printf("2번 차가 승리하였습니다.!");
		return 0;
	}
	else if (z < 35)
	{
		printf("3번 차가 승리하였습니다.!");
		return 0;
	}
}
int main(void)
{
	srand(time(NULL));
	int car_x[3] = { 800, 800, 800 };
	int car_y[3] = { 150,250,350 };
	for (int i = 0; i < 3; i++)//시작지점에 세 자동차를 그린다.
	{
		draw_car(car_x[i], car_y[i]);
	}
	while (1)
	{
		getch();//키보드가 한번 눌릴때마다
		system("cls");
		for (int i = 0; i < 3; i++)//세 자동차를 0부터 19까지의 거리를 무작위로 이동시킨다.
		{
			int x = rand() % 20;
			car_x[i] -= x;
			draw_car(car_x[i], car_y[i]);
		}
		if (check_win(car_x[0], car_x[1], car_x[2]) == 0)//만약 어떤 한 차가 도착지점에 도착한다면 반복문을 빠져나온다.
		{
			break;
		}
	}
}
