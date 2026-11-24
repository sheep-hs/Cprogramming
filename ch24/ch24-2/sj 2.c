// **********************************************
// 제   목  :  실습과제 2 코드
// 날   짜  :  2026년 11월 20일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char name[20];
	int sco1, sco2, sco3, sum;
	double av;
	FILE* fp1;
	FILE* fp2;

	fp1 = fopen("input.txt", "rt");
	if (fp1 == NULL)
	{
		printf("파일 열기 실패!\n");
		return -1;
	}

	fp2 = fopen("output.txt", "wt");
	if (fp2 == NULL)
	{
		printf("파일 열기 실패!\n");
		return -1;
	}

	while (fscanf(fp1, "%s %d %d %d", name, &sco1, &sco2, &sco3) == 4)
	{
		sum = sco1 + sco2 + sco3;
		av = (double)sum / 3;
		fprintf(fp2, "%s %d %.1f\n", name, sum, av);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
