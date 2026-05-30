#include <iostream>
#include <windows.h>
using namespace std;

int divide(int a, int b)
{
    if (b == 0)
        throw string("0으로 나눌 수 없음");
    return a / b;
}

int main()
{
    // 콘솔에서 UTF-8로 출력
    SetConsoleOutputCP(CP_UTF8);

    try
    {
        cout << divide(10, 2) << endl;
        cout << divide(5, 0) << endl;
    }
    catch (string &e)
    {
        cout << "문자열 예외: " << e << endl;
    }
    catch (...)
    {
        cout << "알 수 없는 예외 발생" << endl;
    }
    // ...은 외부 라이브러리 또는 exception을 상속받지 않은 예외
    // 또는 "1" string("213")과 같은 예외들을 받을 수 있다.
    return 0;
}