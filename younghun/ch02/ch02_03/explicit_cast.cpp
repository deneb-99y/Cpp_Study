// explicit cast(명시적 형변환): 개발자가 의도적으로 변경
#include <iostream>
// #include "std_lib_facilities.h" // stroustrup의 표준 라이브러리

using namespace std;

int main(){
    cout << "helloworld" << endl;
    int int_a = 10;
    int int_b = 5;

    int int_avg = (int_a + int_b) / 2;
    float float_avg_1 = (int_a + int_b) / 2;        // implicit cast: data loss
    float float_avg_2 = float(int_a + int_b) / 2;   // explicit cast
    float float_avg_3 = (float)(int_a + int_b) / 2; // C 방식

    cout << "int_avg: " << int_avg << endl;
    cout << "float_avg_1: " << float_avg_1 << endl;
    cout << "float_avg_2: " << float_avg_2 << endl;
    cout << "float_avg_3: " << float_avg_3 << endl;

    return 0;
}
