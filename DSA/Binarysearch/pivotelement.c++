#include<iostream>
#include<vector>
using namespace std;
int get_pivot(int *arr,int s,int e){
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
int main(){
int nums[7] = {4,5,6,7,0,1,2};
int n = 6;
cout<<get_pivot(nums,0,n);

}