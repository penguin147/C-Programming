#include<stdio.h>
#include<string.h>
int main(void)
{
	char ori[100];//original문자열을 저장할 배열
	char comp[100];//compare문자열을 저장할 배열
	printf("문자열1을 입력하시오: ");
	gets_s(ori, 99);//ori에 문자열을 입력받아 저장한다.
	printf("문자열2를 입력하시오: ");
	gets_s(comp, 99);//comp에 문자열을 입력받아 저장한다.
	if (strcmp(ori, comp) == 1)//strcmp는 두 문자열이 같으면 0, 다르면 1을 반환하는 함수이다.
	{
		printf("표절!!\n");
	}
	else
	{
		printf("표절아님!!\n");
	}
	return 0;
}
