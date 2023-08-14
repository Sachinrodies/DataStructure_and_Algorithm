#include<bits/stdc++.h>
using namespace std;

int & func(int a){
    int num=a;
    int &ans=num;
    return ans;
}
// This is call pass by value .This will 
// not increament the value of the number
// void update(int n){
//     n++;
// }

//This is call pass by referenc.This will
// increment the value of the number by 1
void update2(int &n){
    n++;
}
int main(){

    int i=5;
    // Creating a new Reference variable.
    // int &j=i;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;
    cout<<"Before:"<<i<<endl;
    // update(i);
    update2(i);
    cout<<"After:"<<i<<endl;
    
    return 0;
}
