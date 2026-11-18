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
	FILE* fp1;
	FILE* fp2;

	fp1 = fopen("text.txt", "rt");
	if (fp1 == NULL)
	{
		printf("원본 파일을 열 수 없습니다.\n");
		return -1;
	}

	fp2 = fopen("result.txt", "wt");
	if (fp2 == NULL)
	{
		printf("대상 파일을 열 수 없습니다.\n");
		fclose(fp1);
		return -1;
	}
	
	while (1)
	{
		ch = fgetc(fp1);
		if (ch == EOF)
			break;
		fputc(ch, fp2);
		if (ch == '.')
			fputc('\n', fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
