// **********************************************
// 제   목  :  실습과제 2 코드
// 날   짜  :  2026년 11월 13일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
typedef struct infor {
	char name[20];
	int num;
	int kor;
	int eng;
	int math;
	double av;
}Infor;
int main(void)
{
	Infor list[3];
	int i, best = 0;
	for (i = 0; i < 3; i++)
	{
		printf("이름: ");
		scanf("%s", list[i].name);
		printf("학번: ");
		scanf("%d", &list[i].num);
		printf("국어: ");
		scanf("%d", &list[i].kor);
		printf("영어: ");
		scanf("%d", &list[i].eng);
		printf("수학: ");
		scanf("%d", &list[i].math);
		list[i].av = (double)(list[i].kor + list[i].eng + list[i].math) / 3;
	}
	for (i = 0; i < 3; i++)
	{
		if (list[i].av > list[best].av)
			best = i;
	}
	printf("<최우수 학생정보>\n");
	printf("%s %d %d %d %d %lf\n", list[best].name, list[best].num, list[best].kor, list[best].eng, list[best].math, list[best].av);
	return 0;
}
