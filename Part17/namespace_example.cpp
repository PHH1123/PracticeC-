#include <iostream>
using namespace std;

namespace Math {
    int add(int a, int b) {
        return a + b;
    }
}

int main() {
    cout << Math::add(3, 4) << endl;
    return 0;
}