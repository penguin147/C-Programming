#include <stdio.h>

int main(void)
{
	int middle_exam, final_exam;
	printf("중간 고사 점수를 입력하시오: ");
	scanf("%d", &middle_exam);
	printf("기말 고사 점수를 입력하시오: ");
	scanf("%d", &final_exam);
	if ((middle_exam + final_exam) / 2 >= 90)//중간고사와 기말고사의 평균이 90점 이상이라면 A학점임을 출력한다.
		printf("당신의 학점은 A학점 입니다.\n");
	else if ((middle_exam + final_exam) / 2 >= 80)//중간고사와 기말고사의 평균이 90점 이상이 아니고 80점 이상이라면 B학점임을 출력한다.
		printf("당신의 학점은 B학점 입니다.\n");
	else if ((middle_exam + final_exam) / 2 >= 70)//중간고사와 기말고사의 평균이 80점 이상이 아니고 90점 이상이라면 C학점임을 출력한다.
		printf("당신의 학점은 C학점 입니다.\n");
	else if ((middle_exam + final_exam) / 2 >= 60)//중간고사와 기말고사의 평균이 70점 이상이 아니고 60점 이상이라면 D학점임을 출력한다.
		printf("당신의 학점은 D학점 입니다.\n");
	else//중간고사와 기말고사의 평균이 60점 이상이 아니라면 F학점임을 출력한다.
		printf("당신의 학점은 F학점 입니다.\n");
	return 0;
}
