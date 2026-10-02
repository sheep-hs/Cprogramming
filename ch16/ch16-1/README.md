# 실습과제 1
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int arr1[2][2] = { { 2,4 }, { 5,-5 } };
	int arr2[2][2] = { {-2,3},{0,-5} };
	int arr3[2][2], i, j;
	printf("연산결과: \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
			printf("%d ", arr3[i][j]);
		}printf("\n");
	}
}
```
## 실행결과
<img width="400" height="141" alt="16-1-1" src="https://github.com/user-attachments/assets/3230f63f-c34c-484e-8807-f49143ce1643" />

----------------------------------------------------------------------------------------------------
# 실습과제 2
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int score[3][3];
	int sum, i, j, best;
	double av, max = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d번째 학생의 국어, 영어, 수학 성적을 입력: ", i + 1);
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
		{
			sum += score[i][j];
		}
		av = (double)sum / 3;
		if (max < av)
		{
			max = av;
			best = i + 1;
		}
	}
	printf("최우수 학생은 %d번째 학생이고 평균점수는 %.lf점이다.", best, max);
	return 0;
}
```
## 실행결과
<img width="647" height="151" alt="16-1-2" src="https://github.com/user-attachments/assets/666d665f-dec2-471f-b61c-4f6a0660a906" />

------------------------------------------------------------------------------------------------------------
# 실습과제 3
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int arr[3][3] = { {-5,2,35},{-20,5,100},{-75,5,-25} };
	int i, j, max = arr[0][0];
	int Row, Col;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				Row = i + 1;
				Col = j + 1;
			}
		}
	}
	printf("최댓값은 %d\n", max);
	printf("위치는 %d행 %d열", Row, Col);
	return 0;
}
```
## 실행결과
<img width="387" height="110" alt="16-1-3" src="https://github.com/user-attachments/assets/c7eca35b-dccf-4259-80fc-e37fbfc35c06" />

------------------------------------------------------
# 실습과제 4
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char str[4][10];
	int i, j;
	int count;
	for (i = 0; i < 4; i++)
	{
		printf("%d번째 문자열 입력: ", i + 1);
		scanf("%s", &str[i][0]);
	}
	for (i = 0; i < 4; i++)
	{
		count = 0;
		for (j = 0; str[i][j] != '\0'; j++)
		{
			count++;
		}printf("%d번째 문자열의 길이: %d\n", i + 1, count);
	}
	return 0;
}
```
## 실행결과
<img width="397" height="256" alt="16-1-4" src="https://github.com/user-attachments/assets/9dac0016-9986-4c94-9946-7732fb2d92ad" />

----------------------------------------------------------------------
# 실습과제 5
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char str[4][10];
	char* dic;
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%d번째 문자열 입력: ", i + 1);
		scanf("%s", &str[i][0]);
	}
	dic = str[0];
	for (i = 0; i < 4; i++)
	{
		if (str[i][0] > dic[0])
			dic = str[i];
	}
	printf("사전에서 제일 뒤에 나오는 문자열: %s", dic);
	return 0;
}
```
## 실행결과
<img width="507" height="176" alt="16-1-5" src="https://github.com/user-attachments/assets/d5fb7728-53ef-48ba-9951-900fe5086384" />

