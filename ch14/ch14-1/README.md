# 실습과제 1
1. 함수의 인자와 매개변수 차이를 설명하라.
- 인자는 함수를 호출할 때 함수에 전달하는 값이고 매개변수는 함수가 호출될 때 전달받은 값을 저장하기 위해 선언하는 변수이다.
2. 함수가 호출될 때 컴퓨터에 의해 자동으로 실행되는 2가지를 설명하라.
- 함수가 호출될 때 매개변수가 메모리에 할당되고 인자값으로 초기화된다.
3. 값에 의한 함수 호출방식의 문제점을 설명하라.
- 값에 의한 함수 호출방식으로 다른 함수에서 선언된 지역변수의 값을 변경하는 불가능하다.
4. 주소에 의한 함수 호출방식이 필요한 경우를 설명하라.
- 주소에 의한 함수 호출방식은 다른 함수에서 선언된 지역변수의 값을 변경하는 것이 가능하기 때문에 이와 같은 경우에 필요로한다.
------------------------------------
# 실습과제 2
## 문제에 주어진 코드
```
#include <stdio.h>
void add2(int value);
int main(void)
{
  int number;
  printf(“정수를 입력하세요:”);
  scanf(“%d”, &number);
  add2(number);
  printf(“2만큼 증가한 값:%d\n", number);
  return0;
}
void add2(int value)
{
  value += 2;
}
```
## 실행결과
<img width="396" height="111" alt="14-1-2" src="https://github.com/user-attachments/assets/1e86f7ec-0c28-49a4-ae70-bbbbb3e70252" />

## 설명
<img width="830" height="272" alt="14-1-2(설명)" src="https://github.com/user-attachments/assets/c57f8cf3-1664-43b5-879a-85be0e797d50" />

- 위 그림과 같이 값에 의한 호출 방식에서는 인자의 값이 매개변수에 전달되므로 매개변수를 변경해도 기존의 변수의 값은 변경되지 않는다. (다른 함수에서 선언된 지역변수의 값을 변경하는 것은 불가능함) 문제에서 주어진 코드를 보면 add2(number)를 호출하고 number의 값인 15가 value에 전달이 되는데 add2 함수에서 value의 값을 17로 변경해도 number와 value는 서로 다른 메모리 공간에 존재하게 되며 number에 저장된 값은 그대로 남게 된다. 따라서 함수가 종료되면 변경된 value는 사라지고 number만 남아 출력이 되지 않는 것이다.

## 수정한 코드 설명
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
void add2(int* ptr);
```
- add2 함수 선언
```
int main(void)
```
- 메인함수 시작
```
int number;
```
- int형 변수 number 선언
```
printf("정수를 입력하세오: ");
```
- 사용자에게 정수를 입력하라는 안내 문구 출력
```
scanf("%d", &number);
```
- 사용자가 입력한 정수를 `number`에 저장
```
add2(&number);
```
- add2 함수 호출
```
printf("2만큼 증가한 값: %d\n", number);
```
- number의 값을 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료
```
void add2(int* ptr)
```
- add2 함수 선언
- `int* ptr`: int형 변수의 주소 저장
```
*ptr += 2;
```
- *ptr = *ptr + 2

--------------------------------
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
int add2(int value);
```
- add2 함수 미리 선언
```
int main(void)
```
- 메인함수 시작
```
int number;
```
- int형 변수 number 선언
```
printf("정수를 입력하시오: ");
```
- 사용자에게 정수를 입력하라는 안내 문구 출력
```
scanf("%d", &number);
```
- 사용자가 입력한 정수를 `number`에 저장
```
number = add2(number);
```
- `number`의 값을 `add2()`함수에 전달
```
printf("2만큼 증가한 값: %d\n",number);
```
- `number`에 저장된 값을 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료
```
int add2(int value)
```
- `int value`를 전달받고 int형 값을 반환
```
value += 2;
```
- value = value + 2
```
return value;
```
- `value`에 들어 있는 값을 함수를 호출한 곳으로 반환하고 add2 함수 종료

## 실행결과
<img width="387" height="115" alt="14-1-3" src="https://github.com/user-attachments/assets/99b893d5-9f46-4d8d-a4cd-085aedaa512e" />

------------------------------
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
void swap(int* px, int* py);
```
- swap 함수 미리 선언
```
int main(void)
```
- 메인함수 시작
```
int x, y, z;
```
- int형 변수 x, y, z 선언
```
printf("정수 x를 입력하시오: ");
```
- 사용자에게 정수 x를 입력하라는 안내 문구 출력
```
scanf("%d", &x);
```
- 사용자가 입력한 정수를 `x`에 저장
```
printf("정수 y를 입력하시오: ");
```
- 사용자에게 정수 y를 입력하라는 안내 문구 출력
```
scanf("%d", &y);
```
- 사용자가 입력한 정수를 `y`에 저장
```
printf("정수 z를 입력하시오: ");
```
- 사용자에게 정수 z를 입력하라는 안내 문구 출력
```
scanf("%d", &z);
```
- 사용자가 입력한 정수를 `z`에 저장
```
printf("swap함수 호출 전 x=%d, y=%d, z=%d\n", x, y, z);
```
- swap 함수를 호출하기 전의 값 출력
```
swap(&x, &y);
```
- x, y의 주소를 swap 함수에 전달
```
swap(&y, &z);
```
- y, z의 주소를 swap 함수에 전달
```
printf("swap함수 호출 후 x=%d, y=%d, z=%d", x, y, z);
```
- 두 번의 swap 함수 호출 후 x, y, z의 값 출력
```
void swap(int* px, int* py)
```
- int형 변수의 주소를 2개 받음
```
int temp;
```
- int형 변수 temp 선언
```
temp = *px;
```
- temp에 x값 저장
```
*px = *py;
```
- x에 y값 저장 
```
*py = temp;
```
- y에 temp 값 저장

## 실행결과
<img width="411" height="171" alt="14-1-4" src="https://github.com/user-attachments/assets/35ac6b7d-1c3d-40ed-990d-92999de1f002" />

## 메모리의 상태
<img width="1327" height="405" alt="14-1-4(설명)" src="https://github.com/user-attachments/assets/a65a59ba-8a9f-4dbe-af1b-bad475945302" />

--------------------------------
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
- 헤더파일 stdio.h를 포함해라
```
int SquareByValue(int num);
```
- SquareByValue 함수 미리 선언
```
void SqureByReference(int* ptr);
```
- SqureByReference 함수 미리 선언
```
int main(void)
```
- 메인함수 시작
```
int num;
```
- int형 변수 num 선언
```
int re;
```
- int형 변수 re 선언
```
printf("정수를 입력하시오: ");
```
- 사용자에게 정수를 입력하라는 안내 문구 출력
```
scanf("%d", &num);
```
- 사용자가 입력한 정수를 `num`에 저장
```
re = num;
```
- `num`의 현재 값을 `re`에 저장
```
printf("Call-by-value 기반: %d\n", SquareByValue(num));
```
- SquareByValue 함수에서 반환받은 값 출력
```
num = re;
```
- `num`의 현재 값을 `re`로 변경
```
SqureByReference(&num);
```
- num의 주소 전달
```
printf("Call-by-reference 기반: %d", num);
```
- num 값 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료
```
int SquareByValue(int num)
```
- `int num`을 입력받고 int형 값을 반환
```
return num * 100;
```
- 계산결과 반환 후 SquareByValue 함수 종료
```
void SqureByReference(int* ptr)
```
- int형 변수의 주소 입력 받음
```
*ptr *= 100;
```
- *ptr = *ptr * 100

## 실행결과
<img width="407" height="127" alt="14-1-5" src="https://github.com/user-attachments/assets/14bf09fc-de88-4939-aea1-800bfc90028d" />

## 2가지 방식의 차이 설명
Call-by-value 방식은 변수의 값을 전달하는 방식으로 다른 함수에서 선언된 지역변수의 값을 변경하는 불가능하며 `return`을 이용하여 결과가 전달된다. 반면에 Call-by-reference 방식은 변수의 주소를 전달하는 방식으로 지역변수의 값을 변경하는 것이 가능하며 포인터를 이용하여 직접 변경하여 전달된다. 따라서 해당 문제에서는 Call-by-reference 방식을 사용하는게 적합하다고 생각한다.
