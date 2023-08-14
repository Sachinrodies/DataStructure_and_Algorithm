#include<bits/stdc++.h>
using namespace std;
void Counting(int n){
    // Base condition
    if(n==0){
        return ;
        
    }
    else{
        cout<<n<<endl;
        Counting(n-1);
    }

}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    Counting(n);

    return 0;

}