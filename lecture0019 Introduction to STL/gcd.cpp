#include<iostream>
// #include<algorithm>
using namespace std;
int gcd(int m,int n){
    int k=2;
    int gcd=1;
    int val=min(m,n);
    while(k<=val){
        if(m%k==0 && n%k==0){
            gcd=k;
        }
        k++;
    }
    return gcd;

}
int main(){
    int a,b;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;

    int res=gcd(a,b);
    cout<<res<<endl;

}