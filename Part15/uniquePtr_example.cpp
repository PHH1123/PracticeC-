#include <iostream>
#include <memory>
using namespace std;

class Person
{
public:
    string name;
    Person(string n) : name(n)
    {
        cout << name << " 생성" << endl;
    }
    ~Person()
    {
        cout << name << " 소멸" << endl;
    }
};

int main()
{
    unique_ptr<Person> p1 = make_unique<Person>("Minho");
    p1->name = "Minho Kim";
    cout << p1->name << endl;

    unique_ptr<Person> p2 = move(p1);
    if (!p1)
        cout << "p1은 비어 있음" << endl;

    return 0;
}