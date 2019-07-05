#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<time.h>
#define size 15
int board[size + 1][size + 1] = { 0 };//���Ӻ���
int check[size + 1][size + 1][2] = { 0 };//���Ӻ��� �ؿ� ����ִ� ���Ӻ����� � ������ �˻�Ǿ��� �ƴѰ��� ��Ÿ�� �迭
int flag_num;//�Ⱦ��� ����� ������ ������ ������ ����
int mine_percent;//������ Ȯ���� ������ ������ ����
int mine_num;//
int R_flag;//�°� ���� ����� ������ ������ ������ ����
void start_game(mine_percent)//������ Ȯ���� �޾Ƽ� ó�������� �����ϴ� �Լ��̴�.
{
	srand(time(NULL));
	srand(time(NULL));
	for (int i = 1; i < size; i++)//���忡 ���ڸ� mine_percent�� �°� ���.
	{
		for (int j = 1; j < size; j++)
		{
			if ((rand() % 100) < mine_percent)
			{
				board[i][j] = 9;//���ڴ� 9
				mine_num++;
			}
		}
	}
	for (int i = 1; i < size; i++)// 1,1���� 8,8���� �˻��Ѵ�. � �� ���� �˻��Ҷ��� �� ���� �������� 3*3�� ������ ������ �����Ѵ�.
	{
		for (int j = 1; j < size; j++)
		{
			if (board[i][j] >= 9)//9�̻��̶�� �����̹Ƿ� �������� 3*3�� �����Ǽ��� ��Ÿ���� ���� 1�� ���Ѵ�.
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
int print_board(int x, int y, int whatchoose)//������� ���Ӻ��带 ����ϰ� �ش� ��ǥ�� ����� �Լ��̴�. whatchoose�� ����ڰ� ����� ������, �Ǵ� �ش� ���� Ȯ�������� ���Ѵ�.
{
	for (int i = 1; i < size; i++)
	{
		for (int j = 1; j < size; j++)
		{
			if (i == x && j == y)
			{
				if (whatchoose == 1)//���� ����ڰ� �ش� ���� Ȯ���Ѵٰ� �Ѵٸ�
				{
					if (board[x][y] >= 9)//�ش� ������ ���� 9�̻��̶�� ��, ���ڶ��
					{
						symbol(i, j);
						Sleep(2000);
						system("cls");
						printf("game over");//�������Ḧ ����ϰ�
						exit(1);//���α׷��� �����Ѵ�.
						continue;
					}
					symbol(i, j);//�ش� ������ ������ ������ ���缭 ���� ����.
					check[i][j][0]++;
					continue;
				}
				else if (whatchoose == 2)//���� ����ڰ� �ش� ������ ����� �ȴ´ٰ� �Ѵٸ�
				{
					if (check[i][j][1] == 0)//���� �װ��� üũ���� �ʾҴٸ� ��, ��� ������ �ƴ϶��
					{
						printf("��");//����� �Ŵ´�.
						check[i][j][1] = 1;//�׸��� �ѹ� ����� �ȾҴٰ� ����Ѵ�.
						flag_num++;//����� ������ flag_num�� 1 ���Ѵ�.
						if (board[i][j] >= 9)//����� ���� ���� ��¥�� ���ڰ� �ִ� ���̶��
						{
							R_flag++;//����� �°� ���� ������ R_flag�� 1 ���Ѵ�.
						}
						continue;
					}
					else//���� ���� �ѹ� ��� �����̶��
					{

						check[i][j][1] = 0;//üũ���� �ʾ������� �ٽ� ������
						flag_num--;//�̺κе� �ٽ� �ǵ������´�.
						R_flag--;//�̺κе� �ٽ� �ǵ������´�.
					}
				}
			}
			if (check[i][j][0] >= 1)
			{
				symbol(i, j);
			}
			else if (check[i][j][1] >= 1)
			{
				printf("��");
			}
			if (check[i][j][0] < 1 && check[i][j][1] < 1)
			{
				printf("��");
			}
		}
		printf("\n");
	}
}
int symbol(int i, int j)//�ش� ������ ������ ������ ���� 0~8������ ����ϰ� 0~8�� �ƴ϶�� ���ڸ� ����Ѵ�.
{
	switch (board[i][j])
	{
	case 0: printf("��"); break;
	case 1: printf("��"); break;
	case 2: printf("��"); break;
	case 3: printf("��"); break;
	case 4: printf("��"); break;
	case 5: printf("��"); break;
	case 6: printf("��"); break;
	case 7: printf("��"); break;
	case 8: printf("��"); break;
	default: printf("��"); break;
	}
}
int main()
{
	printf("���� Ȯ���� ���Ͻÿ�( 1 ~ 99 )\n");
	scanf("%d", &mine_percent);
	start_game(mine_percent);
	int x = 0, y = 0, whatchoose = 1;
	while (1)
	{
		system("cls");
		print_board(x, y, whatchoose);
		if (R_flag == mine_num)//������ ������ �°Բ��� ����� ������ ���ٸ�
		{
			printf("�¸�!\n");//�¸������� ����ϰ� ������ ����������.
			break;
		}
		printf("���� ��� ����: %d\n", flag_num);
		printf("1.Ȯ�� 2.���");
		scanf("%d", &whatchoose);//Ȯ������ ����� �������� �Է¹޴´�.
		if (whatchoose == 1)//���� Ȯ���Ѵٸ�
		{
			printf("���� ��ġ: ");

			scanf("%d %d", &x, &y);//�����ġ�� Ȯ�������� �Է¹޴´�.
		}
		else
		{
			printf("���� ��ġ: ");
			scanf("%d %d", &x, &y);//�����ġ�� ����� �������� �Է¹޴´�.
		}
	}
}
