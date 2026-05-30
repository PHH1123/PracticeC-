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
    Student arr[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "학생 이름: ";
        cin >> arr[i].name;
        cout << "나이: ";
        cin >> arr[i].age;
        cout << "점수: ";
        cin >> arr[i].score;
    }

    cout << "--- 학생 정보 출력 ---" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << arr[i].name << " (" << arr[i].age << "세, "
             << arr[i].score << "점)" << endl;
    }

    return 0;
}