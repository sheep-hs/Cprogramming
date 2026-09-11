// **********************************************
// 제   목  :  포인터 연산 이용
// 날   짜  :  2026년 9월 11일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main(void)
{
    double arr[5];
    double* ptr = arr;
    double* temp;
    int i;

    printf("5개의 실수를 입력하시오.\n");
    for (i = 0; i < 5; i++)
        scanf("%lf", ptr + i);

    for (i = 0; i < 5; i++)
        *(ptr + i) += 2;

    printf("배열 표현: ");
    for (i = 0; i < 5; i++)
        printf("%.2f ", arr[i]);
    printf("\n");

    printf("배열명을 이용한 포인터 표현: ");
    for (i = 0; i < 5; i++)
        printf("%.2f ", *(arr + i));
    printf("\n");

    printf("포인터 변수를 이용한 배열 표현: ");
    for (i = 0; i < 5; i++)
        printf("%.2f ", ptr[i]);
    printf("\n");

    printf("포인터 변수를 이용한 포인터 표현: ");
    for (i = 0; i < 5; i++)
        printf("%.2f ", *(ptr + i));
    printf("\n");
    temp = ptr;

    printf("포인터 증감 연산을 이용한 표현: ");
    for (i = 0; i < 5; i++)
        printf("%.2f ", *(temp++));
    printf("\n");

    return 0;
}
