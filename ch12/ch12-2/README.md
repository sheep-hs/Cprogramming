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
- 
```
int main(void)
```
- 
```
int a = -100;
```
- 
```
char b = 'A';
```
- 
```
double c = 3.14;
```
- 
```
int* pta = &a;
```
-
```
char* ptb = &b;
```
- 
```
double* ptc = &c;
```
- 
```
printf("int형 변수 a의 값은: %d\n", *pta);
```
- 
```
printf("char형 변수 b의 값은: %c\n", *ptb);
```
- 
```
printf("double형 변수 c의 값은: %lf\n", *ptc);
```
- 
```
return 0;
```
- 
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
- 
```
int main(void)
```
- 
```
int a = 100, b = 200;
```
- 
```
int sum;
```
- 
```
int* pta = &a;
```
- 
```
int* ptb = &b;
```
- 
```
int* ptsum = &sum;
```
- 
```
*ptsum = *pta + *ptb;
```
- 
```
printf("두 정수의 합: %d\n", *ptsum);
```
- 
```
return 0;
```
- 
--------------------------------------
# 실습과제 5
## 문제
*문제 2번 변형

int형 변수 num1과 num2를 선언과 동시에 각각 20과 30으로 초기화 하고 포인터 변수 ptr1과 ptr2를 선언하여 각각 num1과 num2를 가리키게 하자. 그리고 이 상태에서 포인터 변수 ptr1과 ptr2를 이용해서 num1의 값을 30 증가시키고 num2의 값을 20 감소시키자. 이제 두 포인터 변수가 가리키는 대상을 서로 바꾸고 ptr1과 ptr2가 가리키는 변수에 저장된 값을 각각 출력하자.  

## 작성한 코드 설명

## 실행결과
