#include<stdio.h>
int main(void)
{
	FILE *fp;//텍스트 파일을 가져와 저장할 파일포인터를 선언한다.
	fp = fopen("fileIntegerAdd.txt", "r");//파일포인터에 "fileIntegerAdd.txt"의 객체를 가리키는 포인터를 저장한다.
	int value;
	int i = 0, sum = 0;
	double count = 0;
	do
	{
		fscanf(fp, "%d", &value);//value의 주소값에 fileIntegerAdd.txt에 있는 정수 하나를 가리키도록 한다.
		sum = value + sum;
		i++;
		count++;
	} while (fgetc(fp) != EOF);//EOF는 end of file의 준말로 마지막을 의미한다. 즉, fileIntegerAdd.txt에서 가져온 값이 없을때까지 반복한다.
	printf("정수들의 개수: %0.0lf\n", count);
	printf("정수들의 합계: %d\n", sum);
	printf("정수들의 평균: %0.2lf\n", sum / count);
	return 0;
}
