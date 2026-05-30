#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    // 콘솔에서 UTF-8로 출력
    SetConsoleOutputCP(CP_UTF8);

    try
    {
        int a = 10, b = 0;
        if (b == 0)
        {
            throw runtime_error("0으로 나눌 수 없습니다.");
        }
        cout << a / b << endl;
    }
    catch (exception &e)
    {
        cout << "예외 발생: " << e.what() << endl;
    }
    return 0;
}