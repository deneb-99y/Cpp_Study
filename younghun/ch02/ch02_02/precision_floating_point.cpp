#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main(){
    /////////////////////////////////
    // debug 알림창 내리기 위한 코드//
    cout << "helloworld, this is size and type check code" << endl;
    /////////////////////////////////

    float float_value = 9.87654321f;
    double double_value = 9.87654321987654321;
    long double long_double_value = 9.87654321987654321L;

    cout << "float: " << sizeof(float) << "bytes" << endl;
    cout << "float_value: " << 
        setprecision(numeric_limits<float>::digits10 + 1) << 
        double_value << endl << endl;

    cout << "double: " << sizeof(double) << "bytes" << endl;
    cout << "double_value: " <<
        setprecision(numeric_limits<double>::digits10 + 1) <<
        double_value << endl << endl;

    cout << "long double: " << sizeof(long double) << "bytes" << endl;
    cout << "long_double_value: " << 
    setprecision(numeric_limits<long double>::digits10 + 1) <<
    long_double_value << endl << endl;

    return 0;
}
