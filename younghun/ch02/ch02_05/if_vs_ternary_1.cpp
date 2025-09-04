#include <iostream>
using namespace std;

// if문과 ternary operator expression(삼항 연산자 표현식) 비교
// if문
int main(){
    int a = 7;
    int b = 5;
    int result;

    if (a > b)
        result = a;
    else
        result = b;

    cout << "result = " << result << endl;

    return 0;
}
