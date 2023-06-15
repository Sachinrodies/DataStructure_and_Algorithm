#include<iostream>
using namespace std;
void SelectionSort(int arr [],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
void InputArray(int arr[],int size){
    for(int i=0;i<size;i++){
        int val;
        cout<<"Enter the value;"<<endl;
        cin>>val;
        arr[i]=val;
    }
}
void printArray(int arr[],int size){
    cout<<"Printing the array"<<endl;
    // Print the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing done"<<endl;
}
int main(){
    int len;
    cout<<"Enter the length of array you want:"<<endl;
    cin>>len;
    int arr [len];
    InputArray(arr,len);
    printArray(arr,len);
    SelectionSort(arr,len);
    printArray(arr,len);
    return 0;
}
