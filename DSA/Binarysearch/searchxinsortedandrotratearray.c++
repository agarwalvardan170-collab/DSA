#include<iostream>
#include<vector>
using namespace std;
int get_pivot(int *arr,int n){
    int s =0;
    int e = n-1;
int mid = s+(e-s)/2;
while(s<e){

    if(arr[mid]>=arr[e]){
       s = mid+1;
    }
    else{
        e = mid;
    }
    mid = s+(e-s)/2;
   }
return s;
}
int binarysearch(int arr[],int s,int e,int target){
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
             e = mid-1;
        }
        else{
             s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[10]={7,8,1,2,3,3,3,4,5,6};
    int n=10;
    int k = 10;
    int pivot = get_pivot(arr,7);
    if(k>=arr[pivot] && k<=arr[n-1]){
       cout<< binarysearch(arr,pivot,n-1,k);
    }
    else{
       cout<< binarysearch(arr,0,pivot-1,k);
    }
}