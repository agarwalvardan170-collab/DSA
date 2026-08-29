#include<iostream>
using namespace std;
int main(){
    int arr[6]= {1,0,1,1,1,1};
    int n = 6;
    int k =0;
    int s = 0;
    int e = 5;
    
    while(s<=e){
        int mid = s+(e-s)/2;  
            if(arr[mid] == k){
          cout<<true;
      
         }
         if(arr[s] == arr[mid] && arr[mid] == arr[e]){
            s++;
            e--;
            continue;
        }
          if (arr[s]<=arr[mid]){
            if(arr[s]<=k &&  k<=arr[mid]){
                e =mid-1;
            }
            else{
                s = mid+1; 
            }
        }
        else{
            if(arr[mid]<=k && k<=arr[e]){
                s=mid+ 1;
            }
            else{
                e=mid- 1;
            }
        }
        mid = s+(e-s)/2;
    }
  
}