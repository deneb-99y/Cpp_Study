#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 2, c = 8;

    int result_1 = a + b * c; // 곱셈 먼저 연산(오른쪽으로 결합)
    cout << "result 1: " << result_1 << endl;

    int result_2 = (a + b) * c; // 괄호로 우선순위 변경
    cout << "result 2: " << result_2 << endl;

    a += b * c;
    cout << "result 3: " << a << endl;

    bool condition = true;
    int result_4 = (condition && a > b) ? a : b;
    cout << "result 4: " << result_4 << endl;

    int d = 7;
    d <<= 1;
    cout << "bitwise operator test: " << d << endl;

    int e = 6;
    e >>= 1;
    cout << "bitwise operator test: " << e << endl;
    
    int f = 6;
    f <<= 2;
    cout << "bitwise operator test: " << f << endl;


    return 0;
}
