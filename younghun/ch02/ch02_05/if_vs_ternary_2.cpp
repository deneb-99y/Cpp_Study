# include <iostream>

using namespace std;

// if문과 ternary operator expression(삼항 연산자 표현식) 비교
// ternary
// 기본 구조 -> 조건식 ? 참일때 value : 거짓일때 value
int main(){
    int a = 7;
    int b = 5;
    int result;

    // result = a > b ? a : b;
    result = (a > b) ? a : b;

    cout << "result = " << result << endl;

    return 0;
}
