#include<bits/stdc++.h>
using namespace std;

string decimalTohexadecimal(int n)
{
    string ans = "";
    int x = 1;
    while(x<=n)
        x *=16;
    x/=16;

    while(x>0)
    {
        int lastdigit = n/x;
        n -= lastdigit*x;
        x/=16;

        if(lastdigit <= 9)
            ans = ans + to_string(lastdigit);
        else 
        {
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        } 
    }
    return ans;
    
}

int32_t main(){
    int n;
    cin >> n;
     
    cout << decimalTohexadecimal(n) << endl;

}