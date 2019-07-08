#include<stdio.h>
int main(void)
{
	FILE *fp;//텍스트 파일을 가져와 저장할 파일포인터를 선언한다.
	fp = fopen("sample.txt", "r");//파일포인터에 "fileStringCount.txt"의 객체를 가리키는 포인터를 저장한다.
	char value[100];
	int i = 0, sum = 0, count = 0;
	while (1)
	{
		if (feof(fp)) break;//만약 파일포인터의 값이 EOF라면 루프를 빠져나간다.
		fgets(value, 99, fp);//텍스트 파일의 문자열 한줄을 가져와 value에 저장한다.
		printf("%s", value);//가져온 문자열을 출력한다.
		count++;//가져온 문자열의 수를 센다.
	}
	printf("\n라인의 개수 = %d\n", count);
	return 0;
}
