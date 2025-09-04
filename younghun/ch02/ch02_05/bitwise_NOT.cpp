#include <iostream>
#include <bitset>

using namespace std;

int main(){
    // 양수만 쓰는 unsigned
    // unsigned int value = 000000000; // 0을 8진수(hex)로 표현한 값
    // unsigned int value = 0x0000000; // 0을 16진수(hex)로 표현한 값
    // unsigned long value = 0; // 0을 10진수(hex)로 표현한 값
    // unsigned int랑 같음!
    
    // 부호가 있는 signed value
    int value = 0; // 0을 10진수(hex)로 표현한 값
    // signed int value = 0; // 0을 10진수(hex)로 표현한 값, signed는 명시적
    // long value = 0; // 0을 10진수(hex)로 표현한 값
    
    // unsigned int는 32bit의 자료형. 그래서 0x0000으로 써도
    // 의미는 16진수의 0을 의미함. 그래서 0x0000의 반전도 ffffffff
    // 만약 0x1을 반전하면? 1을 반전하면 됨
    // 0000 0000 0000 0000 0000 0000 0000 0001을 반전하니까
    // 1111 1111 1111 1111 1111 1111 1111 1110 = fffffffe
    
    cout << "value: " << value << endl;
    cout << "oct value: " << oct << value << endl;
    cout << "hex value: " << hex << value << endl;


    value = ~value;
    
    // cout << "value: " << value << endl;
    cout << "value: " << dec << value << endl;
    cout << "bin value: " << std::bitset<32>(value) << endl;
    cout << "oct value: " << oct << value << endl;
    cout << "hex value: " << hex << value << endl;

    return 0;
}
