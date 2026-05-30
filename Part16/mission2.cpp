#include <iostream>
#include <future>
using namespace std;

long long factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    future<long long> result = async(factorial, 10);
    cout << "10! = " << result.get() << endl;
    return 0;
}