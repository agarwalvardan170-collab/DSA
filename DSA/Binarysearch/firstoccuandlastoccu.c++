#include<iostream>
#include<vector>
using namespace std;
int binarysearchfirstoccurence(int arr[],int s ,int e,int target){
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e = mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int binarysearchlastoccurence(int arr[],int s ,int e,int target){
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e = mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[6]={5, 7, 7, 8, 8, 10};
    int n = 6;
    int target= 8;
     cout<<"["<<binarysearchfirstoccurence(arr,0,5, 8)<<","<<binarysearchlastoccurence(arr,0,5,8)<<"]";
}
