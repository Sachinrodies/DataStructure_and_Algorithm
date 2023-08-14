#include<bits/stdc++.h>
using namespace std;
int Exponent(int n,int m){
    //base case
     if(m==0){
        return 1;
     }
     else{
        // Recursive relation
        return n*Exponent(n,m-1);
     }
}

int main(){
    int n;
    cout<<"Enter the number whose power you want to calculate:"<<endl;
    cin>>n;
    int power;
    cout<<"Enter the value of exponent you want to calculate:"<<endl;
    cin>>power;
    int ans=Exponent(n,power);
    cout<<"Value of "<<n<<" raise to power "<<power<<" is:"<<ans<<endl;
    
    return 0;

}