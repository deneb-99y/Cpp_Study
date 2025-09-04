# my pjt

## ch02

### size of 연산자 및 data type 확인(p.55)
- sizeof_data_types.cpp 파일 참고

vs에서는 잘 작동하지만, code에서는 출력값이 기대와는 약간 다르다.
왜 이런 차이? compiler차이로 인한 출력 변경    \
Visual Studio의 기본 컴파일러는 MSVC        \
현재 컴파일러는 MinGW-w64(GCC for Windows)      \
MSVC는 풀네임, GCC는 축약/맹글링 된 이름(Pv-void*, i-int 등) 제공

### 부동 소수점 (p.57)
- floating_point.cpp 파일 참고

부동 소수점을 표현할 숫자 뒤에는 자료형에 대한 문자를 적어준다.
```
float float_value = 9.87654321f;
double double_value = 9.87654321987654321;
long double long_double_value = 9.87654321987654321L;
```
double -> 기본형(아무것도 안붙으면 double)      \
float -> f or F                               \
long double -> l or L

l의 경우 숫자1과 혼동을 방지하기 위해 주로 대문자를 사용

**주의사항**: double a = 5.432f;과 같이 f를 붙인 후 double로 선언 시
정밀도 손실로 인하여 값이 달라질 수 있다(float: 32bit, double: 64bit).

### 논리 NOT(p.79)
- logic_NOT.cpp 파일 참고. 교재에는 없는 파일, 테스트 용으로 생성
(C++에서 0: false, 이외에는 true라는 문장 확인용으로 생성)

### bit연산(p.79)
- bitwise_NOT.cpp 파일 참고.

unsigned int(32bit)로 정의된 0x00000000        \
0x00000000 -> 16진수 0 의미             \
각 0은 0000을 의미(16진수)

즉, 반전 시 각 0은 1111로 되고, 16진수로 f가 됨

또한, 0x1은 unsigned int(32bit)에서 16진수 1인데, 32bit를 의미      \
각 자리는 4bit(16진수)이므로 unsigned int의 0x1 = 0000 0000 0000 0000 0000 0000 0000 0001

따라서 unsigned int로 정의된 0x1을 반전 시 fffffffe가 됨.

10진수는...?


## ch03
