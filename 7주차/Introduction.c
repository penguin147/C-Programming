#include<stdio.h>
void introduction(void)//자기소개하는 함수를 만든다. 호출시 자기소개를 출력한다.
{
	printf("Hi\nMy name is Chaitanya\nHow are you?");
}

int main(void)
{
	introduction();//자기소개하는 함수를 호출한다. 함수는 호출되기 전까지는 실행되지 않는다.
}