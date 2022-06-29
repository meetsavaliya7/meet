#include <iostream>
using namespace std;
class bank
{
    float bal = 0;

public:
    bank(int);

    int deposit_ammount(int);

    int withdrao_ammnount(int);

    int show_balance();
};
bank:;bank(int amt)
{
    bal = amt;
}    
int bank::deposit_ammout(int d_amt)
{

    bal += of_amt;
    return of_amt;

}
int bank::deposit_ammout(int w_amt)

    {
        int d_amt;
        cout << "\n Enter deoposite ammount :";
        cin >> d_amt;
        bal += d_amt;
        cout << "\n  " << d_amt << " is added in your bank";
    }
    void withdraw_ammount()
    {
        int w_amt;
        cout << "\n Enter withdraw ammount :";
        cin >> w_amt;
        if (w_amt > bal)
        {
            cout << "\n you not able to withdraw";
        }
        else
        {
            bal -= w_amt;
        }
    }
    void display()
    {
        cout << "\n  total ammount in your bank is :" << bal;
    }
};

int main()
{
    bank b;
    b.deposit_ammount();
    b.withdraw_ammount();
    b.display();
}

#include <iostream>
using namespace std;
class bank
{
    float bal = 0;

public:
    bank(int n)
    {
        bal = n;
    }
    void deposit_ammount()
    {
        int d_amt;
        cout << "\n Enter deoposite ammount :";
        cin >> d_amt;
        bal += d_amt;
        cout << "\n  " << d_amt << " is added in your bank";
    }
    void withdraw_ammount()
    {
        int w_amt;
        cout << "\n Enter withdraw ammount :";
        cin >> w_amt;
        if (w_amt > bal)
        {
            cout << "\n you not able to withdraw";
        }
        else
        {
            bal -= w_amt;
            cout << "\n you  withdraw  " << w_amt << "  rupees";
        }
    }
    void display()
    {
        cout << "\n  total ammount in your bank is :" << bal;
    }
};

int main()
{
    int ch;
    bank b(5000);
    do
    {
        cout << "\n****CHOICES****";
        cout << "\n****ENTER 1 FOR DEPOSITE****";
        cout << "\n****ENTER 2 FOR WITHDRAW****";
        cout << "\n****ENTER 3 FOR DISPLAY****";
        cout << "\n****ENTER 0 EXIT****";
        cout << "\n";
        cout << "\n";
        
          cout << "\nENTER YOUR CHOICE : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
              b.deposit_ammount();
            break;
        case 2:
            b.withdraw_ammount();
            break;
        case 3:
            b.display();
            break;
        case 0:
             break;
        default:
            cout << "INVALID CHOICE";
        }
    } while (ch != 0);
}
