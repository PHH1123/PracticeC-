#include <iostream>
#include <thread>
using namespace std;

void task1() {
    cout << "작업 1 실행 중..." << endl;
}

void task2() {
    cout << "작업 2 실행 중..." << endl;
}

int main() {
    thread t1(task1);
    thread t2(task2);

    // 스레드 종료 대기
    t1.join();
    t2.join();

    cout << "메인 스레드 종료" << endl;
    return 0;
}