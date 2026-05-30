#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("test.txt");
    string line;

    if (in.is_open()) {
        while (getline(in, line)) {
            cout << line << endl;
        }
        in.close();
    } else {
        cout << "파일을 열 수 없습니다." << endl;
    }
    return 0;
}