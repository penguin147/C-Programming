#include<stdio.h>
int main(void)
{
	int alp_count[26] = { 0 };//해당 알파벳을 저장할 배열을 만든다.
	char s[82];//문자열을 입력받을 배열
	printf("문자열을 입력하시오: ");
	gets_s(s, 81);//문자열을 입력받는다.
	for (int i = 0; i < strlen(s); i++)//입력받은 문자열의 길이만큼 반복한다.
	{
		int alphabat = 97;
		for (int j = 0; j < 26; j++)//해당 문자가 어떤 알파벳인지를 판단하고 해당 인덱스의 배열에 저장한다.
		{
			if (s[i] == alphabat)
			{
				alp_count[alphabat - 97]++;
			}
			alphabat++;
		}
	}
	for (int i = 97; i < 123; i++)
	{
		printf("%c: %d\n", i, alp_count[i - 97]);
	}
}
