#include <iostream>
using namespace std;

template <typename T>
class Box
{
private:
    T value;

public:
    Box(T v) : value(v) {}
    void print()
    {
        cout << value << endl;
    }
};

int main()
{
    Box<int> intBox(123);
    Box<string> strBox("Hello Templates");

    intBox.print();
    strBox.print();

    return 0;
}