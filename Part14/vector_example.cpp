#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    v.push_back(5);

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}