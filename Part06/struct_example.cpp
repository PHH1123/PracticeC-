#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    double score;
};

int main()
{
    Student st1;
    st1.name = "Minho";
    st1.age = 20;
    st1.score = 95.5;

    cout << "이름: " << st1.name << endl;
    cout << "나이: " << st1.age << endl;
    cout << "점수: " << st1.score << endl;

    return 0;
}