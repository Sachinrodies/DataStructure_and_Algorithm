#include<bits/stdc++.h>
using namespace std;

void sieve(int n){
    vector<bool> ans(n+1,true);
    ans[0]=ans[1]=0;
    for(int i=2;i<n;i++){
        if(ans[i]){
            cout<<i<<" ";
            for(int j=2*i;j<n;j=j+i){
                ans[j]=0;
            }
        }

    }

}

int main(){
    int n;


    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout<<"prime numbers less than "<<n<<" are :"<<endl;
    sieve(n);
    return 0;

}
