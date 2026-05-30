#include <iostream>
#include <memory>
using namespace std;

class Car
{
public:
    Car() { cout << "Car 생성" << endl; }
    ~Car() { cout << "Car 소멸" << endl; }
};

int main()
{
    shared_ptr<Car> c1 = make_shared<Car>();
    shared_ptr<Car> c2 = c1;

    cout << "참조 카운트: " << c1.use_count() << endl;
    return 0;
}