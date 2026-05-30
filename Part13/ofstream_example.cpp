#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("test.txt");
    if (out.is_open()) {
        out << "Hello, File!" << endl;
        out << "C++ File I/O 연습" << endl;
        out.close();
    } else {
        cout << "파일을 열 수 없습니다." << endl;
    }
    return 0;
}