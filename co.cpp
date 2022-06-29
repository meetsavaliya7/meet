#include <iostream>
using namespace std;
class skill
{
    int maths, phy, chem, total, per, x;

public:
    skill()
    {
        22
        cout << "\nENTER THE  : ";
        cin >> maths;

        cout << "\nENTER THE  : ";
        cin >> chem;

        cout << "\nENTER THE  : ";
        cin >> phy;

        total = maths + chem + phy;
        cout << "\ntotal  : " << total;

        per = total / 3;
        cout << "\nper : " << per;

        if (per >= 91 && per <= 100)
        {
            cout << "\nA1";
        }
        else if (per >= 81 && per <= 90)
        {
            cout << "\nA2";
        }
        else if (per >= 71 && per <= 80)
        {
            cout << "\nB2";
        }
        else if (per >= 61 && per <= 70)
        {
            cout << "\nC1";
        }
        else if (per >= 51 && per <= 60)
        {
            cout << "\nC2";
        }
        else if (per >= 41 && per <= 50)
        {
            cout << "\nD";
        }
        else if (per >= 31 && per <= 40)
        {
            cout << "\nE1";
        }
        else if (per >= 21 && per <= 30)
        {
            cout << "\nD";
        }
        else if (per >= 11 && per <= 20)
        {
            cout << "\nFAIL";
        }
    }
    skill(int n)
    {
        x = n;
        cout << "\nENTER THE  : ";
        cin >> maths;

        cout << "\nENTER THE  : ";
        cin >> chem;

        cout << "\nENTER THE  : ";
        cin >> phy;

        total = maths + chem + phy;
        cout << "\ntotal  : " << total;

        per = total / 3;
        cout << "\nper : " << per;

        if (per >= 91 && per <= 100)
        {
            cout << "\nA1";
        }
        else if (per >= 81 && per <= 90)
        {
            cout << "\nA2";
        }
        else if (per >= 71 && per <= 80)
        {
            cout << "\nB2";
        }
        else if (per >= 61 && per <= 70)
        {
            cout << "\nC1";
        }
        else if (per >= 51 && per <= 60)
        {
            cout << "\nC2";
        }
        else if (per >= 41 && per <= 50)
        {
            cout << "\nD";
        }
        else if (per >= 31 && per <= 40)
        {
            cout << "\nE1";
        }
        else if (per >= 21 && per <= 30)
        {
            cout << "\nD";
        }
        else if (per >= 11 && per <= 20)
        {

            
            cout << "\nFAIL";
        }
    }
};
int main()
{
    skill s1[3];
}