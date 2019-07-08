#include<stdio.h>
int main(void)
{
	FILE *fp;//원본 텍스트 파일을 가져와 저장할 파일포인터를 선언한다.
	FILE *fpp;//비교할 텍스트 파일을 가져와 저장할 파일포인터를 선언한다.
	char Fvalue[100] = { 0 }, Svalue[100] = { 0 }, Fname[100], Sname[100];
	int compare;
	printf("첫번째 파일 이름: ");
	gets_s(Fname, 99);//사용자로부터 문자열을 입력받아 Fname에 저장한다.
	printf("두번째 파일 이름: ");
	gets_s(Sname, 99);//사용자로부터 문자열을 입력받아 Sname에 저장한다.
	fp = fopen(Fname, "r");//파일포인터에 Fname의 객체를 가리키는 포인터를 저장한다.
	fpp = fopen(Sname, "r");//파일포인터에 Sname의 객체를 가리키는 포인터를 저장한다.
	while (1)
	{
		if (feof(fp)) break;//만약 파일포인터의 값이 EOF라면 루프를 빠져나간다.
		fgets(Fvalue, 99, fp);//fp로부터 문자열 한줄을 Fvalue에 저장한다.
		fgets(Svalue, 99, fpp);//fpp로부터 문자열 한줄을 Svalue에 저장한다.
		compare = strcmp(Fvalue, Svalue);//Fvalue와 Svalue의 값을 비교한다.
		if (compare != 0)//두 파일이 한줄이라도 다르다면 다른 문장을 출력하고 루프를 빠져나간다.
		{
			printf("%s%s", Fvalue, Svalue);
			break;
		}
	}
	if (compare == 0)
	{
		printf("두 파일은 같습니다.\n");
	}
	return 0;
}
