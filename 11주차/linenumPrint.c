#include<stdio.h>
int main(void)
{
	FILE *fp;//텍스트 파일을 가져와 저장할 파일포인터를 선언한다.
	char Fvalue[100] = { 0 }, Fname[100];
	int count = 1;
	printf("파일 이름을 입력하시오: ");
	gets_s(Fname, 99);//사용자로부터 문자열을 입력받아 Fname에 저장한다.
	fp = fopen(Fname, "r");////파일포인터에 Fname의 객체를 가리키는 포인터를 저장한다.
	while (1)
	{
		if (feof(fp)) break;//만약 파일포인터의 값이 EOF라면 루프를 빠져나간다.
		fgets(Fvalue, 99, fp);//fp로부터 문자열 한줄을 Fvalue에 저장한다.
		printf("%d     %s", count, Fvalue);
		count++;
	}
	printf("\n");
	return 0;
}
