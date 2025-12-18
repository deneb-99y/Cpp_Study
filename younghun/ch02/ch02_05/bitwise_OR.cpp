#include <iostream>
#include <bitset>
using namespace std;

int main(){
    int a = -13;
    int b = 27;
    int c = a | b;

    cout << "a = " << bitset<33>(a) << " : " << a << endl;
    cout << "b = " << bitset<33>(b) << " : " << b << endl;
    cout << "c = " << bitset<33>(c) << " : " << c << endl;

    return 0;
}
