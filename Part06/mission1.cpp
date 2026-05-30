#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cout << "문자열을 입력하세요: ";
    cin >> input;

    cout << "길이: " << input.length() << endl;
    cout << "확장: " << input + "!!!" << endl;

    return 0;
}