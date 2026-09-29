// **********************************************
// 제   목  :  최댓값 구하기
// 날   짜  :  2026년 9월 29일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int get_max(int* arr, int n);
int main(void)
{
	int num[5];
	int i, max;
	printf("정수 5개를 입력하시오.\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}
	max = get_max(num, 5);
	printf("최댓값은 %d입니다.", max);
	return 0;
}
int get_max(int* arr, int n)
{
	int i, max;
	max = *arr;
	for (i = 1; i < n; i++)
		if (*(arr + i) > max)
			max = *(arr + i);
	return max;
}
