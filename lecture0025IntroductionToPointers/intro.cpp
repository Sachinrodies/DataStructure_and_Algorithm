#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=5;

    // Adress of operator -->&
    cout<<num<<" its address is "<<&num<<endl; 

    int *ptr=&num;

    cout<<"Adress is: "<<ptr<<endl;
    cout<<"value is: "<<*ptr<<endl;

    double d=4.3;
    double *p2=&d;
    cout<<"Adress is:"<<p2<<endl;
    cout<<"Value is:"<<*p2<<endl;


    cout<<"Size of integer is:"<<sizeof(num)<<endl;
    cout<<"Size of pointer is:"<<sizeof(ptr)<<endl;
    cout<<"Size of pointer is:"<<sizeof(p2)<<endl;




    return 0;
}