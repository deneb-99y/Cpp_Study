#include <iostream>
using namespace std;

int main()
{
    int a = 7;
    int *ptr_a = &a;

    cout << "a(before): " << a << endl;
    cout << "ptr's address: " << ptr_a << endl;
    cout << "(ptr + 1): " << ptr_a + 1 << endl;
    // ptr_a++, --도 사용가능(증감연산자)
    // cout << "++ptr: " << ++ptr_a << endl;

    // ptr_a 값 변경
    *ptr_a = 10;
    cout << "a(after): " << a << endl;
    cout << "ptr's address: " << ptr_a << endl;
    
    // 포인터 + 포인터: 오류(의미 없는 프로그램 지점 가리킴)
    // 포인터 - 포인터: 가능(사이에 몇 개의 데이터가 있는지 확인가능: 의미 o)
    int* ptr3 = (int*)1000;
	int* ptr4 = (int*)1012;

	int count;
	count = ptr4 - ptr3;
    cout << "ptr4와 ptr3 사이에 존재하는 데이터의 개수: " << count << std::endl;
    // 포인터 끼리의 뺄셈 연산은 데이터의 개수를 세는 기능을 수행
    // -> sizeof(int)로 안나눠도 됨
    // ptr4 - ptr3 = (1012 - 1000) / sizeof(int) 안해도 된다는 것

    // 포인터 끼리의 대입 가능(이중 포인터?)
    int b;
    int* ptr5 = &b;
    *ptr5 = 10;

    int* ptr6;
    ptr6 = ptr5;

    std::cout << "ptr5: " << ptr5 << std::endl;
    std::cout << "ptr5이 가리키는 값: " << *ptr5 << std::endl;
	std::cout << "ptr6: " << ptr6<< std::endl;
	std::cout << "ptr6이 가리키는 값: " << *ptr6<< std::endl;


    return 0;
}
