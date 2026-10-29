# 실습과제 1
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[200] = "";
	char str2[50];
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
		strcat(str1, str2);
		printf("입력된 문자열: %s\n", str1);
	}
	return 0;
}
```
## 실행결과
<img width="406" height="237" alt="21-3-1" src="https://github.com/user-attachments/assets/1114eecf-e037-486f-84a5-39a6db55ef8e" />

-----------------------
# 실습과제 2
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
void RemoveBSN(char str[]);
int my_strlen(char str[]);
int main(void)
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s\n", my_strlen(str), str);
	RemoveBSN(str);
	printf("길이: %d, 내용: %s\n", my_strlen(str), str);
	return 0;
}
void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = '\0';
}
int my_strlen(char str[])
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}
```
## 실행결과
<img width="400" height="165" alt="21-3-2" src="https://github.com/user-attachments/assets/a1d0ba37-ded8-41e3-a5a5-ed1e0f58f4e2" />

-------------------------
# 실습과제 3
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
void my_strcpy(char dest[], char src[]);
int main(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	my_strcpy(str2, str1);
	puts(str2);
	return 0;
}
void my_strcpy(char dest[], char src[])
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
```
## 실행결과
<img width="407" height="95" alt="21-3-3" src="https://github.com/user-attachments/assets/794dfc07-ebd1-4435-84de-a98e27419eb0" />

---------------------
# 실습과제 4
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
void my_strcat(char dest[], char src[]);
int main(void)
{
	char str1[20] = "First~";
	char str2[20] = "Second";
	my_strcat(str1, str2);
	puts(str1);
	return 0;
}
void my_strcat(char dest[], char src[])
{
	int i = 0, j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}
```
## 실행결과
<img width="400" height="97" alt="21-3-4" src="https://github.com/user-attachments/assets/95933414-918e-43e2-a518-1f86ca48f382" />

--------------------------------
# 실습과제 5
## 작성한 코드 설명
```
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[5][100];
	int min, max, i;
	min = max = 0;
	for (i = 0; i < 5; i++)
	{
		printf("문자열 입력: ");
		scanf("%s", str[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (strcmp(str[i], str[min]) < 0)
			min = i;
		if (strcmp(str[i], str[max]) > 0)
			max = i;
	}
	printf("제일앞: %s\n", str[min]);
	printf("제일뒤: %s\n", str[max]);
	return 0;
}
```
## 실행결과
<img width="402" height="236" alt="21-3-5" src="https://github.com/user-attachments/assets/b51dfc88-9803-4c95-842a-2b57329e4743" />
