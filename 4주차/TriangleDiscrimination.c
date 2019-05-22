#include <stdio.h>

int main(void)
{
	int edge1, edge2, edge3;
	printf("삼각형의 세변을 입력하시요:\n");
	scanf("%d %d %d", &edge1, &edge2, &edge3);

	if (edge1 + edge2 + edge3 == edge1 * 3)//만약 입력받은 세 변의 길이가 같다면 정삼각형이므로 이를 출력한다.
		printf("정삼각형\n");
	else if (edge1 == edge2 || edge1 == edge3 || edge2 == edge3)//만약 입력받은 세 변의 길이가 모두 같지 않으면서 두 변의 길이가 같다면 이등변삼각형 이므로 이를 출력한다.
		printf("이등변삼각형\n");
	else//만약 입력받은 세 변의 길이가 모두 같지 않고 두 변의 길이또한 같지 않으면 일반 삼각형이므로 이를 출력한다.
		printf("일반삼각형\n");
	return 0;
}
