#include<iostream>
using namespace std;
int main()
{
    int i,n,dip,wd,sb=0;
    do
    {
        cout<<"\n Enter 1 for Deposite ";
        cout<<"\n Enter 2 for Withdraw ";
        cout<<"\n Enter 3 for Show Balance ";
        cout<<"\n Enter 9 for Wrong Choice ";
    
        cout<<"\n Enter your choice : ";
        cin>>n;
        switch(n)
        {
            case 1:
                cout<<"\n Enter Deposite ";
                cin>>dip;
                sb+=dip;
                break;
            case 2:
                cout<<"\n Withdraw ";
                cin>>wd;
                sb-=wd;
                break;
            case 3:
                //sb=dip-wd;
                cout<<"\n Show Balance "<<sb;
                break;
            case 9:
                cout<<"\n Exit ";
                break;
            default:
                cout<<"\n Wrong Choice ";
                break;
        }
        n++;
    }while(n<=50);
}