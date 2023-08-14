#include<bits/stdc++.h>
using namespace std;
// int * func(){
//     int x=10;
//     return &x;

// }

void swap(char *x,char *y){
    char *t=x;
    x=y;
    y=t;
}

int main(){
    // Types of pointer
    //1.Double pointers
    // int a=10;
    // int *ptr=&a;
    // int **q=&ptr;//pointer pointing to the address of other pointer.

    // // In all these three cases it provides same result;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // cout<<*q<<endl;

    // // In all these cases we will get same result.
    // cout<<a<<endl;
    // cout<<*ptr<<endl;
    // cout<<**q<<endl;

    // // Void pointer ;
    // void *ptr;// Declaring void pointer
    // int a=5;
    // ptr=&a;
    // cout<<"Address of a is:"<<&a<<endl;
    // cout<<"Address where the void pointer is pointing is :"<<ptr<<endl;
    // // cout<<"Value at address which is pointed by the ptr is:"<<*ptr<<endl;  ---> Void pointers cannnot be dereferenced;


    // Wild pointers.
    // int *p;// Wild pointers;
    // int a=10;
    // p=&a;// now p is not a wild pointers
    // *p=12;//The value of a is changed.
    // cout<<a<<endl;


    //dangling pointers;

    // 1.Function call
    // int *p=func();// P points to something which is not valid anymore.
    // cout<<*p<<endl;

    // 2.Variable goes out of scope

    // int *ptr;


    // {
    //     int ch=10;
    //     ptr=&ch;
    // }
   // Here pointer ptr becomes a dangling pointer


    // int arr[]={1,2,3,4};
    // int *ptr=arr+1;
    // char arr[]="sachin";
    // char *ch=&arr[0];
    // cout<<ch<<endl;

    // char st[]="ABCD";
    // for(int i=0;st[i]!='\0';i++){
    //     cout<<st[i]<<*(st)+i<<*(i+st)<<i[st];
    // }

   
    
    // cout<<arr<<endl;
    // cout<<*ptr<<endl;


    char *x="ninjasquiz";
    char *y="codingninjas";
    char *t;
   
    swap(x,y);
    cout<<x<<" "<<y;
    t=x;
    x=y;
    y=t;
    cout<<" "<<x<<" "<<y;


    




    return 0;

}