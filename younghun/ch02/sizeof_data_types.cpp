#include <iostream>
#include <typeinfo> // type check
//#include "stdafx.h"
using namespace std;

int main(){
    /////////////////////////////////
    // debug 알림창 내리기 위한 코드//
    cout << "helloworld, this is size and type check code" << endl;
    /////////////////////////////////

    // size check code
    cout << "short: " << sizeof(short) << "bytes" << endl;
    cout << "unsigned short: " << sizeof(unsigned short) << "bytes" << endl;
    cout << "int: " << sizeof(int) << "bytes" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << "bytes" << endl;
    cout << "__int8: " << sizeof(__int8) << "bytes" << endl;
    cout << "__int16: " << sizeof(__int16) << "bytes" << endl;
    cout << "__int32: " << sizeof(__int32) << "bytes" << endl;
    cout << "__int64: " << sizeof(__int64) << "bytes" << endl;
    cout << "long: " << sizeof(long) << "bytes" << endl;
    cout << "unsigned long: " << sizeof(unsigned long) << "bytes" << endl;
    cout << "long long: " << sizeof(long long) << "bytes" << endl;
    cout << "unsigned long long: " << sizeof(unsigned long long) << "bytes" << endl;

    // type check code
    void* v;
    int i = 5;
    long l;
    double d;
    float f;

    // 제대로 작동 안함 왜지? vs에서는 잘 작동함
    cout << typeid(v).name() << endl; // void * __ptr64
    cout << typeid(i).name() << endl; // int
    cout << typeid(l).name() << endl; // long
    cout << typeid(d).name() << endl; // double
    cout << typeid(f).name() << endl; // float

    int a = 5;
    cout << "a: " << a << ' ' << typeid(a).name() << ' ' << sizeof(int) << "바이트" << endl;
    // a: 5 int 4바이트

    // 예시) long에 short를 넣는것과 같은 암묵적 형변환 확인 시 사용가능

    return 0;
}
