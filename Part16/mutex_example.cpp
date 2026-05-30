#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mtx;

void printTask(const string &msg)
{
    // lock_guard는 lock을 자동으로 해주고
    // 함수가 끝나면 소멸 생성자가 호출되어 unlock을 해줌
    lock_guard<mutex> lock(mtx);

    for (int i = 0; i < 5; i++)
    {
        cout << msg << " " << i << endl;
    }
}

int main()
{
    thread t1(printTask, "스레드 A");
    thread t2(printTask, "스레드 B");

    t1.join();
    t2.join();

    return 0;
}