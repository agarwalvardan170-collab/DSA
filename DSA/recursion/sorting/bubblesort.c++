#include<iostream>
using namespace std;
void bubblesort(int*arr, int size){
     //base case 
    if(size==0 || size ==1){
     return;
    }

    for(int i = 0;i<size;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    //recursion call
    bubblesort(arr,size-1);
    
}
int main(){
    int arr[5] = {4,5,3,2,1};
    int size  =  5;
    bubblesort(arr,size);

    for(int i = 0;i<size;i++){
      cout<<arr[i]<<" ";
    }
   
}