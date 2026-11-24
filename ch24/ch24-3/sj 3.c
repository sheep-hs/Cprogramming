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
	FILE* fp1 = fopen("a.txt", "rb");
	FILE* fp2 = fopen("b.bin", "rb");
	int ch;
	int size1 = 0, size2 = 0;

	if (fp1 == NULL || fp2 == NULL)
	{
		puts("파일 열기 실패!\n");
		return -1;
	}
	while ((ch = fgetc(fp1)) != EOF)
	{
		size1++;
	}
	fclose(fp1);
	while ((ch = fgetc(fp2)) != EOF)
	{
		size2++;
	}
	fclose(fp2);

	printf("a.txt의 파일크기: %d바이트\n", size1);
	printf("b.bin의 파일크기: %d바이트\n", size2);
	return 0;
}
