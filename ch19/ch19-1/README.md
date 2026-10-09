# 실습과제 1
1. 함수 선언, 호출, 정의를 각각 설명하라
- 함수의 선언: main 함수 이후에 사용할 함수들을 미리 컴파일러에 정보를 제공하는 것
- 함수의 호출: 정의된 함수를 실행시키는 것
- 함수의 정의: 함수가 실제로 수행할 내용을 작성하는 것 

2. 함수의 자료형은?
- 함수의 자료형은 함수의 반환형과 매개변수의 자료형으로 정의된다.
  
  ->형식은 `반환형(매개변수의 자료형 1, 매개변수의 자료형 2, ...)`이다.

3. 함수명의 자료형은?
- 함수명의 자료형의 형식은 `반환형(*)(매개변수의 자료형 1, 매개변수의 자료형 2, ...)`이다.

4. void 포인터의 용도는?
- 하나의 포인터로 모든 종류의 주소를 저장

5. void 포인터에 간접참조 연산을 적용할 때 주의할 점은?
- 가리키는 자료형이 없으므로 포인터에 저장된 주소로부터 몇 바이트를 읽어야 하는지 알 수 없기 때문에 적용할 때에는 반드시 강제형변환을 하여 가리키는 자료형을 정의한 후 사용해야 한다.

6. 강제형변환과 자동현변환을 설명하시오
- 강제형변환: 강제 형 변환 연산자를 이용해서 강제로 형 변환을 명령하는 것
- 자동형변환: 컴파일러가 자동으로 형을 변환하는 것

--------------------------
# 실습과제 2
## 함수의 매개변수에 함수 포인터를 활용 예제
```
#include<stdio.h>
int add(int a, int b);
void executer(int(*fp)(int, int));
int main(void)
{
	executer(add);
	return 0;
}
void executer(int(*fp)(int, int))
{
	printf("%d\n", fp(10, 20));
}
int add(int a, int b)
{
	return a + b;
}
```
## 코드에 대한 설명
```
#include<stdio.h>
int add(int a, int b);
void executer(int(*fp)(int, int));
int main(void)
{
	executer(add);
	return 0;
}
void executer(int(*fp)(int, int))
{
	printf("%d\n", fp(10, 20));
}
int add(int a, int b)
{
	return a + b;
}
```
## 실행결과
<img width="386" height="102" alt="19-1-2(1)" src="https://github.com/user-attachments/assets/201956d6-de60-42b4-9b11-f7823d7c4c01" />

## 함수의 매개변수에 void 포인터를 활용 예제
```
#include<stdio.h>
void primenum(void* ptr);
int main(void)
{
	int num = 10;
	primenum(&num);
	return 0;
}
void primenum(void* ptr)
{
	printf("%d\n", *(int*)ptr);
}
```
## 코드에 대한 설명
```
#include<stdio.h>
void primenum(void* ptr);
int main(void)
{
	int num = 10;
	primenum(&num);
	return 0;
}
void primenum(void* ptr)
{
	printf("%d\n", *(int*)ptr);
}
```
## 실행결과
<img width="392" height="97" alt="19-1-2(2)" src="https://github.com/user-attachments/assets/aa44e123-702e-4b90-8daf-4f86b6c8beca" />

------------------
# 실습과제 3
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
void caculate(int(*op)(int, int));
int main(void)
{
	int choice;
	printf("연산을 선택하시오(1:덧셈, 2:뺄셈, 3:곱셈, 4:나눗셈): ");
	scanf("%d", &choice);
	if (choice == 1)
		caculate(add);
	else if (choice == 2)
		caculate(sub);
	else if (choice == 3)
		caculate(mul);
	else if (choice == 4)
		caculate(div);
	else
		printf("잘못된 입력입니다.");
	return 0;
}
void caculate(int(*op)(int, int))
{
	int a, b;
	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &a, &b);
	printf("결과값: %d", op(a, b));
}
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}
```
## 실행결과
<img width="667" height="127" alt="19-1-3" src="https://github.com/user-attachments/assets/d5ffc148-56f1-4bc4-8e5d-5669f41d1ed1" />

----------------
# 도전문제
## 도전 1번 실행결과
<img width="397" height="467" alt="19-1-도전문제 1" src="https://github.com/user-attachments/assets/b7acb6b2-91ea-4a44-b2d5-34c74909c634" />

## 도전 2번 실행결과
<img width="395" height="212" alt="19-1-도전문제 2" src="https://github.com/user-attachments/assets/d0b33bae-a144-4e76-9371-2b9e7ccc7bcb" />

## 도전 5번 실행결과
<img width="397" height="187" alt="19-1-도전문제 3" src="https://github.com/user-attachments/assets/bb0046fb-d4fe-4148-96e2-d5290ce6ffbe" />
