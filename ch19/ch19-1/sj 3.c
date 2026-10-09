// **********************************************
// 제   목  :  함수포인터 활용
// 날   짜  :  2026년 10월 9일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
void caculate(int(*op)(int, int));
int main(void)
{
	int choice;
	printf("연산을 선택하시오(1:덧셈, 2:뺄셈, 3:곱셈, 4:나눗셈): ");
	scanf("%d", &choice);
	if (choice == 1)
		caculate(add);
	else if (choice == 2)
		caculate(sub);
	else if (choice == 3)
		caculate(mul);
	else if (choice == 4)
		caculate(div);
	else
		printf("잘못된 입력입니다.");
	return 0;
}
void caculate(int(*op)(int, int))
{
	int a, b;
	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &a, &b);
	printf("결과값: %d", op(a, b));
}
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}
