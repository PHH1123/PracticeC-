#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    // 콘솔에서 UTF-8로 출력
    SetConsoleOutputCP(CP_UTF8);

    int a, b;
    cout << "두 정수를 입력하세요: ";
    cin >> a >> b;

    try
    {
        if (b == 0)
            throw string("0으로 나눌 수 없습니다.");
        cout << "결과 = " << a / b << endl;
    }
    catch (string &e)
    {
        cout << "예외 발생: " << e << endl;
    }

    return 0;
}