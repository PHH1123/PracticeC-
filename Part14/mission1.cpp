#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main()
{
    string text = "apple banana apple orange banana apple";
    map<string, int> freq;
    string word;
    stringstream ss(text);

    while (ss >> word)
    {
        freq[word]++;
    }

    for (auto p : freq)
    {
        cout << p.first << " : " << p.second << endl;
    }
    return 0;
}