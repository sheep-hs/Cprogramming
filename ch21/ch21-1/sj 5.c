// **********************************************
// 제   목  :  실습과제 5 코드
// 날   짜  :  2026년 10월 13일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char str[20];
	int i;
	printf("문자열을 입력하시오: ");
	for (i = 0; i < 19; i++)
	{
		scanf("%c", &str[i]);
		if (str[i] == '\n')
			break;
	}
	str[i] = '\0';
	printf("문자열: %s\n", str);
	return 0;
}
