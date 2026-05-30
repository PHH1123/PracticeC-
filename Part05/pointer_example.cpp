#include <iostream>
using namespace std;

int main()
{
    int a = 42;
    int *p = &a;

    cout << "a의 값: " << a << endl;
    cout << "a의 주소: " << &a << endl;
    cout << "포인터 p의 값(=a의 주소): " << p << endl;
    cout << "포인터 p가 가리키는 값: " << *p << endl;

    return 0;
}