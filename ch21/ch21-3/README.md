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
#include<string.h>
```
- 헤더파일 string.h를 포함해라
```
int main(void)
```
- 메인함수 시작
```
char str1[200] = "";
```
- char형 배열 str1을 선언하고 빈 문자열로 초기화
```
char str2[50];
```
- char형 배열 str2를 선언
```
while (1)
{
	fputs("문자열 입력: ", stdout);
	fgets(str2, sizeof(str2), stdin);
	str2[strcspn(str2, "\n")] = '\0';
	if (strcmp(str2, "quit") == 0)
		break;
		if (strlen(str1) > 0)
	{
		strcat(str1, " ");
	}
}
```
- `while (1)`: 조건이 항상 참이면 무한 반복
- `str2[strcspn(str2, "\n")] = '\0';`: `str2`에서 줄바꿈 문자가 있던 자리를 널문자로 변경
- `if (strcmp(str2, "quit") == 0)`: `str2`에 저장된 문자열이 "quit"라면 `break`
- `if (strlen(str1) > 0)`: 이미 저장된 문자가 있다면
- `strcat(str1, " ");`: 기존 문자열 `str1`의 뒤에 공백 한 칸을 추가
```
strcat(str1, str2);
```
- `str2`에 저장된 문자열을 `str1`의 뒤에 이어 붙임
```
printf("입력된 문자열: %s\n", str1);
```
- `str1`에 저장된 문자열을 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료
## 실행결과
<img width="406" height="237" alt="21-3-1" src="https://github.com/user-attachments/assets/1114eecf-e037-486f-84a5-39a6db55ef8e" />

-----------------------
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
#include<string.h>
```
- 헤더파일 string.h를 포함해라
```
void RemoveBSN(char str[]);
```
- RemoveBSN 함수 선언
```
int my_strlen(char str[]);
```
-my_strlen 함수 선언
```
int main(void)
```
- 메인함수 시작
```
char str[100];
```
- char형 배열 str 선언
```
printf("문자열 입력: ");
```
- 사용자에게 문자열을 입력하라는 안내 문구 출
```
fgets(str, sizeof(str), stdin);
```
- 키보드로 입력받은 문자열을 100바이트 내로 `str`에 저장 (*엔터키를 누르면 줄바꿈 문자도 문자열에 저장할 수 있음)
```
printf("길이: %d, 내용: %s\n", my_strlen(str), str);
```
- my_strlen 함수 호출 및 `str`과 함께 출력
```
RemoveBSN(str);
```
- RemoveBSN 함수 호출
```
printf("길이: %d, 내용: %s\n", my_strlen(str), str);
```
- my_strlen 함수 호출 및 `str`과 함께 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료
```
void RemoveBSN(char str[])
```
- RemoveBSN 함수 정의
```
int len = strlen(str);
```
- int형 변수 len을 선언하고 라이브러리 함수를 사용하여 문자열의 길이를 계산하여 저장
```
str[len - 1] = '\0';
```
- `str[len - 1]`에 저장되어 있는 줄바꿈 문자를 널문자로 변경
```
int my_strlen(char str[])
```
- my_strlen 함수 정의
```
int i = 0;
```
- int형 변수 i를 선언하고 0으로 초기화
```
while (str[i] != '\0')
{
	i++;
}
```
- `while (str[i] != '\0')`: 문자열의 끝을 나타내는 널문자를 만날때까지 반복하며 `i`를 1만큼 증가
```
return i;
```
- `i`를 반환
## 실행결과
<img width="400" height="165" alt="21-3-2" src="https://github.com/user-attachments/assets/a1d0ba37-ded8-41e3-a5a5-ed1e0f58f4e2" />

-------------------------
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
#include<string.h>
```
- 헤더파일 string.h를 포함해라
```
void my_strcpy(char dest[], char src[]);
```
- my_strcpy 함수 선언
```
int main(void)
```
- 메인함수 시작
```
char str1[20] = "1234567890";
```
- char형 배열 `str1`을 선언하고 "1234567890"을 저장
```
char str2[20];
```
- char형 배열 `str2`를 선언
```
my_strcpy(str2, str1);
```
- my_strcpy 함수 호출
```
puts(str2);
```
- `str2`출력 (*출력이 끝나면 자동으로 줄바꿈을 함)
```
return 0;
````
- 0을 반환하고 메인함수 종료
```
void my_strcpy(char dest[], char src[])
```
- my_strcpy 함수 정의
```
int i = 0;
```
- int형 변수 i를 선언하고 0으로 초기화
```
while (src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}
```
- `while (src[i] != '\0')`: `src`에서 널문자를 만날 때까지 반목하며 'src`의 i번째 문자를 `dest` i번쨰 문자에
저장 후 `i`를 1만큼 증가
```
dest[i] = '\0';
```
- 저장받은 문자가 널문자가 되면 종료
## 실행결과
<img width="407" height="95" alt="21-3-3" src="https://github.com/user-attachments/assets/794dfc07-ebd1-4435-84de-a98e27419eb0" />

---------------------
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
#include<string.h>
```
- 헤더파일 string.h를 포함해라
```
void my_strcat(char dest[], char src[]);
```
- my_strcat 함수 선언
```
int main(void)
```
- 메인함수 시작
```
char str1[20] = "First~";
```
- char형 배열 `str1`을 선언하고 "First~"를 저장
```
char str2[20] = "Second";
```
- char형 배열 `str2`를 선언하고 "Second"를 저장
```
my_strcat(str1, str2);
```
- my_strcat 함수 호출
```
puts(str1);
```
- `str1`출력 (*출력이 끝나면 자동으로 줄바꿈을 함)
```
return 0;
```
- 0을 반환하고 메인함수 종료
```
void my_strcat(char dest[], char src[])
```
- my_strcat 함수 정의
```
int i = 0, j = 0;
```
- int형 변수 i와 j를 선언하고 0으로 초기화
```
while (dest[i] != '\0')
{
	i++;
}
```
- `while (dest[i] != '\0')`: 널문자를 만날때까지 `i`를 1만큼 증가시킴
```
while (src[j] != '\0')
{
	dest[i] = src[j];
	i++;
	j++;
}
```
- `while (src[j] != '\0')`: 널문자를 만나기 전까지 `src`의 문자를 `dest`에 저장하고 `i`와 `j`는 1만큼 증가
```
dest[i] = '\0';
```
- 저장받은 문자가 널문자가 되면 종료
## 실행결과
<img width="400" height="97" alt="21-3-4" src="https://github.com/user-attachments/assets/95933414-918e-43e2-a518-1f86ca48f382" />

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
#include<string.h>
```
- 헤더파일 string.h를 포함해라
```
int main(void)
```
- 메인함수 시작
```
char str[5][100];
```
- char형 2차원 배열 str 선언
```
int min, max, i;
```
- int형 min, max, i 선언
```
min = max = 0;
```
- min과 max를 0으로 초기화
```
for (i = 0; i < 5; i++)
{
	printf("문자열 입력: ");
	scanf("%s", str[i]);
}
```
- 문자열 5개를 입력받아 `str`에 저장
```
for (i = 0; i < 5; i++)
{
	if (strcmp(str[i], str[min]) < 0)
		min = i;
	if (strcmp(str[i], str[max]) > 0)
		max = i;
}
```
- `if (strcmp(str[i], str[min]) < 0)`: 현재 문자열 `str[i]`이 기존에 가장 앞에 있다고 생각한 문자열 `str[min]`보다 앞에 있다면 `min`을 현재 인덱스 `i`로 변경
- `if (strcmp(str[i], str[max]) > 0)`: 현재 문자열 `str[i]`이 기존에 가장 뒤에 있다고 생각한 문자열 `str[max]`보다 뒤에 있다면 `max`을 현재 인덱스 `i`로 변경
```
printf("제일앞: %s\n", str[min]);
```
- `str[min]`에 저장된 문자열 출력
```
printf("제일뒤: %s\n", str[max]);
```
- `str[max]`에 저장된 문자열 출력
```
return 0;
```
- 0을 반환하고 메인함수 종료
## 실행결과
<img width="402" height="236" alt="21-3-5" src="https://github.com/user-attachments/assets/b51dfc88-9803-4c95-842a-2b57329e4743" />
