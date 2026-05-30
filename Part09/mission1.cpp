#include <iostream>
using namespace std;

class Vehicle
{
public:
    void move()
    {
        cout << "탈것이 이동합니다." << endl;
    }
};

class Car : public Vehicle
{
public:
    void honk()
    {
        cout << "빵빵!" << endl;
    }
};

int main()
{
    Car c;
    c.move();
    c.honk();
    return 0;
}