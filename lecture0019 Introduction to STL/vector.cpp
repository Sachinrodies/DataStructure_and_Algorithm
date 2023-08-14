// #include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    // array<int,4> m={1,2,3,4};

    
    // vector<int> v;
    // cout<<"Capacity-->"<<v.capacity()<<endl;

    // v.push_back(1);
    // cout<<"Capacity-->"<<v.capacity()<<endl;
    // v.push_back(2);
    // cout<<"Capacity-->"<<v.capacity()<<endl;
    // v.push_back(3);
    // cout<<"Capacity-->"<<v.capacity()<<endl;
    // cout<<"Size-->"<<v.size()<<endl;

    // cout<<"Element at 2nd index "<<v.at(2)<<endl;
    // cout<<"Front "<<v.front()<<endl;
    // cout<<"Back "<<v.back()<<endl;
    // cout<<"Before pop"<<endl;
    // for(int i:v){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // v.pop_back();
    // cout<<"after pop"<<endl;
    // for(int i:v){
    //     cout<<i<<" ";
    // }

    // cout<<"\nBefore clear size "<<v.size()<<endl;
    // v.clear();
    // cout<<"After clear size "<<v.size()<<endl;

    // vector<int> a(5,1);
    // for(int i:a){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // Making  a new vector which contains the copy of another vector

    // vector<int> last(a);
    // for(int i:last){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<last.size()<<endl;
    // cout<<last.capacity()<<endl;


    vector<pair<int ,int>>vect;
    vect.push_back({1,2});
   vect.emplace_back(1,2);
   cout<<vect[0].second<<endl;
   

   
   
  


    return 0;
}