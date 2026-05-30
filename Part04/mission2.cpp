#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance;

public:
    BankAccount(int initial)
    {
        balance = initial;
    }

    void deposit(int amount)
    {
        balance += amount;
        cout << amount << "원 입금. 잔액: " << balance << endl;
    }

    void withdraw(int amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << amount << "원 출금. 잔액: " << balance << endl;
        }
        else
        {
            cout << "잔액 부족!" << endl;
        }
    }
};

int main()
{
    BankAccount myAcc(1000);
    myAcc.deposit(500);
    myAcc.withdraw(300);
    myAcc.withdraw(1500);

    return 0;
}