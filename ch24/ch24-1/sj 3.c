// **********************************************
// 제   목  :  실습과제 3 코드
// 날   짜  :  2026년 11월 18일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int ch;
	FILE* fp;

	fp = fopen("result.txt", "wt");
	if (fp == NULL)
	{
		printf("파일 열기 실패!\n");
		return -1;
	}
	printf("문자열을 입력하시오: ");
	while (1)
	{
		ch = getchar();
		if (ch == '\n' || ch == EOF)
			break;
		if (ch == ' ')
			fputc('\n', fp);
		else
			fputc(ch, fp);
	}
	fclose(fp);
	return 0;
}
