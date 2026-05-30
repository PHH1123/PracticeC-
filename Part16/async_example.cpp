#include <iostream>
#include <future>
using namespace std;

int computeSquare(int x)
{
    return x * x;
}

int main()
{
    future<int> result = async(computeSquare, 10);
    cout << "계산 결과: " << result.get() << endl;
    return 0;
}