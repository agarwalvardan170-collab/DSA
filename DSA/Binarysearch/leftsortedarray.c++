#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={4,5,6,7,0,1,2};
    int s=0;
    int k =0;
    int e = nums.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(nums[mid]==k){
            return mid;
        }
        else if(nums[mid]>k){
         if(nums[mid]>k){
           s = mid+1;
         }else if(nums[mid]==k){
            cout<<mid;
         }
         else{
            e =mid;
         }

        }
    }
}