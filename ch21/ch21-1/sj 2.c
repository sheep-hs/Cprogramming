// **********************************************
// 제   목  :  실습과제 2 코드
// 날   짜  :  2026년 10월 13일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char a;
	while (1)
	{
		printf("문자입력: ");
		scanf(" %c", &a);
		if (a == 'q' || a == 'Q')
			break;
		else
			printf("입력된 문자는 %c\n", a);
	}
	return 0;
}
