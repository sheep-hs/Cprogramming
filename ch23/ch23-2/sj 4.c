// **********************************************
// 제   목  :  실습과제 4 코드
// 날   짜  :  2026년 11월 13일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
typedef enum direction {
	up, down, left, right
}Direc;
void direction(Direc way);
int main(void)
{
	Direc way;
	for (way = up; way <= right; way += 1)
		direction(way);
	return 0;
}
void direction(Direc way)
{
	switch (way)
	{
	case up:
		printf("현재방향: 위\n");
		break;
	case down:
		printf("현재방향: 아래\n");
		break;
	case left:
		printf("현재방향: 왼쪽\n");
		break;
	case right:
		printf("현재방향: 오른쪽\n");
		break;
	}
}
