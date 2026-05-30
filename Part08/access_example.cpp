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
    BankAccount acc(1000);
    acc.deposit(500);
    acc.withdraw(200);
    acc.withdraw(2000);

    return 0;
}