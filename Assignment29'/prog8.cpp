#include<iostream>
using namespace std;
class Rupee
{
    int r;
    public:
    Rupee(int x)
    {
        r = x;
    }
    operator int()
    {
        return r;
    }
    
};
int main()
{
    Rupee r =10;
    int x = r;
    cout<<x;
    return 0;
}