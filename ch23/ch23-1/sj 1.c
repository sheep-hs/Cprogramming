// **********************************************
// 제   목  :  실습과제 1 코드
// 날   짜  :  2026년 11월 10일
// 작성자   :  2600115  양효선
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
typedef struct infor
{
	int num;
	char name[20];
	char add[50];
}Infor;
void get_data(Infor* str);
void put_data(Infor* str);
int main(void)
{
	Infor i;
	get_data(&i);
	put_data(&i);
	return 0;
}
void get_data(Infor* str)
{
	printf("학번을 입력하시오: ");
	scanf("%d", &str->num);
	getchar();
	printf("이름을 입력하시오: ");
	scanf("%s", str->name);
	getchar();
	fputs("주소를 입력하시오: ", stdout);
	fgets(str->add, sizeof(str->add), stdin);
}
void put_data(Infor* str)
{
	printf("\n");
	printf("1.학번:%d\n", str->num);
	printf("2.이름:%s\n", str->name);
	printf("3.주소:%s\n", str->add);
}
