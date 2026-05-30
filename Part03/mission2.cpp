#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int target = rand() % 100 + 1;
    int guess;

    do
    {
        cout << "숫자를 입력하세요 (1~100): ";
        cin >> guess;

        if (guess > target)
        {
            cout << "더 작은 수입니다." << endl;
        }
        else if (guess < target)
        {
            cout << "더 큰 수입니다." << endl;
        }
        else
        {
            cout << "정답입니다!" << endl;
        }
    } while (guess != target);

    return 0;
}