#include<iostream>
using namespace std;
int floorbinarysearch(int arr[],int s, int e, int target){
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            return arr[mid];
        }
        else if(arr[mid]<target){
            ans = arr[mid];
            s = mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int ceilbinarysearch(int arr[],int s,int e,int target){
     int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            return arr[mid];
        }
        else if(arr[mid]<target){
          
            s = mid+1;
        }
        else{
              ans = arr[mid];
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[6]={3, 4, 4, 7, 8, 10};
    int n=6;
    cout<<"["<<floorbinarysearch(arr,0,5,5)<<","<<ceilbinarysearch(arr,0,5,5)<<"]";
}