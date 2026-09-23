// **********************************************
// 제   목  :  swap함수 활용
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
void swap(int* px, int* py);
int main(void)
{
	int x, y, z;
	printf("정수 x를 입력하시오: ");
	scanf("%d", &x);
	printf("정수 y를 입력하시오: ");
	scanf("%d", &y);
	printf("정수 z를 입력하시오: ");
	scanf("%d", &z);
	printf("swap함수 호출 전 x=%d, y=%d, z=%d\n", x, y, z);
	swap(&x, &y);
	swap(&y, &z);
	printf("swap함수 호출 후 x=%d, y=%d, z=%d", x, y, z);
}
void swap(int* px, int* py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}
