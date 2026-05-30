#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int a, int b) : x(a), y(b) {}

    Point operator+(const Point &other)
    {
        return Point(x + other.x, y + other.y);
    }

    Point operator*(const Point &other)
    {
        return Point(x * other.x, y * other.y);
    }

    void print()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point p1(1, 2), p2(3, 4);
    Point p3 = p1 + p2;
    Point p4 = p1 * p2;
    p3.print();
    p4.print();
    return 0;
}