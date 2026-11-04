// **********************************************
// 제   목  :  실습과제 5 코드
// 날   짜  :  2026년 11월 4일
// 작성자   :  2600115  양효선
// **********************************************
#include<stdio.h>
struct point
{
	int x;
	int y;
};
int main(void)
{
	struct point p1 = { 10,10 }, p2 = { 20,20 };
	printf("교환전 p1의 좌표: (%d, %d)\n", p1.x, p1.y);
	printf("교환전 p2의 좌표: (%d, %d)\n", p2.x, p2.y);
	struct point temp = p1;
	p1 = p2;
	p2 = temp;
	printf("교환후 p1의 좌표: (%d, %d)\n", p1.x, p1.y);
	printf("교환후 p2의 좌표: (%d, %d)\n", p2.x, p2.y);
	return 0;
}
