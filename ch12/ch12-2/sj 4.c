// **********************************************
// 제   목  :  포인터를 이용한 두 정수의 합 출력 
// 날   짜  :  2026년 9월9일
// 작성자   :  2600115  양효선
// **********************************************

#include<stdio.h>
int main(void)
{
	int a = 100, b = 200;
	int sum;

	int* pta = &a;
	int* ptb = &b;
	int* ptsum = &sum;

	*ptsum = *pta + *ptb;
  
	printf("두 정수의 합: %d\n", *ptsum);
	return 0;
}
