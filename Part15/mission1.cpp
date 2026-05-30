#include <iostream>
#include <memory>
using namespace std;

class Student
{
public:
    string name;
    Student(string n) : name(n)
    {
        cout << name << " 생성" << endl;
    }
    ~Student()
    {
        cout << name << " 소멸" << endl;
    }
};

int main()
{
    unique_ptr<Student> s1 = make_unique<Student>("Jisu");
    cout << s1->name << endl;
    return 0;
}