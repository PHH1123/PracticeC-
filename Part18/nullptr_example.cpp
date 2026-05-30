#include <iostream>
using namespace std;

void print(int *p)
{
    if (p == nullptr)
    {
        cout << "널 포인터!" << endl;
    }
    else
    {
        cout << "값: " << *p << endl;
    }
}

int main()
{
    int *ptr = nullptr;
    print(ptr);

    int x = 42;
    ptr = &x;
    print(ptr);

    return 0;
}