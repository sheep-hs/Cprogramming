// **********************************************
// 제   목  :  실습과제 2 코드
// 날   짜  :  2026년 11월 17일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("text.txt", "rt");
	if (fp == NULL)
	{
		printf("원본 파일을 열 수 없습니다.\n");
		return -1;
	}
	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)
			break;
		putchar(ch);
		if (ch == '.')
			putchar('\n');
	}
	fclose(fp);
	return 0;
}
