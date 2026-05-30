#include <iostream>
using namespace std;

int max3(int a, int b, int c)
{
    int maxVal = a;
    if (b > maxVal)
        maxVal = b;
    if (c > maxVal)
        maxVal = c;
    return maxVal;
}

int main()
{
    int x, y, z;
    cout << "세 정수를 입력하세요: ";
    cin >> x >> y >> z;
    cout << "최대값 = " << max3(x, y, z) << endl;
    return 0;
}