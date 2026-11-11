// **********************************************
// 제   목  :  실습과제 5 코드
// 날   짜  :  2026년 11월 11일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
typedef struct point {
	int xpos;
	int ypos;
}Point;
void SwapPoint(Point* ptr1, Point* ptr2);
int main(void)
{
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };
	SwapPoint(&pos1, &pos2);
	printf("[%d, %d]\n", pos1.xpos, pos1.ypos);
	printf("[%d, %d]\n", pos2.xpos, pos2.ypos);
	return 0;
}
void SwapPoint(Point* ptr1, Point* ptr2)
{
	Point temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
