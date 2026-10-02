// **********************************************
// 제   목  :  2차원 배열을 이용한 최댓값과 행과 열 찾기
// 날   짜  :  2026년 10월 2일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int arr[3][3] = { {-5,2,35},{-20,5,100},{-75,5,-25} };
	int i, j, max = arr[0][0];
	int Row, Col;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				Row = i + 1;
				Col = j + 1;
			}
		}
	}
	printf("최댓값은 %d\n", max);
	printf("위치는 %d행 %d열", Row, Col);
	return 0;
}
