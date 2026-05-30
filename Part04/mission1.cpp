#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int score;

    void printInfo()
    {
        cout << name << "의 점수: " << score << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Minho";
    s1.score = 95;
    s1.printInfo();

    return 0;
}