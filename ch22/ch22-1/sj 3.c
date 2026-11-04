// **********************************************
// 제   목  :  실습과제 3 코드
// 날   짜  :  2026년 11월 4일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
struct Car
{
	char model[20];
	char num[20];
	int km;
};
int main(void)
{
	struct Car c;
	printf("모델을 입력하시오: ");
	scanf("%s", &c.model);
	getchar();

	printf("번호판을 입력하시오: ");
	scanf("%s", &c.num);
	getchar();

	printf("주행거리를 입력하시오: ");
	scanf("%d", &c.km);
	printf("\n");

	printf("1. 모델: %s\n", c.model);
	printf("2. 번호판: %s\n", c.num);
	printf("3. 주행거리: %d km", c.km);
	return 0;
}
