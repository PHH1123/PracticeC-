#include <iostream>
using namespace std;

class Animal
{
public:
    string name;
    void eat()
    {
        cout << name << "가(이) 먹고 있습니다." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << name << "가(이) 멍멍 짖습니다!" << endl;
    }
};

int main()
{
    Dog d;
    d.name = "초코";
    d.eat();
    d.bark();
    return 0;
}