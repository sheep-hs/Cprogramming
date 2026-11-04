// **********************************************
// 제   목  :  실습과제 1 코드
// 날   짜  :  2026년 11월 4일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
struct infor
{
	int num;
	char name[20];
	char add[50];
};
int main(void)
{
	struct infor i;
	printf("학번을 입력하시오: ");
	scanf("%d", &i.num);
	getchar();

	printf("이름을 입력하시오: ");
	scanf("%s", &i.name);
	getchar();

	fputs("주소를 입력하시오: ", stdout);
	fgets(i.add, sizeof(i.add), stdin);
	printf("\n");
	
	printf("1. 학번: %d\n", i.num);
	printf("2. 이름: %s\n", i.name);
	printf("3. 주소: %s", i.add);
	return 0;
}
