#include<iostream>
using namespace std;

int binary_search(int arr[],int s,int e,int target){
    int mid = s+(e-s)/2;
    if(s==e){
     if(arr[mid]==target){
        return mid;
     }
    }
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[6]={-1,0,3,5,9,12};
    int target = 9;
    cout<<binary_search(arr,0,5,target);
}