#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "점수를 입력하세요: ";
    cin >> score;

    if (score >= 90) {
        cout << "A 학점" << endl;
    } else if (score >= 80) {
        cout << "B 학점" << endl;
    } else if (score >= 70) {
        cout << "C 학점" << endl;
    } else {
        cout << "F 학점" << endl;
    }
    
    return 0;
}