# 실습과제 1
1. 주소에 의한 호출을 사용해야 하는 3가지의 경우를 설명하라
- 다른 함수에서 선언된 지역변수의 값을 변경하고 싶은 경우
- 배열을 함수의 인자에 전달하는 경우 
- 함수의 리턴 값이 2개 이상인 경우
 
2. 최댓값을 구하는 알고리즘을 설명하라
- 첫 번째 원소를 최댓값으로 설정한 후 나머지 원소들을 하나씩 비교하며 현재 원소가 최댓값보다 크면 최댓값을 현재 원소로 변경한다. 모든 원소를 비교한 후 남아 있는 값이 최댓값이 되는 것이다.
 
3. const 선언을 사용하는 이유를 설명하시오. (교재 322~323페이지를 참고할 것)
- 변수 선언 시 앞에 `const`를 붙이면 변수를 상수처럼 만들어 변수의 값을 바꿀 수 없게 한다. 해당 선언을 사용하게 되면 값이 변경되는 것을 막아주고 많이 사용하면 할수록 코드의 안전성이 높아진다.

# 실습과제 2
## 실행결과
<img width="397" height="220" alt="14-2-2" src="https://github.com/user-attachments/assets/d0f5e04d-f8ec-4ea0-b524-c0de5039d4b7" />

# 실습과제 3
## 실행결과
<img width="425" height="292" alt="14-2-3" src="https://github.com/user-attachments/assets/89ccaa6b-80e6-4611-8d67-d5d08bdaa396" />

# 실습과제 4
## 실행결과
<img width="397" height="125" alt="14-2-4" src="https://github.com/user-attachments/assets/f0d6598e-27a4-43a3-97ae-0490870f49a8" />

# 실습과제 5
## 문제 2번
- 매개변수 `ptr`에 `const` 선언이 되어있다. 이는 함수 ShowData 내에서 `ptr`을 통해 `ptr`이 가리키는 변수에 저장된 값을 변경시키지 않는다. `int*rptr=ptr;`에서 `const`가 선언되지 않은 포인터 변수에 `ptr`에 저장되어 있는 값을 대입하고 있다. 그래서 해당 코드가 있는 열에서 경고가 발생되는 것이다.


# 도전과제
## 도전 1번 실행결과
<img width="385" height="370" alt="14-2-도전문제 1" src="https://github.com/user-attachments/assets/9b7b10cb-d1e6-4586-a841-463d687b31a3" />

## 도전 2번 실행결과
<img width="387" height="97" alt="14-2-도전문제 2" src="https://github.com/user-attachments/assets/6b1b0ca7-7bc7-4b76-b4e8-f8ed1cd143d1" />

## 도전 4번 실행결과
<img width="407" height="102" alt="14-2-도전문제 4" src="https://github.com/user-attachments/assets/6434d36d-0902-41d8-99de-c27e82cabd11" />
