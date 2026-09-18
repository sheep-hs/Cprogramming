// **********************************************
// 제   목  :  주어진 문자열에서 사전에서 앞에 나오는 문자열 출력
// 날   짜  :  2026년 9월 18일
// 작성자   :  2600115  양효선
// **********************************************

#include<stdio.h>
int main(void)
{
	int i;
	int min = 0;
	char* fruits[] = { "apple","blueberry","orange","melon" };
  
	for (i = 1; i < 4; i++)
	{
		if (fruits[i][0] < fruits[min][0])
			min = i;
	 }
	printf("사전에서 가장 앞에 나오는 문자열: %s", fruits[min]);
	return 0;
}
