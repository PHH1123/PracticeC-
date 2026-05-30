#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int sum = 0;

    cout << "정수 5개를 입력하세요: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "합계 = " << sum << endl;
    return 0;
}