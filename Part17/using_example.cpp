#include <iostream>
using namespace std;

namespace MySpace
{
    void hello()
    {
        cout << "Hello from MySpace" << endl;
    }
}

int main()
{
    using MySpace::hello; // 특정 함수만 불러오기
    hello();
    return 0;
}