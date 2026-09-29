// **********************************************
// 제   목  :  도전 2번 풀이
// 날   짜  :  2026년 9월 29일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int n, num[100];
	int i = 0;
	printf("10진수 정수 입력: ");
	scanf("%d", &n);

	while (n > 0)
	{
		num[i] = n % 2;
		n /= 2;
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		printf("%d", num[i]);
	}
	return 0;
}
