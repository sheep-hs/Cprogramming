# 실습과제 1
1. C언어에서 문자를 메모리에 저장하는 방식에 대하여 설명하라(아스키 코드 참고)

  ->

2. 널문자의 용도를 설명하라.

  ->

3. 메모리에 저장된 문자열의 끝을 찾는 방법을 설명하라.

  ->

4. 문자열의 길이를 구하는 알고리즘을 설명하라.

  ->

------------------------------------------------------------------
# 실습과제 2
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
```
- 
```
#pragma warning(disable:6031)
```
- 
```
#include<stdio.h>
```
- 
```
int main(void)
```
- 
```
int i;
```
- 
```
char str[100];
```
- 
```
printf("문자열을 입력하시오: ");
```
- 
```
scanf("%s", str);
```
- 
```
for (i = 0; str[i] != '\0'; i++)
{
  printf("%d번째 문자: %c\n", i + 1, str[i]);
}
```
- 
```
return 0;
```
- 

## 실행결과
<img width="396" height="321" alt="13-2-2" src="https://github.com/user-attachments/assets/395a77f8-dfa0-4c13-9b57-0597dc9eca5e" />

-------------------------------------------------------------------
# 실습과제 3
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
```
- 
```
#pragma warning(disable:6031)
```
- 
```
#include<stdio.h>
```
- 
```
int main(void)
```
- 
```
int i;
```
- 
```
char str[100];
```
- 
```
printf("문자열을 입력하시오: ");
```
- 
```
scanf("%s", str);
```
- 
```
for (i = 0; str[i] != '\0'; i++)
```
- 
```
  if (str[i] >= 'A' && str[i] <= 'Z')
    str[i] += 32;
```
- 
```
	else if (str[i] >= 'a' && str[i] <= 'z')
    str[i] -= 32;
```
- 
```
printf("변환 결과: %s", str);
```
- 
```
return 0;
```
- 

## 실행결과
<img width="396" height="102" alt="13-2-3" src="https://github.com/user-attachments/assets/927cbce8-9af0-49e0-8316-ece8a429f3a6" />

---------------------------------------------------------------------
# 실습과제4
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
```
- 
```
#pragma warning(disable:6031)
```
- 
```
#include<stdio.h>
```
- 
```
int main(void)
```
- 
```
char str1[100];
```
- 
```
char str2[100];
```
- 
```
printf("문자열을 입력하시오: ");
```
- 
```
scanf("%s", str1);
```
- 
```
printf("문자열을 입력하시오: ");
```
- 
```
scanf("%s", str2);
```
- 
```
if (str1[0] < str2[0])
  printf("사전에서 앞에 나오는 문자열: %s", str1);
```
- 
```
else if (str1[0] > str2[0])
  printf("사전에서 앞에 나오는 문자열: %s", str2);
```
- 
```
return 0;
```
- 

## 실행결과
<img width="430" height="127" alt="13-2-4" src="https://github.com/user-attachments/assets/bcc7104b-ab01-4b82-9d5a-8eb4d04142eb" />

---------------------------------------------------------------------
# 실습과제 5
## 작성한 코드 설명
```
#include<stdio.h>
```
- 
```
int main(void)
```
- 
```
char* fruits[] = { "apple","blueberry","orange","melon" };
```
- 
```
int i;
```
- 
```
int min = 0;
```
- 
```
for (i = 1; i < 4; i++)
```
- 
```
  if (fruits[i][0] < fruits[min][0])
    min = i;
```
- 
```
printf("사전에서 가장 앞에 나오는 문자열: %s", fruits[min]);
```
- 
```
return 0;
```
- 

## 실행결과
<img width="517" height="77" alt="13-2-5" src="https://github.com/user-attachments/assets/b9e27ec4-1ef7-40cf-80ce-fca0946f19fc" />
