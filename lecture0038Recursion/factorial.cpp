#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    //base case
    if(n==0){
        return 1;

    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<"factorial of number "<<n<<" is :"<<ans<<endl;

    return 0;

}