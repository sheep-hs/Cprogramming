// **********************************************
// 제   목  :  2차원 배열을 이용한 사전에서 가장 뒤에 나오는 문자열 출력
// 날   짜  :  2026년 10월 1일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char str[4][10];
	char* dic;
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%d번째 문자열 입력: ", i + 1);
		scanf("%s", &str[i][0]);
	}
	dic = str[0];
	for (i = 0; i < 4; i++)
	{
		if (str[i][0] > dic[0])
			dic = str[i];
	}
	printf("사전에서 제일 뒤에 나오는 문자열: %s", dic);
	return 0;
}
