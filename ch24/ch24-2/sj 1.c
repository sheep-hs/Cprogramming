// **********************************************
// 제   목  :  실습과제 1 코드
// 날   짜  :  2026년 11월 20일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char name[20];
	int num, i;
	double grade;
	FILE* fp;

	fp = fopen("result.txt", "wt");
	if (fp == NULL)
	{
		printf("파일 열기 실패!\n");
		return -1;
	}
	for (i = 0; i < 3; i++)
	{
		printf("이름, 학번, 학점입력: ");
		scanf("%s %d %lf", name, &num, &grade);
		fprintf(fp, "%s %d %.1f\n", name, num, grade);
	}
	fclose(fp);
	return 0;
}
