# 실습과제 4 소스코드 설명
```
#include<stdio.h>
```
- 헤더파일 stdio.h를 포함해라
```
int main(void)
```
- 메인함수 시작
```
char a = 'A';
```
- char형 변수 a를 선언하고 'A'를 저장
```
int b = 36;
```
- int형 변수 b를 선언하고 36을 저장
```
double c = 3.141592;
```
- double형 변수 c를 선언하고 3.141592를 저장
```
printf("char형 변수 a의 주소: %u\n", &a);
```
- 화면에 char형 변수 a의 주소를 출력해라
```
printf("int형 변수 b의 주소: %u\n", &b);
```
- 화면에 int형 변수 b의 주소를 출력해라
```
printf("double형 변수 c의 주소: %u", &c);
```
- 화면에 double형 변수 c의 주소를 출력해라
```
return 0;
```
- 0을 반환하고 메인함수 종료
# 실행결과
<img width="427" height="130" alt="12-1-4" src="https://github.com/user-attachments/assets/d61e1d7d-cf56-43ff-9d8e-6118f81bc578" />
