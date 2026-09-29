// **********************************************
// 제   목  :  도전 1번 풀이
// 날   짜  :  2026년 9월 29일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
void oddnum(int* arr, int n);
void evennum(int* arr, int n);
int main(void)
{
	int num[10];
	int i;
	printf("총 10개의 숫자 입력\n");
	for (i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf("%d", &num[i]);
	}
	printf("홀수 출력: ");
	oddnum(num, 10);
	printf("짝수 출력: ");
	evennum(num, 10);
	return 0;
}
void oddnum(int* arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0)
			printf("%d ", arr[i]);
	}printf("\n");

}	
void evennum(int* arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	}printf("\n");
}
