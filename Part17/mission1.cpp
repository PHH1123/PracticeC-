#include <iostream>
using namespace std;

namespace Korean
{
    void hello()
    {
        cout << "안녕하세요!" << endl;
    }
}

namespace English
{
    void hello()
    {
        cout << "Hello!" << endl;
    }
}

int main()
{
    Korean::hello();
    English::hello();
    return 0;
}