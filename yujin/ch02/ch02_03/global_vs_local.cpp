#include <iostream>

using namespace std;

int value = 1;   // 전역 변수

int main() {
  int value = -1;   // 지역 변수

  cout << value << endl;     // 지역 변수 출력(지역 범위 내에서는 지역 변수의 우선순위 더 높음)
  cout << ::value << endl;   // 전역 변수 출력(전역 변수 출력 위해서는 :: 접두사 필요)

  return 0;
}