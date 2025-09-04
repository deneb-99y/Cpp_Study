// implicit cast(암시적 형변환): 컴파일러가 자동으로 변경
#include <iostream>

using namespace std;

int main(){
    float float_value = 1.5f; // 원 데이터는 float형 1.5

    double double_value = float_value; // numeric promotion(숫자 승격), 데이터 유실 x
    int int_value = float_value; // numeric conversion(숫자 변환), 데이터 유실 o

    cout << "float_value: " << float_value <<
    ", " << typeid(float_value).name() << endl;
    cout << "double_value: " << double_value <<
    ", " << typeid(double_value).name() << endl;
    cout << "int_value: " << int_value << 
    ", " << typeid(int_value).name() << endl;

    return 0;
}
