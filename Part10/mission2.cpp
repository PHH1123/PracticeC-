#include <iostream>
#include <string>
using namespace std;

class MyString
{
private:
    string str;

public:
    MyString(string s) : str(s) {}

    MyString operator+(const MyString &other)
    {
        return MyString(str + other.str);
    }

    void print()
    {
        cout << str << endl;
    }
};

int main()
{
    MyString s1("Hello "), s2("World!");
    MyString s3 = s1 + s2;
    s3.print();
    return 0;
}