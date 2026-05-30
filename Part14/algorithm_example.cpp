#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {5, 2, 8, 1, 3};

    sort(v.begin(), v.end());

    if (binary_search(v.begin(), v.end(), 3))
    {
        cout << "3을 찾았습니다!" << endl;
    }

    for (int x : v)
        cout << x << " ";
    cout << endl;
    return 0;
}