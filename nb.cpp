/*#include <iostream>
using namespace std;
class bank
{
    float bal = 0;

public:
    bank(int);

    int deposit_ammount(int);

    int withdraw_ammount(int);

    int show_balance();
};
bank::bank(int amt)
{
    bal = amt;
}
int bank::deposit_ammount(int d_amt)
{

    bal += d_amt;
    return d_amt;
}
int bank::withdraw_ammount(int w_amt)
{

    if (w_amt > bal)
    {
        cout << "\n you not able to withdraw";
    }
    else
    {
        bal -= w_amt;
    }
    return w_amt;
}
int bank::show_balance()
{
    return bal;
}
int main()
{
    int ch;
    bank b(5000);
    do
    {
        cout << "\n****CHOICES****";
        cout << "\n****ENTER 1 FOR DEPOSITE****";
        cout << "\n****ENTER 2 FOR WITHDRAW****";
        cout << "\n****ENTER 3 FOR SHOW_BALANCE****";
        cout << "\n****ENTER 0 EXIT****";
        cout << "\n";
        cout << "\n";

        cout << "\nENTER YOUR CHOICE : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            int d_amt;
            cout << "\n Enter deoposite ammount :";
            cin >> d_amt;
            b.deposit_ammount(d_amt);
            cout << "\n  " << d_amt << " is added in your bank";
            break;
        case 2:
            int w_amt;
            cout << "\n Enter withdraw ammount :";
            cin >> w_amt;
            b.withdraw_ammount(w_amt);
            cout << "\n you  withdraw  " << w_amt << "  rupees";
            break;
        case 3:

            cout << "\n  total ammount in your bank is :" << b.show_balance();

            break;
        case 0:
            break;
        default:
            cout << "INVALID CHOICE";
        }
    } while (ch != 0);
}*/
#include<iostream>
using namespace std;
class bank
{
    int bal,dep,with;
    public:
    bank(int);
    void deposit(int);
    void withdraw(int);
    int showbal();
};
bank::bank(int amt)
{
    bal=amt;
}
void bank::deposit(int dep)
{
    bal+=dep;
}
void bank::withdraw(int with)
{
    bal-=with;
}
int bank::showbal()
{
    return bal;
}
int main()
{
    int dep,with,n;
    
    bank rahul(10000);
    do
    {
    cout<<"\n if you enter dep amt press 1:";
    cout<<"\n if you enter withdraw amt press 2:";
    cout<<"\n if you show balance press 9:"; 
    cout<<"\n if you exit press 0:"; 


    cout<<"\n enter n:";
    cin>>n;
    switch(n)
    {
        case 0:

            break;
        case 1:
            cout<<"\n enter depo:";
            cin>>dep;
            rahul.deposit(dep);
            break;
        case 2:
            cout<<"\n enter withdraw:";
            cin>>with;
            rahul.withdraw(with);
            break;
        case 9:
            cout<<"\n balance:"<<rahul.showbal();
            break;
        default:
            cout<<"\n wrong choise";


    }
    }while (n!=0);
   // cout<<"\n balance is:"<<rahul.showbal();

    //cout<<"\n balance is:"<<rahul.showbal();
   
   // cout<<"\n balance is:"<<rahul.showbal();
}

