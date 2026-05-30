#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    int speed;

    void drive()
    {
        cout << brand << " 자동차가 " << speed << "km/h로 달립니다." << endl;
    }
};

int main()
{
    Car myCar;
    myCar.brand = "Hyundai";
    myCar.speed = 100;
    myCar.drive();

    return 0;
}