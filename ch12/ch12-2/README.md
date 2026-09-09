# 실습과제 1
```
char ch = 'A';
int in = 10;
double db = 3.4;
```
| 수식 | 결과값 | 결과값의 자료형 |
| :--- | :--- | :--- |
| **&ch** | 100 | `char*` |
| **&in** | 101 | `int*` |
| **&db** | 105 | `double*` |
| ***&ch** | A | `char` |
| ***&in** | 10 | `int` |
| ***&db** | 3.4 | `double` |
----------------------------------
# 실습과제 2
## 문제에 주어진 코드
```
#include<stdio.h>
int main(void)
{
   int a = -100;
   char b = ‘A’;
   double c = 3.14;
   printf(“int형 변수 a의 값은:%d\n”, a);
   printf(“char형 변수 b의 값은:%c\n”, b)
   printf(“double형 변수 c의 값은:%lf\n”, c);
   return0;
}
```
## 실행 결과
<img width="396" height="132" alt="12-2-2" src="https://github.com/user-attachments/assets/9d944485-a172-4e0a-9679-d0e6c00af4c0" />

## 수정된 코드 설명
```
#include<stdio.h>
```
- 헤더파일 stdio.h를 포함해라
```
int main(void)
```
- 메인함수 시작
```
int a = -100;
```
- int형 변수 a를 선언하고 -100을 저장
```
char b = 'A';
```
- char형 변수 b를 선언하고 A를 저장
```
double c = 3.14;
```
- double형 변수 c를 선언하고 3.14를 저장
```
int* pta = &a;
```
-포인터 변수 pta를 선언하고 변수 a의 주소값을 저장
```
char* ptb = &b;
```
- 포인터 변수 ptb를 선언하고 변수 b의 주소값을 저장
```
double* ptc = &c;
```
- 포인터 변수 ptc를 선언하고 변수 c의 주소값 저장
```
printf("int형 변수 a의 값은: %d\n", *pta);
```
- 화면에 int형 변수 a의 값을 출력해라
```
printf("char형 변수 b의 값은: %c\n", *ptb);
```
- 화면에 char형 변수 b의 값을 출력해라
```
printf("double형 변수 c의 값은: %lf\n", *ptc);
```
- 화면에 double형 변수 c의 값을 출력해라
```
return 0;
```
- 0을 반환하고 메인함수 종료
-----------------------------------
# 실습과제 3
1. ①번 라인에서 강제형변환이 사용된 이유를 설명하라.

   -> `125`는 정수값으로 자료형이 `int`인데 `ptr`은 `int*`형 포인터 변수이므로 정수값인 `125`를 주소로 사용하기 위해서 `(int*)`를 사용하여 `int*`형 주소로 강제형변환을 한 것이다.
2. 아래 코드를 실행하면 오류가 발생하여 중단된다. 이유를 자세히 설명하라.

   -> `ptr`에는 임의로 저장된 `125`가 있는데 해당 주소는 할당받지 않은 유효하지 않은 메모리 주소이다. 그래서 `*ptr`을 이용하여 `125`번지에 메모리 값 `10`을 저장하려 하면 유효하지 않은 메모리 영역에 접근하기 때문에 오류가 발생하여 중단되는 것이다.

## 문제에 주어진 코드
```
#include<stdio.h>
int main(void)
{
   int* ptr= (int*)125; // ①
   *ptr= 10;
   printf("%d\n", *ptr);
   return0;
}
```
------------------------------------
# 실습과제 4
## 문제에 주어진 코드
```
#include<stdio.h>
int main(void)
{
   int a = 100, b=200;
   int sum;

   sum = a + b; //포인터를이용하여수정
   printf(“두정수의 합: %d\n”, sum); //포인터를이용하여수정
   return0;
}
```
## 실행결과
<img width="390" height="101" alt="12-2-4" src="https://github.com/user-attachments/assets/d871bfb4-60d7-4592-9289-e846235a7455" />

## 추가 또는 수정된 코드 설명
```
#include<stdio.h>
```
- 헤더파일 stdio.h를 포함해라
```
int main(void)
```
- 메인함수 시작
```
int a = 100, b = 200;
```
- int형 변수 a와 b를 선언하고 각각 100, 200을 저장
```
int sum;
```
- int형 변수 sum 선언
```
int* pta = &a;
```
- 포인터 변수 pta를 선언하고 변수 a의 주소값을 저장
```
int* ptb = &b;
```
- 포인터 변수 ptb를 선언하고 변수 b의 주소값을 저장
```
int* ptsum = &sum;
```
- 포인터 변수 ptsum을 선언하고 변수 sum의 주소값을 저장
```
*ptsum = *pta + *ptb;
```
- pta와 ptb가 가리키는 변수의 값을 더하여 ptsum이 가리키는 변수에 저장
  
  -> a와 b의 값을 더한 결과를 sum에 저장
```
printf("두 정수의 합: %d\n", *ptsum);
```
- ptsum이 가리키는 변수 출력

  ->a와 b의 합인 sum 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료
--------------------------------------
# 실습과제 5
## 문제
*문제 2번 변형

int형 변수 num1과 num2를 선언과 동시에 각각 20과 30으로 초기화 하고 포인터 변수 ptr1과 ptr2를 선언하여 각각 num1과 num2를 가리키게 하자. 그리고 이 상태에서 포인터 변수 ptr1과 ptr2를 이용해서 num1의 값을 30 증가시키고 num2의 값을 20 감소시키자. 이제 두 포인터 변수가 가리키는 대상을 서로 바꾸고 ptr1과 ptr2가 가리키는 변수에 저장된 값을 각각 출력하자.  

## 작성한 코드 설명
```
#include<stdio.h>
```
- 헤더파일 stdio.h를 포함해라
```
int main(void)
```
- 메인함수 시작
```
int num1 = 20, num2 = 30;
```
- int형 변수 num1과 num2를 선언하고 각각 20, 30을저장
```
int* ptr1 = &num1;
```
- 포인터 변수 ptr1를 선언하고 변수 num1의 주소값을 저장
```
int* ptr2 = &num2;
```
- 포인터 변수 ptr2를 선언하고 변수 num2의 주소값을 저장
```
int* temp;
```
- 포인터 변수 temp 선언
```
(*ptr1) += 30;
```
- *ptr1 = *ptr + 30;
```
(*ptr2) -= 20;
```
- *ptr2 = *ptr2 - 20;
```
temp = ptr1;
```
- ptr1에 저장된 주소값을 temp에 저장
```
ptr1 = ptr2;
```
- ptr2에 저장된 주소값을 ptr1에 저장
```
ptr2 = temp;
```
- temp에 저장해 두었던 원래의 ptr1의 주소값을 ptr2에 저장
```
printf("ptr1이 가리키는 값: %d", *ptr1);
```
- ptr1이 가리키는 값 출력
```
printf("ptr2이 가리키는 값: %d", *ptr2);
```
- ptr2가 가리키는 값 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료
## 실행결과
<img width="385" height="100" alt="12-2-5" src="https://github.com/user-attachments/assets/87b39e5e-f3c8-4bf9-b776-7cb749867550" />
