#include <iostream>
using namespace std;
class student
{

private:
    int phy, che, bio;
    float x;

public:
    void set(int a, int b, int c)
    {
        phy = a;
        che = b;
        bio = c;
    }
    int sum()
    {
        return phy + che + bio;
    }
};
float pr();
{
    x = phy + che + bio;
    return x / 3;
}

int main()
{
    student s1;
    s1.set(67, 90, 78);
    cout << s1.sum();
    cout << "\n"
         << s1.pr();
}
