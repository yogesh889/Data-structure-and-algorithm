PROBLEM: given an arr[] of size n. output sum of each subarray of the given array.

#include "bits/stdc++.h"

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int curr = 0;
    for(int i=0; i<n; i++){
        curr = 0;
        for(int j=0; j<n; j++){
            curr += arr[j];
            cout<<curr<<endl;
        }
    }
}