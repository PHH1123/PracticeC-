#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    int price;

public:
    Book(string t, int p)
    {
        title = t;
        price = p;
        cout << "책 생성: " << title << endl;
    }

    ~Book()
    {
        cout << "책 소멸: " << title << endl;
    }

    void printInfo()
    {
        cout << title << " - " << price << "원" << endl;
    }
};

int main()
{
    Book b1("C++ Primer", 30000);
    b1.printInfo();

    return 0;
}