// **********************************************
// 제   목  :  소문자<->대문자 변환 출력
// 날   짜  :  2026년 9월 18일
// 작성자   :  2600115  양효선
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int i;
	char str[100];
	printf("문자열을 입력하시오: ");
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	printf("변환 결과: %s", str);
	return 0;
}
