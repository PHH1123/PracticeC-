#include <iostream>
#include <memory>
using namespace std;

class Node {
public:
    weak_ptr<Node> next;
    ~Node() { cout << "Node 소멸" << endl;}
};

int main() {
    shared_ptr<Node> n1 = make_shared<Node>();
    shared_ptr<Node> n2 = make_shared<Node>();

    n1->next = n2;
    n2->next = n1;

    cout << "n2->next" << n2->next.lock();

    cout << "정상 종료" << endl;
    return 0;
}