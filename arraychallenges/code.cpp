

// PROBLEM: given an a[] of size n. For every i from 0 to n-1 out max(a[0], a[1],..., a[i]).



#include "bits/stdc++.h"
using namespace std;

int main(){
    int mx= INT_MIN;
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        mx = max(mx, a[i]);
        cout<<mx<<endl;
    }
    return 0;
}