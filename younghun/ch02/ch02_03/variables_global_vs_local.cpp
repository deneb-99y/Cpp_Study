#include <iostream>

using namespace std;

int value = 1; // global variable

int main() {
    // cout << "helloworld" << endl;
    int value = -1;

    cout << value << endl;    // print local variable
    cout << ::value << endl;  // print global variable

    return 0;
}

// -1
// 1
