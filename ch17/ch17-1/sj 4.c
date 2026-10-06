// **********************************************
// 제   목  :  이중 포인터를 이용한 최대, 최소 출력
// 날   짜  :  2026년 10월 6일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
void MaxAndMin(int* arr, int size, int** maxptr, int** minptr);
int main(void)
{
	int* maxptr;
	int* minptr;
	int arr[5], i;
	for (i = 0; i < 5; i++)
	{
		printf("%d번째 정수를 입력하시오: ", i + 1);
		scanf("%d", &arr[i]);
	}
	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxptr, &minptr);
	printf("최대: %d, 최소: %d", *maxptr, *minptr);
	return 0;
}
void MaxAndMin(int* arr, int size, int** maxptr, int** minptr)
{
	int* max;
	int* min;
	int i;
	max = min = &arr[0];
	for (i = 0; i < size; i++)
	{
		if (*max < &arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}
	*maxptr = max;
	*minptr = min;
}
