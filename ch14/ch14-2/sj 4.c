// **********************************************
// 제   목  :  정수부, 소수부 출력
// 날   짜  :  2026년 9월 29일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
void number(double num, int* Int, double* Frac);
int main(void)
{
	double num, Frac;
	int Int;
	
	printf("실수를 입력하시오: ");
	scanf("%lf", &num);

	number(num, &Int, &Frac);

	printf("정수부: %d\n", Int);
	printf("소수부: %lf", Frac);

	return 0;
}
void number(double num, int* Int, double* Frac)
{
	*Int = (int)num;
	*Frac = num - *Int;
}
