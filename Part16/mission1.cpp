#include <iostream>
#include <thread>
using namespace std;

int sum1 = 0, sum2 = 0;

void partialSum(int *arr, int start, int end, int &result)
{
    result = 0;
    for (int i = start; i < end; i++)
    {
        result += arr[i];
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    thread t1(partialSum, arr, 0, 5, ref(sum1));
    thread t2(partialSum, arr, 5, 10, ref(sum2));

    t1.join();
    t2.join();

    cout << "총합 = " << sum1 + sum2 << endl;
    return 0;
}