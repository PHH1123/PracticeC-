#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator calc;
    cout << calc.add(3, 4) << endl;
    cout << calc.add(2.5, 3.7) << endl;
    return 0;
}