#include<stdio.h>
#include<string.h>
#define SIZE 100
char foundName[100];
struct contact//구조체를 선언한다. 구조체는 문자형 변수 하나와 정수형 변수 하나를 포함한다.
{
	char name[100];
	int phone_num;
};
int main(void)
{
	struct contact cont[SIZE] = { 0 };//구조체 배열을 선언한다.
	char find_name[100];
	int check_num, whatchoose = 0, add_time = 0;//사용자가 어떤 작업을 할지를 저장하는 변수 wharchoose, 휴대폰 번호를 검색할때 사용할 check_num, 저장한 사용자의 인덱스를 나타낼 add_time을 선언한다.
	while (1)
	{
		printf("\n==================\n1. 추가\n2. 검색\n3. 종료\n==================\n메뉴를 선택하세요: ");
		scanf_s("%d", &whatchoose);//어떤 작업을 할지 사용자로부터 입력받는다.
		getchar();
		if (whatchoose == 1)//데이터 추가를 선택한다면
		{
			printf("\n연락처 정보를 입력하시오\n");
			printf("이름: ");
			gets_s(cont[add_time].name, 100);//사용자로부터 저장할 이름을 입력받는다.
			printf("휴대폰: ");
			scanf("%d", &cont[add_time].phone_num);//사용자로부터 저장할 핸드폰번호를 입력받는다.
			add_time++;
		}
		else if (whatchoose == 2)//데이터 검색을 선택한다면
		{
			check_num = 0;
			printf("검색하고 싶은 이름을 입력하시오: ");
			gets_s(find_name, 100);//검색하고싶은 이름을 입력받는다.

			for (int i = 0; i < SIZE; i++)//저장되어있는 데이터중에서 검색할 이름이 있는지 비교한다.
			{
				if (strcmp(find_name, cont[i].name) == 0)
				{
					printf("휴대폰 번호는 %d입니다.", cont[i].phone_num);
					check_num++;
					break;
				}
			}
			if (check_num == 0)//만약 검색할 이름이 없다면
			{
				printf("해당 이름의 사람은 저장되어있지 않습니다.");
			}

		}
		else if (whatchoose == 3)//종료를 선택한다면
		{
			break;
		}
		else
		{
			printf("메뉴에 있는 숫자만 입력하십시오");
		}
	}
}
