#include <iostream>
#include <memory>
using namespace std;

/*
shared_ptr은 같은 포인터를 계속 사용하기 위해서 사용
weak_ptr은 같은 포인터를 잠시 사용하기 위해서 사용
    실제 사용할 때는 auto temp = weak_ptr.lock()로 가져옴
    이때 가져오면 shared_ptr로 타입으로 바뀜
    또, weak_ptr을 사용하면 순환 참조를 막을 수 있음
*/

class Data
{
public:
    Data() { cout << "Data 생성" << endl; }
    ~Data() { cout << "Data 소멸" << endl; }
};

int main()
{
    shared_ptr<Data> d1 = make_shared<Data>();
    {
        shared_ptr<Data> d2 = d1;
        cout << "참조 카운트: " << d1.use_count() << endl;
    }
    cout << "블록 종료 후 카운트: " << d1.use_count() << endl;
    return 0;
}

/*
// weak_ptr 사용법
int main()
{
    shared_ptr<Data> d1 = make_shared<Data>();
    weak_ptr<Data> d2 = d1;
    if (auto temp = d2.lock()){
        cout << "참조 카운트: " << d1.use_count() << endl;
    }
    cout << "블록 종료 후 카운트: " << d1.use_count() << endl;
    return 0;
}
*/