// **********************************************
// 제   목  :  포인터 증감연산자 이용 
// 날   짜  :  2026년 9월 11일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
    double arr[5];
    double* ptr = arr;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("5개의 실수를 입력하시오: ");
        scanf("%lf", ptr++);
    }

    ptr = arr;

    for (i = 0; i < 5; i++)
    {
        *ptr += 2;
        ptr++;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    return 0;
}
