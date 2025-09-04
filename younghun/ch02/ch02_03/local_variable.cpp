#include <iostream>
using namespace std;

void print() {
    // function 내부의 local variable
    int value = 10;
    cout << "print function 내부에서의 local variable: " << value << endl;
}

int main() {
    // main function 내부의 local variable
    int value = 5;
    cout << "main function 내부에서의 local variable: " << value << endl;

    // call print function
    print();
    // print function call 이후에도 main의 value에 영향 x
    cout << "print 호출 후 main function 내부에서의 local value: " 
    << value << endl;

    return 0;
}

