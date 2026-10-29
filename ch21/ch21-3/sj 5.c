// **********************************************
// 제   목  :  실습과제 5 코드
// 날   짜  :  2026년 10월 29일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[5][100];
	int min, max, i;
	min = max = 0;
	for (i = 0; i < 5; i++)
	{
		printf("문자열 입력: ");
		scanf("%s", str[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (strcmp(str[i], str[min]) < 0)
			min = i;
		if (strcmp(str[i], str[max]) > 0)
			max = i;
	}
	printf("제일앞: %s\n", str[min]);
	printf("제일뒤: %s\n", str[max]);
	return 0;
}
