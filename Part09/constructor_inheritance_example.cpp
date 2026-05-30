#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    Person(string n)
    {
        name = n;
        cout << "Person 생성자 호출" << endl;
    }
};

class Student : public Person
{
private:
    int score;

public:
    Student(string n, int s) : Person(n)
    {
        score = s;
        cout << "Student 생성자 호출" << endl;
    }

    void printInfo()
    {
        cout << name << " : " << score << "점" << endl;
    }
};

int main()
{
    Student st("Minho", 95);
    st.printInfo();
    return 0;
}