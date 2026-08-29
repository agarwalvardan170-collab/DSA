#include<iostream>
using namespace std;
int binarysearch(int *arr,int n,int key,int s,int e){

  //base case
  if(s>e){
    return -1;
  }
      int mid = s+(e-s)/2;
      if(arr[mid]==key){
        return mid;
      }
  else if(arr[mid]<key){
    return binarysearch(arr,n,key,mid+1,e);
  }
  else{
    return binarysearch(arr,n,key,s,mid-1);
  }
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int size = 7;
    int key =5;
     int s =0;
    int e =size-1;
    cout<<binarysearch(arr,size,key,s,e);
}
