// **********************************************
// 제   목  :  실습과제 4 코드
// 날   짜  :  2026년 11월 11일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
typedef struct pos {
	int xpos, ypos;
}Point;
void swap_struct(Point* temp, Point* pos1, Point* pos2);
int main(void)
{
	Point pos1 = { 1,2 };
	Point pos2 = { 3,4 };
	Point temp;
	printf("pos1: [% d, % d] , pos2 : [% d, % d] \n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
	swap_struct(&temp, &pos1, &pos2);
	printf("pos1: [% d, % d] , pos2 : [% d, % d] \n", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
	return 0;

}
void swap_struct(Point* temp, Point* pos1, Point* pos2)
{
	*temp = *pos1;
	*pos1 = *pos2;
	*pos2 = *temp;
}
