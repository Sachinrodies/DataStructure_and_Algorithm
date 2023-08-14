#include<iostream>
#include<vector>
using namespace std;
void merged(vector<int> &a1,vector<int> &a2,vector<int> &a3){
    
    int i=0;
    int j=0;
    int m=0;
    while(i<a1.size() && j<a2.size()){
        if(a1[i]<a2[j]){
            a3[m++]=a1[i++];
        }
        else{
            a3[m++]=a2[j++];
            
        }
    }
    while(i<a1.size()){
        a3[m++]=a1[i++];
     
    }
    while(j<a2.size()){
        a3[m++]=a2[j++];
       
    }

    
}

int main(){
    vector<int> v1={1,3,5,7,9};
    vector<int> v2={2,4,6};
    vector<int> v3(v1.size()+v2.size());
   
   
    merged(v1,v2,v3);
    for(int i:v3){
        cout<<i<<" ";
    }
    cout<<endl;
    
    

    return 0;


}