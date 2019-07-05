#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
void draw_car(int x1, int y1)//�ڵ����� �׸��� �Լ��̴�.
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Rectangle(hdc, x1 + 10, y1 - 2, x1 + 50, y1 + 40);//�ڵ����� ���κ�
	Rectangle(hdc, x1 - 30, y1 + 20, x1 + 70, y1 + 50);//�ڵ����� �Ʒ��κ�
	Ellipse(hdc, x1 - 10, y1 + 35, x1 + 13, y1 + 58);//���ʹ���
	Ellipse(hdc, x1 + 40, y1 + 35, x1 + 63, y1 + 58);//�����ʹ���
	for (int i = 0; i < 3; i++)//����
	{
		Ellipse(hdc, x1 + 75 + 12 * i, y1 + 38 - 8 * i, x1 + 85 + 12 * i, y1 + 48);
	}
}
int check_win(x, y, z)//�� �ڵ����� ���� �̰������ �˷��ִ� �Լ��̴�.
{
	if (x < 35)
	{
		printf("1�� ���� �¸��Ͽ����ϴ�.!");
		return 0;
	}
	else if (y < 35)
	{
		printf("2�� ���� �¸��Ͽ����ϴ�.!");
		return 0;
	}
	else if (z < 35)
	{
		printf("3�� ���� �¸��Ͽ����ϴ�.!");
		return 0;
	}
}
int main(void)
{
	srand(time(NULL));
	int car_x[3] = { 800, 800, 800 };
	int car_y[3] = { 150,250,350 };
	for (int i = 0; i < 3; i++)//���������� �� �ڵ����� �׸���.
	{
		draw_car(car_x[i], car_y[i]);
	}
	while (1)
	{
		getch();//Ű���尡 �ѹ� ����������
		system("cls");
		for (int i = 0; i < 3; i++)//�� �ڵ����� 0���� 19������ �Ÿ��� �������� �̵���Ų��.
		{
			int x = rand() % 20;
			car_x[i] -= x;
			draw_car(car_x[i], car_y[i]);
		}
		if (check_win(car_x[0], car_x[1], car_x[2]) == 0)//���� � �� ���� ���������� �����Ѵٸ� �ݺ����� �������´�.
		{
			break;
		}
	}
}
