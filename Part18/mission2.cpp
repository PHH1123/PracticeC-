#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};

    cout << "짝수만: ";
    for_each(nums.begin(), nums.end(), [](int x) {
        if (x % 2 == 0) cout << x << " ";
    });
    cout << endl;

    return 0;
}