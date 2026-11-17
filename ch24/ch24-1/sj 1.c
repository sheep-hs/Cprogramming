// **********************************************
// 제   목  :  실습과제 1 코드
// 날   짜  :  2026년 11월 17일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char src[100];
	char dest[100];
	FILE* fp_in;
	FILE* fp_out;
	int ch;

	printf("복사할 파일명: ");
	scanf("%s", src);
	printf("복사받을 파일명: ");
	scanf("%s", dest);

	fp_in = fopen(src, "rt");
	if (fp_in == NULL)
	{
		printf("원본 파일을 열 수 없습니다.\n");
		return -1;
	}
	fp_out = fopen(dest, "wt");
	if (fp_out == NULL)
	{
		printf("대상 파일을 열 수 없습니다.\n");
		fclose(fp_in);
		return -1;
	}
	while (1)
	{
		ch = fgetc(fp_in);
		if (ch == EOF)
			break;
		fputc(ch, fp_out);
	}
	fclose(fp_in);
	fclose(fp_out);
	printf("%s파일을 %s파일로 복사했습니다.", src, dest);
	return 0;
}
