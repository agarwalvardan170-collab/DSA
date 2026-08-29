#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,5,1};
    /*for(int i =1; i<arr.size();i++){
        if(arr[i-1]<arr[i] && arr[i+1]<arr[i]){
            cout<< arr[i];
        }
    }*/
 int s=1;
 
 int n= arr.size() -1;
 int e = arr.size()-2;
 int mid = s+(e-s)/2;
 if(arr[0]<arr[1]){
    return arr[0];
 }
 if(arr[n]>arr[n-1]){
    return arr[e];
 }

 while(s<e){
  if(arr[mid-1]<arr[mid]&&arr[mid]<arr[mid+1]){
    cout<< mid;
  }
  else if(arr[mid-1]<arr[mid]){
    s = mid+1;
  }
  else{
    e =mid;
  }
  mid= s+(e-s)/2;
 }
cout<<arr[s];
}