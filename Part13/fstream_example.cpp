#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in | ios::out | ios::trunc);
    if (file.is_open()) {
        file << "첫 번째 줄" << endl;
        file << "두 번째 줄" << endl;

        file.seekg(0);
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    return 0;
}