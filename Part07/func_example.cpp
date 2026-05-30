#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 5, y = 7;
    cout << "합: " << add(x, y) << endl;
    return 0;
}