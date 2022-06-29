#include <iostream>
using namespace std;
class home
{
private:
    int p, q, w;

public:
    void set(int c, int d, int e)
    {
        p = c;
        q = d;
        w = e;
    }
    int sum()
    {
        return p + q + w;
    }
};
int main()
{
    home h1;
    h1.set(123, 456, 789);

    cout << h1.sum();
}