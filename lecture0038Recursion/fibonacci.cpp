#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n<=1){
        return n;
    }

    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int ans=fibo(n);
    cout<<"The "<<n<<" th term of fibonacci series is:"<<ans<<endl;
    return 0;

}