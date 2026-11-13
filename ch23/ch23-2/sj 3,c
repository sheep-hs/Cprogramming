// **********************************************
// 제   목  :  실습과제 3 코드
// 날   짜  :  2026년 11월 13일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
typedef union bytes {
	unsigned int num;
	unsigned char bytes[4];
}Bytes;
int main(void)
{
	Bytes data;
	printf("정수를 입력하시오(16진수): ");
	scanf("%x", &data.num);
	printf("최상위(4번째) 바이트(16진수): %x\n", data.bytes[3]);
	printf("3번째 바이트(16진수): %x\n", data.bytes[2]);
	printf("2번째 바이트(16진수) : %x\n", data.bytes[1]);
	printf("최하위(1번째) 바이트(16진수) : %x\n", data.bytes[0]);
	return 0;
}
