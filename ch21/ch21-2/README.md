# 실습과제 1
1. 표준 입출력 스트림을 접근하는 방법을 설명하라.
- 문자, 문자열 전용 입출력 함수에서 주소를 이용하여 스트림에 접근
2. 공백을 포함한 문자열을 입력 받을 때 사용 가능한 함수는?
- gets 함수와 fgets 함수
3. gets 함수 사용시 가장 큰 문제점은 무엇인가?
- 입력되는 문자열의 길이가 배열 길이보다 클 경우 할당받지 않은 메모리를 참조하는 오류가 발생
4. fgets 함수 사용시 문제점은 무엇인가?
- 널문자를 포함하여 지정된 크기만큼 저장 -> 크기를 넘어가게 되면 나뉘어 저장하게 됨
5. 널문자('\0')와 널포인터(NULL)의 용도를 설명하시오.
- 널문자의 용도: 문자열의 끝을 가리킴
- 널포인터의 용도: 함수가 메모리 할당에 실패했을 때 반환
----------------------------
# 실습과제 2
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
void printText(const char* s)
{
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
}
int main(void)
{
	int ch;
	int n;
	while (1)
	{
		printText("문자입력: ");
		ch = getchar();
		if (ch == 'q' || ch == 'Q')
			break;
		if (ch == EOF)
			break;
		n = ch;
		while (n != '\n' && n != EOF)
    {
			n = getchar();
    }
		printText("입력된 문자는 ");
		putchar(ch);
		putchar('\n');
	}
	return 0;
}
```
## 실행결과
<img width="401" height="237" alt="21-2-2" src="https://github.com/user-attachments/assets/844b9133-3fab-4693-967b-2763838adf28" />

------------------------
# 실습과제 3
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char name[100], address[100], carnum[100];
	fputs("이름: ", stdout);
	fgets(name, sizeof(name), stdin);
	fputs("주소: ", stdout);
	fgets(address, sizeof(address), stdin);
	fputs("자동차번호: ", stdout);
	fgets(carnum, sizeof(carnum), stdin);
	puts("<결과출력>");
	fputs("이름: ", stdout);
	fputs(name, stdout);
	fputs("주소: ", stdout);
	fputs(address, stdout);
	fputs("자동차번호: ", stdout);
	fputs(carnum, stdout);
	return 0;
}
```
## 실행결과
<img width="400" height="228" alt="21-2-3" src="https://github.com/user-attachments/assets/077b7e7a-b619-4aee-8e55-7cab46cd963c" />

--------------------------------
# 실습과제 4
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char str[20];
	int i;
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\n')
		{
			str[i] = '\0';
			break;
		}
	}
	printf("%s", str);
	return 0;
}
```
## 실행결과
<img width="402" height="110" alt="21-2-4" src="https://github.com/user-attachments/assets/3ffc0cb5-d22a-4ef2-96c9-edeed9955adc" />

-------------------------
# 실습과제 5
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char str[100];
	int i;
	int count = 0;
	int space = 0;
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\n')
		{
			space = 0;
		}
		else if (space == 0)
		{
			count++;
			space = 1;
		}
	}
	printf("단어수: %d\n", count);
	return 0;
}
```
## 실행결과
<img width="397" height="125" alt="21-2-5" src="https://github.com/user-attachments/assets/7bdf84d1-40e3-4a9e-b45b-d61ef5cf3902" />
