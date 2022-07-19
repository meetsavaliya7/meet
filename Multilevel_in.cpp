#include <iostream>
using namespace std;
class Bank
{
protected:
    int Saving_Ac_no;

public:
    void set_no(int);
    int get_no();
};
void Bank::set_no(int S_Ac_num)
{
    Saving_Ac_no = S_Ac_num;
}
int Bank::get_no()
{
    return Saving_Ac_no;
}

// Derived Class
class Saving_Ac : public Bank
{
public:
    int balance;
    Saving_Ac();
    void deposit(int);
    void withdraw(int);
    void intrest();
    void set_Ac_no();
};
Saving_Ac::Saving_Ac()
{
    balance = 1000;
}
void Saving_Ac::deposit(int dep_amt)
{
    balance += dep_amt;
}
void Saving_Ac::withdraw(int with_amt)
{
    if (with_amt > balance)
    {
        cout << "\n you not have a sufficient Amount";
    }
    balance -= with_amt;
}
void Saving_Ac::intrest()
{
    if (balance > 5000)
    {
        int iamt = balance * 0.10;
        balance += iamt;
    }
}
void Saving_Ac ::set_Ac_no()
{
    cout << "\n Saving Ac Num :" << Saving_Ac_no;
}

// Derived class
class Person : public Saving_Ac
{
public:
    int Show_Balance();
};
int Person::Show_Balance()
{
    cout << "Saving_Ac Balance:" << balance;
}

int main()
{
    int n, dep_amt, with_amt, int_amt;
    Person pallavi;
    pallavi.set_no(84900);
    pallavi.set_Ac_no();
    do
    {
        cout << "\n Enter switch :";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "\n Deposit :";
            cin >> dep_amt;
            pallavi.deposit(dep_amt);
            break;
        case 2:
            cout << "\n Withdraw :";
            cin >> with_amt;
            pallavi.withdraw(with_amt);
            break;
        case 3:
            pallavi.intrest();
            break;
        case 0:
            pallavi.Show_Balance();
            break;
        default:
            cout << "\n please call the function";
            break;
        }
    } while (n != 0);
}
