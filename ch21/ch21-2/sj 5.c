// **********************************************
// 제   목  :  실습과제 5 코드
// 날   짜  :  2026년 10월 28일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char str[100];
	int i;
	int count = 0;
	int space = 0;
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\n')
		{
			space = 0;
		}
		else if (space == 0)
		{
			count++;
			space = 1;
		}
	}
	printf("단어수: %d\n", count);
	return 0;
}
