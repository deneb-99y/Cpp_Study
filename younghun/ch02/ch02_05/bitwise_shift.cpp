#include <iostream>
#include <bitset>

using namespace std;

int main(){
    int a = 13;
    int b = a >> 1;
    int c = a << 1;

    // error case
    // warning C4293: '>>': 시프트 횟수가 음수이거나 너무 큽니다. 정의되지 않은 동작입니다.
    // int d = a >> -1;

    // warning C4293: '<<': 시프트 횟수가 음수이거나 너무 큽니다. 정의되지 않은 동작입니다.
    // int e = a << 32;

    cout << "a = " << bitset<8>(a) << " : " << a << endl;
    cout << "b = " << bitset<8>(b) << " : " << b << endl;
    cout << "c = " << bitset<8>(c) << " : " << c << endl;
    // cout << "d = " << bitset<8>(d) << " : " << d << endl;
    // cout << "e = " << bitset<8>(e) << " : " << e << endl;

    return 0;
}

// *중요* 산술 시프트 연산.
// -의 경우(signed 자료형) 최상위(맨 왼쪽) bit는 부호비트.
// >> 연산시 부호비트는 원래 부호비트로 채움
// ex) 10111을 >>시 11011, 00111을 >>시 00011

