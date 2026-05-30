#include <iostream>
using namespace std;

int main()
{
    int height, weight;
    cout << "키(cm): ";
    cin >> height;
    cout << "몸무게(kg): ";
    cin >> weight;
    cout << "BMI =  " << weight / ((height / 100.0) * (height / 100.0)) << endl;

    return 0;
}