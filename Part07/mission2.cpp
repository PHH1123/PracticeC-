#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "정수를 입력하세요: ";
    cin >> n;
    cout << n << "! = " << factorial(n) << endl;
    return 0;
}