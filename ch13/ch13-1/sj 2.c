// **********************************************
// 제   목  :  배열 표현을 포인터 표현으로 변경
// 날   짜  :  2026년 9월 11일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
    int grade[5];
    int sum = 0, i, average;

    for (i = 0; i < 5; i++)
    {
        printf("성적을 입력하시오: ");
        scanf("%d", (grade + i));
    }

    for (i = 0; i < 5; i++)
        sum += *(grade + i);

    average = sum / 5.0;
    printf("성적 평균= %d\n", average);

    return 0;
}
