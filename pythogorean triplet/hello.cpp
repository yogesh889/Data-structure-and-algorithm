#include <iostream>
using namespace std;

bool check(int x, int y, int z)
{
    int a = max(x, max(y,z));
    int b, c;
    if (a==x)
    {
        b = y;
        c = z;
    }
    else if ( a == x)
    {
        b = x;
        c = z;
    }
    else 
    {
        b = x;
        c = y;
    }
    if (a*a == b*b + c*c)
        return true;
    else
        return false;
    
}

int32_t main()
{
    int x,y,z;
    cin >> x >> y >> z;
    if(check(x,y,z))
    {
        cout<<"pythagorean triplet";
    } 
    else 
    {
        cout<<"Not a pythagorean triplet";
    }
}