#include<iostream>
using namespace std;
void reversearray(int arr[] , int i,int j ){
   
    //base case
    if(i>j){
        return;
    }
    //recursion call
    swap(arr[i],arr[j]);
    reversearray(arr,i+1,j-1);
   
   
}
int main(){
    int arr[5] ={1,2,3,4,5};
    int size = 5;
    reversearray(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}