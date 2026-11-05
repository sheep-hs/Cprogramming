// **********************************************
// 제   목  :  실습과제 1 코드
// 날   짜  :  2026년 11월 5일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
struct infor
{
	char name[20];
	int num;
};
int main(void)
{
	struct infor list[3];
	int i, max = 0;
	for (i = 0; i < 3; i++)
	{
		printf("이름을 입력하시오: ");
		scanf("%s", list[i].name);
		printf("성적을 입력하시오: ");
		scanf("%d", &list[i].num);
	}
	for (i = 1; i < 3; i++)
	{
		if (list[i].num > list[max].num)
			max = i;
	}
	printf("최우수학생의 이름은 %s, 점수는 %d점", list[max].name, list[max].num);
	return 0;
}
