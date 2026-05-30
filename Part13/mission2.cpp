#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream in("scores.txt");
    string name;
    int score;

    if (in.is_open())
    {
        while (in >> name >> score)
        {
            cout << name << " : " << score << endl;
        }
        in.close();
    }
    return 0;
}