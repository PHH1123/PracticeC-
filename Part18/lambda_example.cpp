#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {5, 2, 8, 1, 3};

    sort(nums.begin(), nums.end(), [](int a, int b)
         { return a < b; });

    for (auto n : nums)
        cout << n << " ";
    cout << endl;

    return 0;
}