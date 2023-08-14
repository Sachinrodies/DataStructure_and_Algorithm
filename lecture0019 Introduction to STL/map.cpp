#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="sachin";
    m[2]="jha";
    m[13]="kumar";

    m.insert({5,"bheem"});
    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<< " "<<i.second<<endl;

    }
    cout<<"After Erasing"<<endl;
    m.erase(13);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 13--->"<<m.count(13)<<endl;
    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }






}