// **********************************************
// 제   목  :  실습과제 3 코드
// 날   짜  :  2026년 11월 20일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
typedef struct infor {
	char name[20];
	int kor;
	int eng;
	int math;
	int sum;
	double av;
}Infor;
int main(void)
{
	Infor list[3], temp;
	int i, j;
	FILE* fp1;
	FILE* fp2;
	
	fp1 = fopen("input.txt", "rt");
	if (fp1 == NULL)
	{
		printf("파일 열기 실패!\n");
		return -1;
	}

	fp2 = fopen("output.txt", "wt");
	if (fp2 == NULL)
	{
		printf("파일 열기 실패!\n");
		return -1;
	}

	for (i = 0; i < 3; i++)
	{
		if (fscanf(fp1, "%s %d %d %d", list[i].name, &list[i].kor, &list[i].eng, &list[i].math) != 4)
		{
			printf("학생 정보 입력 실패!\n");
			fclose(fp1);
			fclose(fp2);
			return -1;
		}
		list[i].sum = list[i].kor + list[i].eng + list[i].math;
		list[i].av = (double)list[i].sum / 3;
	}
	for (i = 0; i < 2; i++)
	{
		for (j = i + 1; j < 3; j++)
		{
			if (list[i].sum < list[j].sum)
			{
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		fprintf(fp2, "%d등: %s %d %.1f\n", i + 1, list[i].name, list[i].sum, list[i].av);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
