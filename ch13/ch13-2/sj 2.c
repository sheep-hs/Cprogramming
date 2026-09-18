// **********************************************
// 제   목  :  널문자를 이용한 각 문자열 개별적 출력
// 날   짜  :  2026년 9월 18일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int i;
	char str[100];
	printf("문자열을 입력하시오: ");
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++)
	{
		printf("%d번째 문자: %c\n", i + 1, str[i]);
	}
	return 0;
}
