#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    // Creating a 2d Array
    int **arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }

    // Creation done
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //Taking output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // Releasing memory
    for(int i=0;i<n;i++){
        delete []arr[i];
    }
    delete []arr;
    return 0;


}