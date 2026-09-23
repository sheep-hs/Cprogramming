// **********************************************
// 제   목  :  Call-by-value 와 Call-by-reference의 차이
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int SquareByValue(int num);
void SqureByReference(int* ptr);
int main(void)
{
	int num;
	int re;
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	re = num;
	printf("Call-by-value 기반: %d\n", SquareByValue(num));
	num = re;
	SqureByReference(&num);
	printf("Call-by-reference 기반: %d", num);
	return 0;
}
int SquareByValue(int num)
{
	return num * 100;
}
void SqureByReference(int* ptr)
{
	*ptr *= 100;
}
