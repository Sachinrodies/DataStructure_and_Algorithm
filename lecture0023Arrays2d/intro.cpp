#include<iostream>
#include<limits>
using namespace std;

bool isPresent(int arr[][4],int target,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;



}

// To print row-wise sum
void rowSum(int arr[][4],int row,int col){
    cout<<"Printing sum--->"<<endl;
     for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
          
        }
        cout<<sum<<" ";
    }



}
// To print column-wise sum
void colSum(int arr[][4],int row,int col){
    cout<<"Printing sum--->"<<endl;
     for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
          
        }
        cout<<sum<<" ";
    }



}
int largestRowSum(int arr[][4],int row,int col){
    int ans=-1;
    int maxi=INT16_MIN;
     for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
          
        }
        if(sum>maxi){
            maxi=sum;
            ans=i;
        }
       
    }
     cout<<"Greatest value of rowsum-->"<<maxi<<endl;
     return ans;








}
int main(){
    // Create 2d array
    int arr[3][4];
    

   // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//    int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    cout<<"Enter the elements "<<endl;
   //Taking input in 2d array row wise value
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>> arr[row][col];
        }
    }

  //Taking input in 2d array column wise value
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>> arr[j][i];
    //     }
    // }

    // Print the elements of array.
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<< arr[row][col]<<" ";
        }
        cout<<endl;
    }

    // cout<<"Enter the element to search"<<endl;
    // int target;
    // cin>> target;
    // if(isPresent(arr,target,3,4)){
    //     cout<<"Element found "<<endl;


    // }
    // else{
    //     cout<<"Element not found "<<endl;
    // }
    rowSum(arr,3,4);
    colSum(arr,3,4);
    int maxIndex=largestRowSum(arr,3,4);
    cout<<"Mx row is at row "<<maxIndex<<endl;

  
    
    return 0;

}
