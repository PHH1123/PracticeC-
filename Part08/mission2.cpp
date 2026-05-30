#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int score;

public:
    Student(string n, int s)
    {
        name = n;
        score = s;
    }
    void printInfo()
    {
        cout << name << " : " << score << "점" << endl;
    }
};

int main()
{
    Student s1("Minho", 95);
    Student s2("Jisu", 88);

    s1.printInfo();
    s2.printInfo();

    return 0;
}