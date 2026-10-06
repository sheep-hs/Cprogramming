# 실습과제 1
```
double num = 6.28;
double* ptr= &num;
double** dptr= &ptr;
```
| 수식 | 결과값 | 결과값의 자료형 |
| :--- | :--- | :--- |
| **ptr** | 100 | `double*` |
| **dptr** | 300 | `double**` |
| **&ptr** | 300 | `double**` |
| **&dptr** | 500 | `double***` |
| ***ptr** | 6.28 | `double` |
| ***dptr** | 100 | `double*` |
| ****dptr** | 6.28 | `double` |

--------------
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
int get_max(int** arr, int n);
```
- `get_max` 함수 선언
```
int main(void)
```
- 메인함수 시작
```
int num1 = 50, num2 = 20, num3 = 30;
```
- int형 변수 num1, num2, num3을 선언하고 각각 50, 20, 30을 저
```
int* ptrarr[3] = { &num1,&num2,&num3 };
```
- int형 포인터 변수 ptrarr을 선언하고 안에 &num1, &num2, &num3을 저장
```
int max;
```
- int형 변수 max를 선언
```
max = get_max(ptrarr, 3);
```
- `get_max' 함수 호출
```
printf("최댓값: %d\n", max);
```
- `max`에 저장된 최댓값 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료
```
int get_max(int** arr, int n)
```
- `get_max` 함수 정의
```
int i, max;
```
- int형 변수 i, max 선언
```
max = **arr;
```
- `max`의 값을 `num1`이라고 가정
```
for (i = 0; i < 3; i++)
{
  if (*(*arr + i) > max)
    max = *(*arr + i);
}
```
- `for (i = 0; i < 3; i++)`: 총 3번 반복
- `if (*(*arr + i) > max)`: 현재 저장된 값과 다음 요소의 값을 비교
- `max = *(*arr + i);`: 비교한 값이 더 크면 해당 값을 `max`에 저장
```
return max;
```
- `max`를 반환

## 실행결과
<img width="397" height="90" alt="17-1-2" src="https://github.com/user-attachments/assets/cdecd560-ead9-421c-a909-a962d7569b18" />

--------------
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
void prn_str(char** str, int count);
```
- `prn_str` 함수 선언
```
int main(void)
```
- 메인함수 시작
```
char* ptrarr[] = { "eagle","tiger","lion","squirrel" };
```
- char현 포인터 배열 ptrarr을 선언하고 eagle, tiger, lion, squirrel을 저장
```
int count;
```
- int형 변수 count 선언
```
count = sizeof(ptrarr) / sizeof(ptrarr[0]);
```
- 전체 배열 크기를 원소 하나의 크기로 나눔
```
prn_str(ptrarr, count);
```
- `prn_str` 함수 호출
```
return 0;
```
- 0을 반환하고 메인함수 종료
```
void prn_str(char** str, int count)
```
- `prn_str` 함수 정의
```
int i;
```
- int형 변수 i 선언
```
for (i = 0; i < count; i++)
{
  printf("%s\n", *(str+i));
}
```
- `for (i = 0; i < count; i++)`: 총 count만큼 반복
- `printf("%s\n", *(str+i));`: 문자열 출력

## 실행결과
<img width="387" height="157" alt="17-1-3" src="https://github.com/user-attachments/assets/0d9cae73-b7d4-4c3c-b82e-f0cf7de7f7c8" />

------------------
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
void MaxAndMin(int* arr, int size, int** maxptr, int** minptr);
```
- `MaxAndMin` 함수 선언
```
int main(void)
```
- 메인함수 시작
```
int* maxptr;
```
- int형 포인터 변수 maxptr 선언
```
int* minptr;
```
- int형 포인터 변수 minptr 선언
```
int arr[5], i;
```
- int형 배열 arr과 변수 i 선언
```
for (i = 0; i < 5; i++)
{
  printf("%d번째 정수를 입력하시오: ", i + 1);
  scanf("%d", &arr[i]);
}
```
- `for (i = 0; i < 5; i++)`: 총 5번 반복
- `printf("%d번째 정수를 입력하시오: ", i + 1);`: 사용자에게 정수를 입력하라는 안내 문구 출력
- `scanf("%d", &arr[i]);`: `arr`에 입력한 값 저장
```
MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxptr, &minptr);
```
- `MaxAndMin` 함수 호출
```
printf("최대: %d, 최소: %d", *maxptr, *minptr);
```
- 최대, 최소 값 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료
```
void MaxAndMin(int* arr, int size, int** maxptr, int** minptr)
```
- `MaxAndMin` 함수 정의
```
int* max;
```
- int형 포인터 변수 max 선언
```
int* min;
```
- int형 포인터 변수 min 선언
```
int i;
```
- int형 변수 i 선언
```
max = min = &arr[0];
```
- `max`와 `min`의 값을 첫 번째 원소를 가리키게 함
```
for (i = 0; i < size; i++)
{
  if (*max < arr[i])
    max = &arr[i];
  if (*min > arr[i])
    min = &arr[i];
}
```
- `for (i = 0; i < size; i++)`: 총 size 만큼 반복
- `if (*max < arr[i])`: 현재 저장된 값과 현재 배열의 값을 비교
- `if (*min > arr[i])`: 현재 저장된 값과 현재 배열의 값을 비교
```
*maxptr = max;
```
- `main` 함수에 있는 `maxptr`이 최대값의 주소를 가짐
```
*minptr = min;
```
- `main` 함수에 있는 `minptr`이 최솟값의 주소를 가짐

## 실행결과
<img width="401" height="197" alt="17-1-4" src="https://github.com/user-attachments/assets/7a4c9aae-00ea-42e7-bf41-41a9d9eb86c6" />
