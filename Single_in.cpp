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
//Derived Class
class Saving_Ac : public Bank
{
    int balance;
    public:
    Saving_Ac(int);
    ~Saving_Ac();    
    void deposit(int);
    void withdraw(int); 
    void intrest();
    int showbal();
    void letStart();
};
    Saving_Ac::Saving_Ac(int n)
    {
        balance = n;
    }
    Saving_Ac::~Saving_Ac()
    {
       cout<<"\n A/C balance --------:"<<balance; 
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
        if(balance > 5000)
        {
           int iamt =  balance * 0.10;
            balance += iamt;
        }
    }    
    void Saving_Ac :: letStart()
    {
        cout<<"\n Saving Ac Num :"<<Saving_Ac_no;
    }
int main()
{
    int n, dep_amt, with_amt, int_amt;
    Saving_Ac krupal(1000);
    krupal.set_no(84900);
    krupal.letStart();
    do
    {
        cout << "\n Enter switch :";
        cin >> n;
        switch (n)
        {
        case 1:
            cout<<"\n Deposit :";
            cin >> dep_amt;
            krupal.deposit(dep_amt);
            break;
        case 2:
            cout<<"\n Withdraw :";
            cin >> with_amt;
            krupal.withdraw(with_amt);
            break;
        case 3:            
            krupal.intrest();
            break;            
        case 0:
            //cout<<"A/C bal :"<<krupal.showbal();
            break;
        default:
            cout << "\n please call the function";
            break;
        }
    }while (n != 0);    
}
