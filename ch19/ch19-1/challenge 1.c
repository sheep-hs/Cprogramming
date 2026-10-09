// **********************************************
// 제   목  :  도전 1 풀이
// 날   짜  :  2026년 10월 9일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
void showarr(int arr[4][4]);
void  rotate(int arr[4][4]);
int main(void)
{
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	int i;
	for (i = 0; i < 3; i++)
	{
		rotate(arr);
		printf("%d번 회전 결과\n", i + 1);
		showarr(arr);
		printf("\n");
	}
	return 0;
}
void showarr(int arr[4][4])
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
}
void rotate(int arr[4][4])
{
	int temp[4][4];
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			temp[j][3 - i] = arr[i][j];
		}
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			arr[i][j] = temp[i][j];
		}
	}
}
