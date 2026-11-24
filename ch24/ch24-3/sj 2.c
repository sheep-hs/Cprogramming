// **********************************************
// 제   목  :  실습과제 2 코드
// 날   짜  :  2026년 11월 24일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int i, num[10];
	FILE* fp = fopen("b.bin", "rb");

	if (fp == NULL)
	{
		printf("파일 열기 실패!\n");
		return -1;
	}
	if (fread(num, sizeof(int), 10, fp) != 10)
	{
		printf("데이터 읽기 실패!\n");
		fclose(fp);
		return -1;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", num[i]);
	}
	fclose(fp);
	return 0;
}
