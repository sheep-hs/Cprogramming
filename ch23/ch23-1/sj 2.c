// **********************************************
// 제   목  :  실습과제 2 코드
// 날   짜  :  2026년 11월 10일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
typedef struct infor
{
	char name[20];
	int score;
}Infor;
void get_data(Infor* str);
Infor get_best(Infor* str);
int main(void)
{
	Infor list[3];
	Infor best;
	get_data(list);
	best = get_best(list);
	printf("최우수 학생의 이름은 %s, 점수는 %d점", best.name, best.score);
	return 0;
}
void get_data(Infor* str)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("이름을 입력하시오: ");
		scanf("%s", (str + i)->name);
		printf("성적을 입력하시오: ");
		scanf("%d", &(str + i)->score);
	}
}
Infor get_best(Infor* str)
{
	int i, best = 0;
	for (i = 1; i < 3; i++)
	{
		if (str[i].score > str[best].score)
			best = i;
	}
	return str[best];
}
