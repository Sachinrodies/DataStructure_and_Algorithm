#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout<<"Finding 6 "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"Lowerbound "<<lower_bound(v.begin(),v.end(),9)-v.begin()<<endl;
    cout<<"Upperbound "<<upper_bound(v.begin(),v.end(),8)-v.begin()<<endl;


}
