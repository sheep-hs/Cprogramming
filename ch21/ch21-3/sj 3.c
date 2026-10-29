// **********************************************
// 제   목  :  실습과제 3 코드
// 날   짜  :  2026년 10월 29일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
void my_strcpy(char dest[], char src[]);
int main(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	my_strcpy(str2, str1);
	puts(str2);
	return 0;
}
void my_strcpy(char dest[], char src[])
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
