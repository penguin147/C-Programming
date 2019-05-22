﻿#include <stdio.h>

int main(void)
{
	int income, tax;
	printf("과세 표준을 입력하시오(만원): ");
	scanf("%d", &income);
	if (income > 8000)//만약 수입이 8000만원 초과이면 8000만원을 초과하는 부분은 35%의 세율을, 
					  //4000만원초과 8000만원이하인 부분은 26%의 세율을, 1000만원초과 4000만원이하인 부분은 17%의 세율을, 1000만원 이하인 부분은 8%의 세율을 적용해 이를 tax변수에 저장한다.
	{
		income = income - 8000;
		tax = income * 0.35 + 1040 + 510 + 80;
	}
	else if (4000 < income && income <= 8000)//만약 수입이 8000만원을 초과하지 않고 4000만원을 초과한다면 
		                                     //4000만원초과 8000만원이하인 부분은 26%의 세율을, 1000만원초과 4000만원이하인 부분은 17%의 세율을, 1000만원 이하인 부분은 8%의 세율을 적용해 이를 tax변수에 저장한다.
	{
		income = income - 4000;
		tax = income * 0.26 + 510 + 80;
	}
	else if (1000 < income && income <= 4000)//만약 수입이 4000만원을 초과하지 않고 1000만원을 초과한다면 1000만원초과 
		                                     //4000만원이하인 부분은 17%의 세율을, 1000만원 이하인 부분은 8%의 세율을 적용해 이를 tax변수에 저장한다.
	{
		income = income - 1000;
		tax = income * 0.17 + 80;
	}
	else//만약 수입이 1000만원 이하라면 1000만원 이하인 부분은 8%의 세율을 적용해 이를 tax변수에 저장한다.
	{
		tax = income * 0.08;
	}
	printf("소득세는 %d입니다.\n", tax);
	return 0;
}
