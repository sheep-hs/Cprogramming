// **********************************************
// 제   목  :  실습과제 4 코드
// 날   짜  :  2026년 11월 5일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
struct point
{
	int x;
	int y;
};
struct triangle
{
	struct point l[3];
};
int main(void)
{
	struct triangle t;
	double a, b, c;
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%d번째 점(x, y) 입력: ", i + 1);
		scanf("%d %d", &t.l[i].x, &t.l[i].y);
	}
	a = (t.l[0].x - t.l[1].x) * (t.l[0].x - t.l[1].x)
		+ (t.l[0].y - t.l[1].y) * (t.l[0].y - t.l[1].y);

	b = (t.l[1].x - t.l[2].x) * (t.l[1].x - t.l[2].x)
		+ (t.l[1].y - t.l[2].y) * (t.l[1].y - t.l[2].y);

	c = (t.l[2].x - t.l[0].x) * (t.l[2].x - t.l[0].x)
		+ (t.l[2].y - t.l[0].y) * (t.l[2].y - t.l[0].y);

	if (a > 0 && b > 0 && c > 0 && (a + b == c || b + c == a || c + a == b))
		printf("직각삼각형입니다.");
	else
		printf("직각삼각형이 아닙니다.");

	return 0;
}
