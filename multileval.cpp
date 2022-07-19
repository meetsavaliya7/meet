#include <iostream>
using namespace std;
class bank
{
private:
    string name, Actype;
    int Acno;

public:
    void getAcdetail()
    {
        cout << "\n Enter Account number:";
        cin >> Acno;
        cout << "\n Enter Actype:";
        cin >> Actype;
    }
    void displayDetails()
    {

        cout << "\nAccount Number  : " << Acno;
        cout << "\nAccount Type    : " << Actype;
    }
};
class Ca_Ac : public bank
{
private:
    float Cabalance;

public:
    void Ca_balance()
    {
        cout << "\n Current Ac balance:" << Cabalance;
    }
    void Ca_deposite()
    {
        float deposite;
        cout << "\n Enter deposite amount:";
        cin >> deposite;
        Cabalance = Cabalance + deposite;
    }
    void Ca_withdraw()
    {
        float withdraw;
        cout << "\n Enter withdraw amount:";
        cin >> withdraw;
        if (Cabalance > 10000)
        {
            Cabalance = Cabalance - withdraw;
            cout << "\n balance after withdrawal:" << Cabalance;
        }
        else
        {
            cout << "\n Limit Over";
        }
    }
};
class Sv_Ac : public bank
{
private:
    float Svbalance;

public:
    void Sv_balance()
    {
        cout << "\n Saving balance:" << Svbalance;
    }
    void Sv_deposite()
    {
        float deposite;
        cout << "\n Enter deposite amount:";
        cin >> deposite;
        Svbalance = Svbalance + deposite;
    }
    void Sv_withdraw()
    {
        float withdraw;
        cout << "\n Enter withdraw amount:";
        cin >> withdraw;
        if (Svbalance > 1000)
        {
            Svbalance = Svbalance - withdraw;
            cout << "\n Balance after withdrawal:" << Svbalance;
        }
        else
        {
            cout << "\n Limit over";
        }
    }
};
int main()
{
    Sv_Ac s1;
    Ca_Ac c1;
    char type;
    cout << "\n Enter  s for saving and c for current type of A/c :";
    cin >> type;
    int n;
    if (type == 's' || type == 'S')
    {
        s1.getAcdetail();
        while (1)
        {
            cout << "\n choose your choice" << endl;
            cout << "1. Deposite" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Total balance" << endl;
            cout << "4. display details" << endl;
            cout << "0. Exit" << endl;
            cout << "\n Enter your choice:";
            cin >> n;
            if (n == 0)
            {
                cout<<"\n Exit";
                break;
            }
            switch (n)
            {
            case 1:
                s1.Sv_deposite();
                break;
            case 2:
                s1.Sv_withdraw();
                break;
            case 3:
                s1.Sv_balance();
                break;
            case 4:
                s1.displayDetails();
                s1.Sv_balance();
                break;
            //case 0:
            //    goto end;
            default:
                cout << "\n\n Wrong choice";
            }
        }
    }
    else if (type == 'c' || type == 'C')

    {
        c1.getAcdetail();
        while (1)
        {
            cout << "\n choose your choice" << endl;
            cout << "1. Deposite" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Total balance" << endl;
            cout << "4. display details" << endl;
            cout << "0. Exit" << endl;
            cout << "\n Enter your choice:";
            cin >> n;
            if (n == 0)
            {
                cout<<"\n Exit";
                break;
            }
            switch (n)
            {
            case 1:
                c1.Ca_deposite();
                break;
            case 2:
                c1.Ca_withdraw();
                break;
            case 3:
                c1.Ca_balance();
                break;
            case 4:
                c1.displayDetails();
                c1.Ca_balance();
                break;
            //case 0:
            //    goto end;
            default:
                cout << "\n\n Wrong choice";
            }
        }
    }
    else
    {
        cout << "\n Account type is wrong";
    }
    return 0;
}