// **********************************************
// 제   목  :  실습과제 2 코드
// 날   짜  :  2026년 10월 28일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
void printText(const char* s)
{
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
}
int main(void)
{
	int ch;
	int n;
	while (1)
	{
		printText("문자입력: ");
		ch = getchar();
		if (ch == 'q' || ch == 'Q')
			break;
		if (ch == EOF)
			break;
		n = ch;
		while (n != '\n' && n != EOF)
    {
			n = getchar();
    }
		printText("입력된 문자는 ");
		putchar(ch);
		putchar('\n');
	}
	return 0;
}
