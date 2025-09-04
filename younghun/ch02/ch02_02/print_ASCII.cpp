#include <iostream>
using namespace std;

int main(){
    cout << "아스키 코드 출력 [32 ~ 126]:\n";
    for (char i = 32; i <= 126; i++) // 32부터 126까지
    {
        // 아스키 코드 출력 시 공백 추가 + 16개마다 줄 바꾸기
        cout << i << ((i % 16 == 15) ? '\n' : ' ');
    }

    return 0;
}
