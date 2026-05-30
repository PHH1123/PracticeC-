#include <iostream>
#include <stdexcept>
#include <windows.h>
using namespace std;

/*
C++에서는 객체를 받을 때 &(참조)로 받는 것이 좋다.
1. 자식 클래스를 받게 되는 경우에는 exception에는 정의되지 않은 부분이
    잘려나갈 수 있기 때문이다.
2. 불필요한 복사 방지
    값으로 받으면 객체를 한번 복사해서 받기 때문에
    참조로 받는 것이 좋다.

예외 말고도 자식 클래스 또는 부모 클래스 어떤 걸 받을 지 모르는 상황에서는
반드시 부모 클래스&(참조)로 받는 것이 좋아 보인다.
*/

class MyException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "사용자 정의 예외 발생";
    }
};

int main()
{
    // 콘솔에서 UTF-8로 출력
    SetConsoleOutputCP(CP_UTF8);

    try
    {
        throw MyException();
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}