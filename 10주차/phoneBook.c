#include<stdio.h>
#include<string.h>
#define SIZE 100
char foundName[100];
struct contact//����ü�� �����Ѵ�. ����ü�� ������ ���� �ϳ��� ������ ���� �ϳ��� �����Ѵ�.
{
	char name[100];
	int phone_num;
};
int main(void)
{
	struct contact cont[SIZE] = { 0 };//����ü �迭�� �����Ѵ�.
	char find_name[100];
	int check_num, whatchoose = 0, add_time = 0;//����ڰ� � �۾��� ������ �����ϴ� ���� wharchoose, �޴��� ��ȣ�� �˻��Ҷ� ����� check_num, ������ ������� �ε����� ��Ÿ�� add_time�� �����Ѵ�.
	while (1)
	{
		printf("\n==================\n1. �߰�\n2. �˻�\n3. ����\n==================\n�޴��� �����ϼ���: ");
		scanf_s("%d", &whatchoose);//� �۾��� ���� ����ڷκ��� �Է¹޴´�.
		getchar();
		if (whatchoose == 1)//������ �߰��� �����Ѵٸ�
		{
			printf("\n����ó ������ �Է��Ͻÿ�\n");
			printf("�̸�: ");
			gets_s(cont[add_time].name, 100);//����ڷκ��� ������ �̸��� �Է¹޴´�.
			printf("�޴���: ");
			scanf("%d", &cont[add_time].phone_num);//����ڷκ��� ������ �ڵ�����ȣ�� �Է¹޴´�.
			add_time++;
		}
		else if (whatchoose == 2)//������ �˻��� �����Ѵٸ�
		{
			check_num = 0;
			printf("�˻��ϰ� ���� �̸��� �Է��Ͻÿ�: ");
			gets_s(find_name, 100);//�˻��ϰ���� �̸��� �Է¹޴´�.

			for (int i = 0; i < SIZE; i++)//����Ǿ��ִ� �������߿��� �˻��� �̸��� �ִ��� ���Ѵ�.
			{
				if (strcmp(find_name, cont[i].name) == 0)
				{
					printf("�޴��� ��ȣ�� %d�Դϴ�.", cont[i].phone_num);
					check_num++;
					break;
				}
			}
			if (check_num == 0)//���� �˻��� �̸��� ���ٸ�
			{
				printf("�ش� �̸��� ����� ����Ǿ����� �ʽ��ϴ�.");
			}

		}
		else if (whatchoose == 3)//���Ḧ �����Ѵٸ�
		{
			break;
		}
		else
		{
			printf("�޴��� �ִ� ���ڸ� �Է��Ͻʽÿ�");
		}
	}
}
