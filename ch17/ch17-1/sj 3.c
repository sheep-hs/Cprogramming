// **********************************************
// 제   목  :  이중 포인터를 이용한 문자열 출력
// 날   짜  :  2026년 10월 6일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
void prn_str(char** str, int count);
int main(void)
{
	char* ptrarr[] = { "eagle","tiger","lion","squirrel" };
	int count;
	count = sizeof(ptrarr) / sizeof(ptrarr[0]);
	prn_str(ptrarr, count);
	return 0;
}
void prn_str(char** str, int count)
{
	int i;
	for (i = 0; i < count; i++)
	{
		printf("%s\n", *(str+i));
	}
}
