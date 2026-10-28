// **********************************************
// 제   목  :  실습과제 4 코드
// 날   짜  :  2026년 10월 28일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char str[20];
	int i;
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\n')
		{
			str[i] = '\0';
			break;
		}
	}
	printf("%s", str);
	return 0;
}
