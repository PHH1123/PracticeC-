#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string n, int a)
    {
        name = n;
        age = a;
        cout << "객체 생성: " << name << endl;
    }

    ~Person()
    {
        cout << "객체 소멸: " << name << endl;
    }

    void printInfo()
    {
        cout << name << " (" << age << "세)" << endl;
    }
};

int main()
{
    Person p1("Minho", 20);
    p1.printInfo();

    return 0;
}