#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> a;
    a.push_back(1);
    a.push_back(2);

    list<int> l(a);
    for(int i:a){
        cout<<i<<" ";
    }

    a.erase(a.begin());
    for(int i:a){
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
}
