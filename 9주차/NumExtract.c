#include<stdio.h>

int main(void)
{
	char num[100];
	char rnum[100] = { 0 };
	int count = 0;//rnum의 인덱스를 나타낼 변수 count를 선언한다.

	printf("문자열을 입력하시오: ");
	gets_s(num, 99);//cahr형 배열 num에 한줄의 문자열을 입력받는다.
	for (int i = 0; num[i] != NULL; i++)//입력받은 문자열의 수만큼 반복한다.
	{
		if (47 < num[i] && num[i] < 58)//아스키코드로 48~57이 2진수로 0~9이므로 이것에 해당하면 rnum에 넣는다.
		{
			rnum[count++] = num[i];
		}
	}
	printf("결과: %s\n", rnum);
}
