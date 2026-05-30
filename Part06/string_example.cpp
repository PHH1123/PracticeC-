#include <iostream>
#include <string>
using namespace std;

int main()
{
    char cstr[6] = "Hello";
    string s = "World";

    cout << cstr << endl;
    cout << s << endl;

    string greeting = string(cstr) + " " + s;
    cout << greeting << endl;

    return 0;
}