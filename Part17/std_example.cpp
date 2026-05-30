#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {5, 3, 8, 1, 4};
    sort(nums.begin(), nums.end());

    for (int n : nums)
    {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}