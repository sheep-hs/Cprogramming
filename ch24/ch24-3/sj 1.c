// **********************************************
// 제   목  :  실습과제 1 코드
// 날   짜  :  2026년 11월 24일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int i, num[10];
	FILE* src = fopen("a.txt", "rt");
	FILE* dest = fopen("b.bin", "wb");

	if (src == NULL || dest == NULL)
	{
		puts("파일 열기 실패!\n");
		return -1;
	}
	for (i = 0; i < 10; i++)
	{
		if (fscanf(src, "%d", &num[i]) != 1)
			break;
	}
	fwrite(num, sizeof(int), i, dest);
	fclose(src);
	fclose(dest);
	return 0;
}
