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
intmain(void)
{
inta = -100;
charb = ‘A’;
doublec = 3.14;
printf(“int형변수a의값은:%d\n”, a);
printf(“char형변수b의값은:%c\n”, b)
printf(“double형변수c의값은:%lf\n”, c);
return0;
}
```
## 실행 결과
<img width="396" height="132" alt="12-2-2" src="https://github.com/user-attachments/assets/9d944485-a172-4e0a-9679-d0e6c00af4c0" />

## 수정된 코드 설명

-----------------------------------
# 실습과제 3
1. 1번 라인에서 강제형변환이 사용된 이유를 설명하라.
   ->
2. 아래 코드를 실핼하면 오류가 발생하여 중단된다. 이유를 자세히 설명하라.
   ->

## 문제에 주어진 코드
```
#include<stdio.h>
intmain(void)
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
intmain(void)
{
inta = 100, b=200;
intsum;
sum=a+b; //포인터를이용하여수정
printf(“두정수의합: %d\n”, sum); //포인터를이용하여수정
return0;
}
```
## 실행결과

## 추가 또는 수정된 코드 설명

--------------------------------------
# 실습과제 5
## 문제

## 작성한 코드 설명

## 실행결과
