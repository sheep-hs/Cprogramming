# 실습과제 1
1. 주소에 의한 호출을 사용해야 하는 3가지의 경우를 설명하라
- 다른 함수에서 선언된 지역변수의 값을 변경하고 싶은 경우
- 배열을 함수의 인자에 전달하는 경우 
- 함수의 리턴 값이 2개 이상인 경우
 
2. 최댓값을 구하는 알고리즘을 설명하라
- 첫 번째 원소를 최댓값으로 설정한 후 나머지 원소들을 하나씩 비교하며 현재 원소가 최댓값보다 크면 최댓값을 현재 원소로 변경한다. 모든 원소를 비교한 후 남아 있는 값이 최댓값이 되는 것이다.
 
3. const 선언을 사용하는 이유를 설명하시오. (교재 322~323페이지를 참고할 것)
- 변수 선언 시 앞에 `const`를 붙이면 변수를 상수처럼 만들어 변수의 값을 바꿀 수 없게 한다. 해당 선언을 사용하게 되면 값이 변경되는 것을 막아주고 많이 사용하면 할수록 코드의 안전성이 높아진다.
----------------------------------------------
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
- 헤더파일 stdio.h를 포함해
```
int get_max(int* arr, int n);
```
- get_max 함수 미리 선언
```
int main(void)
```
- 메인함수 시작
```
int num[5];
```
- int형 배열 선언
```
int i, max;
```
- int현 변수 i, max 선언
```
printf("정수 5개를 입력하시오.\n");
```
- 사용자에게 정수 5개를 입력하라는 안내 문구 출력
```
for (i = 0; i < 5; i++)
{
 scanf("%d", &num[i]);
}
```
- `for (i = 0; i < 5; i++)`: 총 5번 반복
- `scanf("%d", &num[i]);`: 정수를 입력받아서 `num[i]`에 저장
```
max = get_max(num, 5);
```
- `get_max`함수 호출 및 결과를 `max`에 저장
```
printf("최댓값은 %d입니다.", max);
```
- `max`에 저장된 최댓값 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료
```
int get_max(int* arr, int n)
```
- 배열의 최댓값을 찾아서 int형으로 반환하는 함수
```
int i, max;
```
- int형 변수 i, max 선언
```
max = *arr;
```
- `max`에 배열의 첫 번째 값을 최댓값이라고 설정
```
for (i = 1; i < n; i++)
 if (*(arr + i) > max)
  max = *(arr + i);
```
- `for (i = 1; i < n; i++)`: 두 번째 요소부터 마지막 요소까지 확인
- `if (*(arr + i) > max)`: 다음 요소의 값이 `max`에 저장된 값보다 크면
- `max = *(arr + i);`: 다음 요소의 값을 `max`에 저장
```
return max;
```
- `max`를 반환하고 함수 종료

## 실행결과
<img width="397" height="220" alt="14-2-2" src="https://github.com/user-attachments/assets/d0f5e04d-f8ec-4ea0-b524-c0de5039d4b7" />

-----------------------------------------------
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
- 헤더파일 stdio.h를 포함해
```
void get_data(int* arr, int n);
```
- get_data 함수 미리 선언
```
int main(void)
```
- 메인함수 시작
```
int i, data[5];
```
- int형 변수 i와 배열 data를 선언
```
get_data(data, 5);
```
- `get_data` 함수 호출
```
for (i = 0; i < 5; i++)
{
 printf("%d번째 data: %d\n", i + 1, data[i]);
}
```
- `for (i = 0; i < 5; i++)`: 총 5번 반복
- `printf("%d번째 data: %d\n", i + 1, data[i]);`: 배열에 저장된 값 출력
```
	return 0;
```
- 0을 반환하고 메인함수 종료
```
void get_data(int* arr, int n)
```
- 메인함수에서 전달받은 배열과 배열의 크기를 이용해서 데이터를 입력받는 함수
```
int i;
```
- int형 변수 i 선언
```
for (i = 0; i < n; i++)
{
 printf("%d번째 data를 입력하시오: ", i + 1);
 scanf("%d", &arr[i]);
}
```
- `for (i = 0; i < n; i++)`: 0부터 n-1까지 반복
- `printf("%d번째 data를 입력하시오: ", i + 1);`: 사용자에게 몇 번째 데이터를 입력할지 알려줌
- `scanf("%d", &arr[i]);`: 입력한 값을 메인함수에 있는 `data[i]`에 저장

## 실행결과
<img width="425" height="292" alt="14-2-3" src="https://github.com/user-attachments/assets/89ccaa6b-80e6-4611-8d67-d5d08bdaa396" />

--------------------------------------
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
void number(double num, int* Int, double* Frac);
```
- number 함수 미리 선언
```
int main(void)
```
- 메인함수 시작 
```
double num, Frac;
```
- double형 변수 num, Frac 선언
```
int Int;
```
- int형 변수 Int 선언
```
printf("실수를 입력하시오: ");
```
- 사용자에게 실수를 입력하라는 안내 문구 출력
```
scanf("%lf", &num);
```
- 실수를 입력받아서 `num`에 저장
```
number(num, &Int, &Frac);
```
- number 함수 호출
```
printf("정수부: %d\n", Int);
```
- `Int`에 저장된 정수부 출력
```
printf("소수부: %lf", Frac);
```
- `Frac`에 저장된 소수부 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료
```
void number(double num, int* Int, double* Frac)
```
- 메인함수에서 전달받은 값을 이용해서 정수부와 소수부를 계산하는 함수
```
*Int = (int)num;
```
- `num`을 int형으로 강제 변환
```
*Frac = num - *Int;
```
- 소수부 구함

## 실행결과
<img width="397" height="125" alt="14-2-4" src="https://github.com/user-attachments/assets/f0d6598e-27a4-43a3-97ae-0490870f49a8" />

----------------------------
# 실습과제 5
## 문제 2번
- 매개변수 `ptr`에 `const` 선언이 되어있다. 이는 함수 ShowData 내에서 `ptr`을 통해 `ptr`이 가리키는 변수에 저장된 값을 변경시키지 않는다. `int*rptr=ptr;`에서 `const`가 선언되지 않은 포인터 변수에 `ptr`에 저장되어 있는 값을 대입하고 있다. 그래서 해당 코드가 있는 열에서 경고가 발생되는 것이다.
-------------------------------

# 도전과제
## 도전 1번 실행결과
<img width="385" height="370" alt="14-2-도전문제 1" src="https://github.com/user-attachments/assets/9b7b10cb-d1e6-4586-a841-463d687b31a3" />

## 도전 2번 실행결과
<img width="387" height="97" alt="14-2-도전문제 2" src="https://github.com/user-attachments/assets/6b1b0ca7-7bc7-4b76-b4e8-f8ed1cd143d1" />

## 도전 4번 실행결과
<img width="407" height="102" alt="14-2-도전문제 4" src="https://github.com/user-attachments/assets/6434d36d-0902-41d8-99de-c27e82cabd11" />
