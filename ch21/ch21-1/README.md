# 실습과제1
1. 스트림과 버퍼의 역할을 각각 설명하시오.
- 스트림의 역할: 프로그램과 입출력장치 사이의 데이터의 이동 경로
- 버퍼의 역할: 입출력장치와 프로그램 사이에 존재하며(스트림 내부에 존재)데이터를 임시로 저장하는 메모리 공간
2. 버퍼를 사용하여 얻는 장점과 단점을 모두 설명하시오.
- 장점: 데이터를 한번에 전송하며 처리시간을 단축하고 데이터 손실을 방지하는 등 효율적이다.
- 단점: scanf 함수를 사용했을 때 문제가 발생하는데 엔터키로 인해 '\n'이 남아있게 된다.
3. 입력 버퍼에 데이터가 이미 존재할 때 scanf 함수를 호출한다면 어떤일이 발생하는가?
- 문자열에 공백이 포함되면 공백 이전까지만 저장하기 때문에 사용자가 다음 scanf 함수를 호출하게 되면 원치 않는 값을 얻게 된다.
4. 운영체제가 어떤 경우에 출력 버퍼의 데이터를 모니터로 출력하는가?
- 해당 버퍼가 가득차거나 문장 입력이 완료될 때
5. scanf 함수와 printf 함수 실행시 함수와 운영체제의 역할분담에 대하여 설명하라.
- scanf 함수는 입력 버퍼에서 데이터를 읽어오고 키보드에서 입력 버퍼로 전송하는 역할은 운영체제의 역할이다.
- printf 함수는 출력 버퍼에 데이터를 출력하고 출력 버퍼에서 모니터로 전송하는 역할은 운영체제의 역할이다.

---------------------
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
char a;
```
- char형 변수 a 선언
```
while (1)
{
  printf("문자입력: ");
  scanf(" %c", &a);
  if (a == 'q' || a == 'Q')
    break;
  else
    printf("입력된 문자는 %c\n", a);
}
```
- `while (1)`: 항상 참이면 무한 반복
- `scanf(" %c", &a);`: `" %c"`에서 `%c` 앞의 공백은 입력 버퍼에 남아있는 공백, 탭, 줄바꿈 문자 등을 건너뛰게 함
- `if (a == 'q' || a == 'Q')`: 입력한 문자가 q나 Q인지 확인 후 맞다면 `break` 아니라면 문자열 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료
## 실행결과
<img width="396" height="237" alt="21-1-2" src="https://github.com/user-attachments/assets/1d5a2b4d-921c-46a2-a41b-8c02370d3beb" />

---------------------------
# 실습과제 3
## 문제에 주어진 코드의 실행결과 설명
<img width="442" height="142" alt="21-1-3(ago)" src="https://github.com/user-attachments/assets/39a950fa-4800-4967-9760-a9c55acaa2be" />

- 사용자가 문자를 입력하고 엔터를 누르면 입력 버퍼에는 사용자가 입력한 문자와 `'\n'`이 저장되게 된다. 그래서 버퍼에는 여전히 `'\n'`이 남아있게 된다. 다시 scanf 함수를 호출하게 되면 사용자가 새 문자를 입력하지 않아도 scanf 함수가 그 문자를 읽어버리면서 실행결과와 같이 보여지게 되는 것이다.

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
int main(void)
```
- 메인함수 시작
```
int x;
```
- int형 변수 x 선언
```
char name[10];
```
- char형 배열 name 선언
```
char blood_type;
```
- char형 변수 blood_type 선언
```
printf("이름을 입력하시오: ");
```
- 사용자에게 이름을 입력하라는 안내 문구 출력
```
scanf(" %s", name);
```
- `" %s"`에서 `%s`앞의 공백은 입력 버퍼에 남아있는 공백, 탭, 줄바꿈 문자 등을 건너뛰게 함
```
printf("혈액형을 입력하시오: ");
```
- 사용자에게 혈액형을 입력하라는 안내 문구 출력
```
scanf(" %c", &blood_type);
```
- `" %c"`에서 `%c`앞의 공백은 입력 버퍼에 남아있는 공백, 탭, 줄바꿈 문자 등을 건너뛰게 함
```
printf("이름: %s\n", name);
```
- 저장된 문자열 출력
```
printf("혈액형: %c\n", blood_type);
```
- 저장된 문자열 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료
# 설명

## 실행결과
<img width="400" height="167" alt="21-1-3" src="https://github.com/user-attachments/assets/0241c137-172e-4767-a7b6-311802a1b47d" />

-----------------
# 실습과제 4
## 주어진 코드와 설명
```
#include<stdio.h>
int main(void)
{
	char ch;
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("문자입력:");
		scanf("%c", &ch);
		printf("문자: %c\n", ch);
	}
	return 0;
}
```
-
## 실행결과
<img width="401" height="207" alt="21-1-4" src="https://github.com/user-attachments/assets/0dd07f08-e926-4c13-b542-ee6c77b72e02" />

## 실행결과 설명
사용자가 문자를 입력하고 엔터를 누르면 입력 버퍼에는 사용자가 입력한 문자와 `'\n'`이 저장되게 된다. 그래서 scnaf 함수에 있는 `%c`는 맨 앞에 있는 a만 저장하게 되지만 버퍼에는 여전히 `'\n'`이 남아있게 된다. 다시 반복문이 시작이 되면 사용자가 새 문자를 입력하지 않아도 scanf 함수가 그 문자를 읽어버리면서 실행결과와 같이 보여지게 되는 것이다.

------------------------
# 실습과제 5
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
int main(void)
```
- 메인함수 시작
```
char str[20];
```
- char형 배열 str 선언
```
int i;
```
- int형 변수 선언
```
printf("문자열을 입력하시오: ");
```
- 사용자에게 문자열을 입력하라는 안내 문구 출력
```
for (i = 0; i < 19; i++)
{
  scanf("%c", &str[i]);
  if (str[i] == '\n')
    break;
}
```
- `scanf("%c", &str[i]);`: 문자 하나를 입력받아 배열의 i번째 칸에 저장
- `if (str[i] == '\n')`: 만약에 엔터키가 눌려 줄바꿈 문자가 확인 되었을때 `break`
```
str[i] = '\0';
```
- 엔터키가 저장된 위치에 널문자를 덮어씀
```
printf("문자열: %s\n", str);
```
- 저장된 문자열 출력
```
return 0;
```
- 0을 반환하고 메인함수 종
## 실행결과
<img width="435" height="117" alt="21-1-5" src="https://github.com/user-attachments/assets/b7d12846-9bb9-4585-ab79-2a498f718ba8" />
