#include<bits/stdc++.h>
using namespace std;

vector<long long> sieve(int n){
    vector<bool> ans(n+1,true);
    vector<long long> val;
    ans[0]=ans[1]=0;
    for(int i=2;i<n;i++){
        if(ans[i]){
            val.push_back(i);
           
            for(int j=2*i;j<n;j=j+i){
                ans[j]=0;
            }
        }

    }
    return val;

}
void segmentedSieve(int l,int h){
    long long sq=sqrt(h);
    vector<long long> prime=sieve(sq);
    vector<bool> isPrime(h-l+1,true);
    for( long long p:prime){
        long long sm=(l/p)*p;
        if(sm<l){
            sm+=p;

        }
        for(long long m=sm;m<=h;m=m+p){
            isPrime[m-l]=false;
        }

    }
    for(long long i=l;i<=h;i++){
        if(isPrime[i-l]){
            cout<<i<<" ";
        }
    }



}
int main(){
    int lower,high;
    cout<<"Enter the lower value and the higher value to get a primes number in a range:"<<endl;
    cin>>lower>>high;
    cout<<"Prime number in the range "<<lower<<" to "<<high<<" is :"<<endl;
    segmentedSieve(lower,high);
    return 0;
}