#include<iostream>
#include<vector>
using namespace std;
void selection(vector<int>&nums,int i){

    //base case
    if(i>nums.size()){
        return ;
    }
    int ans = i;
    for(int j = i+1;j<nums.size();j++){
        if(nums[ans]>nums[j]){
            ans =j;
        }
    }
    swap(nums[ans],nums[i]);
    selection(nums,i+1);
}
    
int main(){
  vector<int> nums = {7,4,1,5,3};
  selection(nums,0);
  for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
  }
}