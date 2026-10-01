// **********************************************
// 제   목  :  2차원 배열을 이용한 문자열 길이 출력
// 날   짜  :  2026년 10월 1일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char str[4][10];
	int i, j;
	int count;
	for (i = 0; i < 4; i++)
	{
		printf("%d번째 문자열 입력: ", i + 1);
		scanf("%s", &str[i][0]);
	}
	for (i = 0; i < 4; i++)
	{
		count = 0;
		for (j = 0; str[i][j] != '\0'; j++)
		{
			count++;
		}printf("%d번째 문자열의 길이: %d\n", i + 1, count);
	}
	return 0;
}
