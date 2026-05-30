#include <iostream>
#include <stdexcept>
#include <windows.h>
using namespace std;

int main()
{
    // 콘솔에서 UTF-8로 출력
    SetConsoleOutputCP(CP_UTF8);

    int arr[3] = {1, 2, 3};
    int idx;

    cout << "인덱스를 입력하세요 (0~2): ";
    cin >> idx;

    try
    {
        if (idx < 0 || idx >= 3)
        {
            throw out_of_range("인덱스 범위 초과!");
        }
        cout << "arr[" << idx << "] = " << arr[idx] << endl;
    }
    catch (out_of_range &e)
    {
        cout << "예외 발생: " << e.what() << endl;
    }

    return 0;
}