#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "두 정수를 입력하세요: ";
    cin >> a >> b;

    cout << "합: " << a + b << endl;
    cout << "차: " << a - b << endl;
    cout << "곱: " << a * b << endl;
    cout << "몫: " << a / b << endl;

    return 0;
}