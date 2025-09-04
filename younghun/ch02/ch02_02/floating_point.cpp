#include <iostream>
using namespace std;

int main(){
    /////////////////////////////////
    // debug 알림창 내리기 위한 코드//
    cout << "helloworld, this is size and type check code" << endl;
    /////////////////////////////////

    cout << typeid(9.876f).name() << endl; // float
    cout << typeid(9.876).name() << endl; // double
    
    // f를 붙이면 float, 안붙이면 기본적으로 double로 인식
    // l -> long double
    // double a = 23.45f // float -> double 변환
    // double a = 23.45 // 기본 double, 변환 x
    // 주의, float -> double 변환 시 정밀도 손실 발생
    // float: 32 bit, double: 64 bit
    // double쓸거면 f 사용 x. f 붙이면 처음부터 float로 쓰는거라 
    // double 쓰는 의미 x


    cout << 9.87654321f << endl;
    cout << 9.87654321 << endl;
    cout << 987654.321f << endl;
    cout << 9876543.21f << endl;
    cout << 0.00000987654321f << endl;
    cout << 0.00000987654321 << endl;
    cout << 0.00000000000987654321f << endl;

    return 0;
}