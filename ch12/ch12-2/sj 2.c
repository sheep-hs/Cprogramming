// **********************************************
// 제   목  :  포인터를 사용한 변수 값 출력
// 날   짜  :  2026년 9월9일
// 작성자   :  2600115  양효선
// **********************************************

#include<stdio.h>
int main(void)
{
	int a = -100;
	char b = 'A';
	double c = 3.14;

	int* pta = &a;
	char* ptb = &b;
	double* ptc = &c;

	printf("int형 변수 a의 값은: %d\n", *pta);
	printf("char형 변수 b의 값은: %c\n", *ptb);
	printf("double형 변수 c의 값은: %lf\n", *ptc);
	return 0;
}
