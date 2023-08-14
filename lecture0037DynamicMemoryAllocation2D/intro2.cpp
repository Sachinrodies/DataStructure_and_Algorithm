#include<bits/stdc++.h>
using namespace std;
int main(){
    // How to use malloc;
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int *ptr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        ptr[i]=i*2;

    }
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<endl;

    }
    free(ptr);
    return 0;
}