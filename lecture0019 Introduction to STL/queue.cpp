#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>q;
    q.push("sachin");
    q.push("sahil");
    q.push("jha");
    cout<<"First element "<<q.front()<<endl;
    q.pop();
    cout<<"First element "<<q.front()<<endl;
    cout<<"Size after pop "<<q.size()<<endl;
    
    return 0;
}