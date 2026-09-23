// **********************************************
// 제   목  :  값에 의한 호출을 이용한 증가값 출력
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int add2(int value);
int main(void)
{
	int number;
	printf("정수를 입력하시오: ");
	scanf("%d", &number);
	number = add2(number);
	printf("2만큼 증가한 값: %d\n",number);
}
int add2(int value)
{
	value += 2;
	return value;
}
