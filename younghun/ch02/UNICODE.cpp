// 윈도우 콘솔 창 설정 변경 코드가 있어 window visual studio에서만 작동함
#include <iostream>
#include <io.h>
#include <fcntl.h>

using namespace std;

int main(){
    wchar_t message_korean[] = L"반갑다 세계야!";
    // 중국어, 일본어, 러시아어
    // wchar_t message_chinese[] = L"여기에 중국어로 helloworld!";

    cout << "Hello, World!" << endl;

    // 윈도우 콘솔 창 유니코드 출력 모드 설정
    _setmode(_fileno(stdout), _O_U16TEXT);

    wcout << message_korean << endl;
    // wcout << message_chinese << endl;

    return 0;

}
