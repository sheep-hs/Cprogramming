// **********************************************
// 제   목  :  포인터 대상 변경 및 연산 출력 
// 날   짜  :  2026년 9월9일
// 작성자   :  2600115  양효선
// **********************************************

#include<stdio.h>
int main(void)
{
	int num1 = 20, num2 = 30;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp;
	
	(*ptr1) += 30;
	(*ptr2) -= 20;

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("ptr1이 가리키는 값: %d\n", *ptr1);
	printf("ptr2이 가리키는 값: %d", *ptr2);
	return 0;
}
