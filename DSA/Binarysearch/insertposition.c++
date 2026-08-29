#include<iostream>
using namespace std;
int searchinsertposition(int arr[],int s, int e, int target){
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            
            return mid;
        }
        else if(arr[mid]<target){
            s = mid+1;
        }
        else if(arr[mid]>target){
           
            e=mid-1;
        }
        else{
            s= mid+1;
        }
        mid = s+(e-s)/2;
    }
    return s;

}
int main(){
    int arr[4]={1,3,5,6};
    int n=4;
   cout<<searchinsertposition(arr,0,3,7);

}