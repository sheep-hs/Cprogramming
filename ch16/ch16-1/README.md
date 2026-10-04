# 실습과제 1
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
```
- 보안관련 경고 방지
```
#pragma warning(disable:6031)
```
- 리턴값관련 경고 방지
```
#include<stdio.h>
```
- 헤더파일 stdio.h를 포함해라
```
int main(void)
```
- 메인함수 시작
```
int arr1[2][2] = { { 2,4 }, { 5,-5 } };
```
- int형 2차원 배열 arr1을 선언하고 2행 2열에 각각 2, 4, 5, -5를 저장
```
int arr2[2][2] = { {-2,3},{0,-5} };
```
- int형 2차원 배열 arr2를 선언하고 2행 2열에 각각 -2, 3, 0, -5를 저장
```
int arr3[2][2], i, j;
```
- int형 2차원 배열 arr3과 변수 i, j 선언
```
printf("연산결과: \n");
```
- 연산결과를 출력하고 다음줄로 내려감
```
for (i = 0; i < 2; i++)
{
	for (j = 0; j < 2; j++)
	{
		arr3[i][j] = arr1[i][j] + arr2[i][j];
		printf("%d ", arr3[i][j]);
	}printf("\n");
}
```
- `for (i = 0; i < 2; i++)`: 총 2번 반복
- `for (j = 0; j < 2; j++)`: 총 2번 반복
- `arr3[i][j] = arr1[i][j] + arr2[i][j];`: 같은 위치에 있는 `arr1`과 `arr2`의 값을 더해서 `arr3`에 저장
- `printf("%d ", arr3[i][j]);`: 방금 계산한 `arr3[i][j]`를 출력
- `printf("\n");`: 줄바꿈
```
return 0;
```
- 0을 반환하고 메인함수 종료

## 실행결과
<img width="400" height="141" alt="16-1-1" src="https://github.com/user-attachments/assets/3230f63f-c34c-484e-8807-f49143ce1643" />

----------------------------------------------------------------------------------------------------
# 실습과제 2
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
```
- 보안관련 경고 방지
```
#pragma warning(disable:6031)
```
- 리턴값관련 경고 방지
```
#include<stdio.h>
```
- 헤더파일 stdio.h를 포함해라
```
int main(void)
```
- 메인함수 시작
```
int score[3][3];
```
- int형 2차원 배열 score 선언
```
int sum, i, j, best;
```
- int형 변수 sum, i, j, best 선언
```
double av, max = 0;
```
- double형 변수 av, max 선언하고 max를 0으로 초기화
```
for (i = 0; i < 3; i++)
{
	printf("%d번째 학생의 국어, 영어, 수학 성적을 입력: ", i + 1);
	for (j = 0; j < 3; j++)
	{
		scanf("%d", &score[i][j]);
	}
}
```
- `for (i = 0; i < 3; i++)`: 총 3번 반복
- `printf("%d번째 학생의 국어, 영어, 수학 성적을 입력: ", i + 1);`: 사용자에게 값을 입력하라는 안내 문구 출력
- `for (j = 0; j < 3; j++)`: 총 3번 반복
- `scanf("%d", &score[i][j]);`: 정수를 입력받아서 `score[i][j]`에 저장
```
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
```
- `for (i = 0; i < 3; i++)`: 총 3번 반복
- `sum = 0;`: sum을 0으로 초기화
- `for (j = 0; j < 3; j++)`: 총 3번 반복
- `sum += score[i][j];`: 총점 계산
- `av = (double)sum / 3;`: `sum`을 강제형변환을 한 후 평균 계산
- `if (max < av)`: 현재 학생의 평균이 지금까지 최고값으로 저장된 값보다 높은지 확인
- `max = av;`: 현재 학생의 평균을 새로운 최고값으로 저장
- `best = i + 1;`: 학생 번호를 저장
```
printf("최우수 학생은 %d번째 학생이고 평균점수는 %.lf점이다.", best, max);
```
- 최우수 학생의 번째와 평균 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료

## 실행결과
<img width="647" height="151" alt="16-1-2" src="https://github.com/user-attachments/assets/666d665f-dec2-471f-b61c-4f6a0660a906" />

------------------------------------------------------------------------------------------------------------
# 실습과제 3
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
```
- 보안관련 경고 방지
```
#pragma warning(disable:6031)
```
- 리턴값관련 경고 방지
```
#include<stdio.h>
```
- 헤더파일 stdio.h를 포함해라
```
int main(void)
```
- 메인함수 저장
```
int arr[3][3] = { {-5,2,35},{-20,5,100},{-75,5,-25} };
```
- int형 2차원 배열 arr을 선언하고 3행 3열에 각각 -5, 2, 35, -20, 5, 100, -75, 5, -25를 저장
```
int i, j, max = arr[0][0];
```
- int형 변수 i, j, max를 선언하고 max에 배열의 첫번째 값을 최댓값이라고 가정(저장)
```
int Row, Col;
```
- int형 변수 Row, Col을 선언
```
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
```
- `for (i = 0; i < 3; i++)`: 총 3번 반복
- `for (j = 0; j < 3; j++)`: 총 3번 반복
- `if (max < arr[i][j])`: 현재 저장되어 있는 `max`와 현재 배열의 값을 비교
- `max = arr[i][j];`: 현재 값이 더 크다면 그 값을 새로움 최댓값으로 저장
```
printf("최댓값은 %d\n", max);
```
- 최댓값 출력
```
printf("위치는 %d행 %d열", Row, Col);
```
- 최댓값의 행과 열 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료

## 실행결과
<img width="387" height="110" alt="16-1-3" src="https://github.com/user-attachments/assets/c7eca35b-dccf-4259-80fc-e37fbfc35c06" />

------------------------------------------------------
# 실습과제 4
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
```
- 보안관련 경고 방지
```
#pragma warning(disable:6031)
```
- 리턴값관련 경고 방지
```
#include<stdio.h>
```
- 헤더파일 stdio.h를 포함해라
```
int main(void)
```
- 메인함수 시작
```
char str[4][10];
```
- char형 2차원 배열 str을 선언
```
int i, j;
```
- int형 변수 i, j 선언
```
int count;
```
- int형 변수 count 선언
```
for (i = 0; i < 4; i++)
{
	printf("%d번째 문자열 입력: ", i + 1);
	scanf("%s", &str[i][0]);
}
```
- `for (i = 0; i < 4; i++)`: 총 4번 반복
- `printf("%d번째 문자열 입력: ", i + 1);`: 사용자에게 문자열을 입력하라는 안내 문구 출력
- `scanf("%s", &str[i][0]);`: 문자열을 입력받아서 `str`에 저장
```
for (i = 0; i < 4; i++)
{
	count = 0;
	for (j = 0; str[i][j] != '\0'; j++)
	{
		count++;
	}printf("%d번째 문자열의 길이: %d\n", i + 1, count);
}
```
- `for (i = 0; i < 4; i++)`: 총 4번 반복
- `count = 0;`: `count`를 0으로 초기화
- `for (j = 0; str[i][j] != '\0'; j++)`: `str[i][j]`가 문자열의 끝인 널문자가 아닐 동안만 반복
- `count++;`: 문자열을 발견할 때마다 `count`를 1만큼 증가
- `printf("%d번째 문자열의 길이: %d\n", i + 1, count);`: 계산한 문자열의 길이 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료

## 실행결과
<img width="397" height="256" alt="16-1-4" src="https://github.com/user-attachments/assets/9dac0016-9986-4c94-9946-7732fb2d92ad" />

----------------------------------------------------------------------
# 실습과제 5
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
```
- 보안관련 경고 방지
```
#pragma warning(disable:6031)
```
- 리턴값관련 경고 방지
```
#include<stdio.h>
```
- 헤더파일 stdio.h를 
```
int main(void)
```
- 메인함수 시작
```
char str[4][10];
```
- char형 2차원 배열 str 선언
```
char* dic;
```
- char형 포인터 변수 dic 선언
```
int i;
```
- int형 변수 i 선언
```
for (i = 0; i < 4; i++)
{
	printf("%d번째 문자열 입력: ", i + 1);
	scanf("%s", &str[i][0]);
}
```
- `for (i = 0; i < 4; i++)`: 총 4번 반복
- `printf("%d번째 문자열 입력: ", i + 1);`: 사용자에게 문자열을 입력하라는 안내 문구 출력
- `scanf("%s", &str[i][0]);`: 입력한 문자열을 `str`에 저장
```
dic = str[0];
```
- `dic`이 첫번째 문자열을 가리킴
```
for (i = 0; i < 4; i++)
{
	if (str[i][0] > dic[0])
		dic = str[i];
}
```
- `for (i = 0; i < 4; i++)`: 총 4번 반복
- `if (str[i][0] > dic[0])`: 현재 문자열의 첫 번째 문자와 `dic`이 가리키는 문자열의 첫 번째 문자를 비교
```
printf("사전에서 제일 뒤에 나오는 문자열: %s", dic);
```
- 사전에서 제일 뒤에 나오는 문자열 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료

## 실행결과
<img width="507" height="176" alt="16-1-5" src="https://github.com/user-attachments/assets/d5fb7728-53ef-48ba-9951-900fe5086384" />

