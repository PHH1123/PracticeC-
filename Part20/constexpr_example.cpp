#include <iostream>
using namespace std;

/*
const는 상수를 나타낸다.
컴파일때 결정되는 상수와 런타임때 결정되는 상수가 있다고 하자

컴파일 때 상수를 미리 정해놓으면 런타임 때 속도가 더 빨라질 것이다.
그 때 사용하는 것이 constexpr이다.

constexpr은 컴파일 때 결정되는 상수에만 사용할 수 있다.

const는 컴파일, 런타임 언제든 사용 가능하다.

성능을 위해서라면 constexpr을 사용하는 것이 더 좋다.
*/

constexpr int square(int x) {
    return x * x;
}

int main() {
    int arr[square(3)];
    cout << "배열 크기: " << sizeof(arr)/sizeof(int) << endl;
    return 0;
}