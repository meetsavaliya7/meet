#include <iostream>
using namespace std;

class Saving_Ac
{
public:
    int Saving_balance;
    Saving_Ac();
    void S_deposit(int);
    void S_withdraw(int);
    void S_intrest();
};
Saving_Ac::Saving_Ac()
{
    Saving_balance = 1000;
}
void Saving_Ac::S_deposit(int dep_amt)
{
    Saving_balance += dep_amt;
}
void Saving_Ac::S_withdraw(int with_amt)
{
    if (with_amt > Saving_balance)
    {
        cout << "\n you not have a sufficient Amount";
    }
    Saving_balance -= with_amt;
}
void Saving_Ac::S_intrest()
{
    if (Saving_balance > 5000)
    {
        int iamt = Saving_balance * 0.10;
        Saving_balance += iamt;
    }
}

// Derived Class
class Current_Ac
{
public:
    int Current_balance;
    Current_Ac();
    void C_deposit(int);
    void C_withdraw(int);
    void C_intrest();
};
Current_Ac::Current_Ac()
{
    Current_balance = 1000;
}
void Current_Ac::C_deposit(int dep_amt)
{
    Current_balance += dep_amt;
}
void Current_Ac::C_withdraw(int with_amt)
{
    if (with_amt > Current_balance)
    {
        cout << "\n you not have a sufficient Amount";
    }
    Current_balance -= with_amt;
}
void Current_Ac::C_intrest()
{
    if (Current_balance > 5000)
    {
        int iamt = Current_balance * 0.10;
        Current_balance += iamt;
    }
}

// Derived class
class Person : public Saving_Ac, public Current_Ac
{
public:
    int Saving_Show_Balance();
    int Current_Show_Balance();
};
int Person::Saving_Show_Balance()
{
    cout << "\n Saving_Ac Balance:" << Saving_balance;
}
int Person::Current_Show_Balance()
{
    cout << "\n Current_Ac Balance:" << Current_balance;
}

int main()
{
    int n, ac, dep_amt, with_amt, int_amt;
    Person pallavi;
    cout << "\n Press 1 for Saving And 2 for Current :";
    cout << "\n Enter Ac type :";
    cin >> ac;
    do
    {
        cout << "\n Enter switch :";
        cin >> n;
        switch (n)
        {
        case 1:
            if (ac == 1)
            {
                cout << "\n Deposit :";
                cin >> dep_amt;
                pallavi.S_deposit(dep_amt);
                break;
            }
            else
            {
                cout << "\n Deposit :";
                cin >> dep_amt;
                pallavi.C_deposit(dep_amt);
                break;
            }
        case 2:
            if (ac == 1)
            {
                cout << "\n Deposit :";
                cin >> with_amt;
                pallavi.C_withdraw(with_amt);
                break;
            }
            else
            {
                cout << "\n Withdraw :";
                cin >> with_amt;
                pallavi.C_withdraw(with_amt);
                break;
            }
        case 3:
            pallavi.S_intrest();
            break;
        case 0:
            if (ac == 1)
            {
                pallavi.Saving_Show_Balance();
                break;
            }
            else
            {
                pallavi.Current_Show_Balance();
                break;
            }
        default:
            cout << "\n please call the function";
            break;
        }
    } while (n != 0);
}
