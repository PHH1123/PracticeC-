#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int salary;

public:
    Employee(string n, int s)
    {
        name = n;
        salary = s;
    }

    void showInfo()
    {
        cout << name << " - 급여: " << salary << endl;
    }
};

class Manager : public Employee
{
private:
    int teamSize;

public:
    Manager(string n, int s, int t) : Employee(n, s)
    {
        teamSize = t;
    }

    void showManagerInfo()
    {
        showInfo();
        cout << "팀 인원 수: " << teamSize << endl;
    }
};

int main()
{
    Manager m("Jisu", 5000, 10);
    m.showManagerInfo();
    return 0;
}