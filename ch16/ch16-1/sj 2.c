// **********************************************
// 제   목  :  2차원 배열을 이용한 성적 최우수 학생 및 평균점수 출력
// 날   짜  :  2026년 10월 2일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int score[3][3];
	int sum, i, j, best;
	double av, max = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d번째 학생의 국어, 영어, 수학 성적을 입력: ", i + 1);
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
		{
			sum += score[i][j];
		}
		av = (double)sum / 3;
		if (max < av)
		{
			max = av;
			best = i + 1;
		}
	}
	printf("최우수 학생은 %d번째 학생이고 평균점수는 %.lf점이다.", best, max);
	return 0;
}
