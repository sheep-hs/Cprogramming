// **********************************************
// 제   목  :  이중 포인터를 이용한 최댓값 출력
// 날   짜  :  2026년 10월 6일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int get_max(int** arr, int n);
int main(void)
{
	int num1 = 50, num2 = 20, num3 = 30;
	int* ptrarr[3] = { &num1,&num2,&num3 };
	int max;
	max = get_max(ptrarr, 3);
	printf("최댓값: %d\n", max);
	return 0;
}
int get_max(int** arr, int n)
{
	int i, max;
	max = **arr;
	for (i = 0; i < 3; i++)
	{
		if (*(*arr + i) > max)
			max = *(*arr + i);
	}
	return max;
}
