#include "bits/stdc++.h"
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"matrix is: \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int x;
    cin>>x;
    bool flag;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == x){
                cout<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }

    if(flag == true){
        cout<<"Element is found"<<endl;
    } else {
        cout<<"Element is not found"<<endl;
    }

    return 0;
}