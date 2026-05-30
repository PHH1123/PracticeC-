#include <iostream>
using namespace std;

enum Weekday
{
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};

int main()
{
    Weekday today = WED;

    if (today == WED)
    {
        cout << "오늘은 수요일입니다." << endl;
    }

    return 0;
}