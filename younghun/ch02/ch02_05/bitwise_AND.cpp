#include <iostream>
#include <bitset>

using namespace std;

int main(){
    int a = 13;
    int b = 27;
    int c = a & b; // bit AND operation

    // bitset<32>로 해야 int에 대한 제대로된 정보를 알 수 있음
    // int = 4byte = 32bit
    cout << "a = " << bitset<8>(a) << " : " << a << endl;
    cout << "b = " << bitset<8>(b) << " : " << b << endl;
    cout << "c = " << bitset<8>(c) << " : " << c << endl;

    return 0;
}
