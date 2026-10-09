// **********************************************
// 제   목  :  도전 2 풀이
// 날   짜  :  2026년 10월 9일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int arr[20][20] = { 0 };
	int num, i, j;
	int top, bottom, left, right;
	int value = 1;
	printf("숫자를 입력하시오: ");
	scanf("%d", &num);
	if (num < 1 || num>20)
		return 0;

	top = left = 0;
	bottom = right = num - 1;

	while (top <= bottom && left <= right)
	{
		for (j = left; j <= right; j++)
			arr[top][j] = value++;
		top++;
		for (i = top; i <= bottom; i++)
			arr[i][right] = value++;
		right--;
		if (top <= bottom)
		{
			for (j = right; j >= left; j--)
				arr[bottom][j] = value++;
			bottom--;
		}
		if (left <= right)
		{
			for (i = bottom; i >= top; i--)
				arr[i][left] = value++;
			left++;
		}
	}
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			printf("%3d", arr[i][j]);
		}printf("\n");
	}
	return 0;
}
