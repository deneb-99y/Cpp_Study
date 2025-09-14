#include <iostream>

using namespace std;

int main() {
  cout << "short : " << sizeof(short) << " bytes" << endl;                      // short: 2바이트
  cout << "unsigned short : " << sizeof(unsigned short) << " bytes" << endl;    //        2바이트
  cout << "int : " << sizeof(int) << " bytes" << endl;                          // int: 4바이트
  cout << "unsigned int : " << sizeof(unsigned int) << " bytes" << endl;        //      4바이트
  cout << "long : " << sizeof(long) << " bytes" << endl;                        // long: 4바이트
  cout << "unsigned long : " << sizeof(unsigned long) << " bytes" << endl;      //       4바이트
  cout << "long long : " << sizeof(long long) << " bytes" << endl;              // long long: 8바이트
  cout << "unsigned long long : " << sizeof(unsigned long long) << " bytes" << endl;    //    8바이트

  return 0;
}