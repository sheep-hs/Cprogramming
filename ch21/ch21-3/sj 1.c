// **********************************************
// 제   목  :  실습과제 1 코드
// 날   짜  :  2026년 10월 29일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[200] = "";
	char str2[50];
	while (1)
	{
		fputs("문자열 입력: ", stdout);
		fgets(str2, sizeof(str2), stdin);
		str2[strcspn(str2, "\n")] = '\0';
		if (strcmp(str2, "quit") == 0)
			break;
		if (strlen(str1) > 0)
		{
			strcat(str1, " ");
		}
		strcat(str1, str2);
		printf("입력된 문자열: %s\n", str1);
	}
	return 0;
}
