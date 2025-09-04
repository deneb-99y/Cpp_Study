#include <iostream>
// using namespace std;

int main(){
    int outer_variable = 10;
    {
        int inner_variable = 5;
        std::cout << "inner variable: " << inner_variable << std::endl;
        std::cout << "outer variable: " << outer_variable << std::endl;
    }

    int inner_variable = 100;

    std::cout << "inner variable: " << inner_variable << std::endl;

    return 0;
}