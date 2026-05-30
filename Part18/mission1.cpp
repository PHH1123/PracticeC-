#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;
    int n;
    cout << "정수 5개 입력: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        nums.push_back(n);
    }

    int sum = 0;
    for (auto x : nums)
        sum += x;

    cout << "합계 = " << sum << endl;
    return 0;
}