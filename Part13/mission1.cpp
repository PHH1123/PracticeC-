#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("scores.txt");
    string name;
    int score;

    for (int i = 0; i < 3; i++)
    {
        cout << "이름: ";
        cin >> name;
        cout << "점수: ";
        cin >> score;
        out << name << " " << score << endl;
    }
    out.close();
    return 0;
}