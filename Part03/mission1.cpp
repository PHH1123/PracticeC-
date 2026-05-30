#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "구구단 단수를 입력하세요: ";
    cin >> n;

    for (int i = 1; i <= 9; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}