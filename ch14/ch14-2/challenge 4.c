// **********************************************
// 제   목  :  도전 4번 풀이
// 날   짜  :  2026년 9월 29일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int check(char* str);
int main(void)
{
	char str[100];
	printf("문자열 입력: ");
	scanf("%s", str);
	if (check(str))
		printf("회문입니다.");
	else
		printf("회문이 아닙니다.");
	return 0;
}
int check(char* str)
{
	int i, len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - 1 - i])
			return 0;
	}
	return 1;
}
