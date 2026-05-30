#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area()
    {
        return 0;
    }
};

class Circle : public Shape
{
private:
    double r;

public:
    Circle(double radius) : r(radius) {}
    double area() override
    {
        return 3.14 * r * r;
    }
};

class Rectangle : public Shape
{
private:
    double w, h;

public:
    Rectangle(double width, double height) : w(width), h(height) {}
    double area() override
    {
        return w * h;
    }
};

int main()
{
    Shape *s1 = new Circle(5);
    Shape *s2 = new Rectangle(4, 6);

    cout << "Circle area: " << s1->area() << endl;
    cout << "Rectangle area: " << s2->area() << endl;

    delete s1;
    delete s2;
    return 0;
}