// **********************************************
// 제   목  :  실습과제 4 코드
// 날   짜  :  2026년 11월 4일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
struct Point
{
	int x;
	int y;
};
int main(void)
{
	struct Point pu, pd;
	int w, h;
	printf("좌측상단의 좌표 입력: ");
	scanf("%d %d", &pu.x, &pu.y);
	printf("우측하단의 좌표 입력: ");
	scanf("%d %d", &pd.x, &pd.y);

	w = pd.x - pu.x;
	h = pd.y - pu.y;

	printf("사각형의 폭: %d\n", w);
	printf("사각형의 높이: %d\n", h);
	return 0;
}
