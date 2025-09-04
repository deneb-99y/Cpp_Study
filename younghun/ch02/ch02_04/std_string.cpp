#include <iostream>
// #include <string> // iostream 헤더에 string도 포함

using namespace std;

int main(){
    string string_value("Hello");
    cout << string_value << endl;

    string_value = "World!";
    cout << string_value << endl;

    char value = 'A'; // char는 ''이용
    // string value1 = 'A'; // string은 ""이용해야함
    cout << value << "\n" << '\n';

    return 0;
}
