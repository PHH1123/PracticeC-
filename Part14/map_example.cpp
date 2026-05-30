#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> scores;
    scores["Minho"] = 95;
    scores["Jisu"] = 88;
    scores["Hana"] = 76;

    for (auto p : scores)
    {
        cout << p.first << " : " << p.second << endl;
    }
    return 0;
}