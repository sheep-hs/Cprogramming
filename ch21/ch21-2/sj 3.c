// **********************************************
// 제   목  :  실습과제 3 코드
// 날   짜  :  2026년 10월 28일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char name[100], address[100], carnum[100];
	fputs("이름: ", stdout);
	fgets(name, sizeof(name), stdin);
	fputs("주소: ", stdout);
	fgets(address, sizeof(address), stdin);
	fputs("자동차번호: ", stdout);
	fgets(carnum, sizeof(carnum), stdin);
	puts("<결과출력>");
	fputs("이름: ", stdout);
	fputs(name, stdout);
	fputs("주소: ", stdout);
	fputs(address, stdout);
	fputs("자동차번호: ", stdout);
	fputs(carnum, stdout);
	return 0;
}
