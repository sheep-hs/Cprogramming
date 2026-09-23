// **********************************************
// 제   목  :  매개변수의 값을 증가시킨 후 출력
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
void add2(int* ptr);
int main(void)
{
	int number;
	printf("정수를 입력하세오: ");
	scanf("%d", &number);
	add2(&number);
	printf("2만큼 증가한 값: %d\n", number);
	return 0;
}
void add2(int* ptr)
{
	*ptr += 2;
}
