#include<iostream>
#include<vector>
using namespace std;

void bubble(vector<int> & nums ,int i){

    //base case
    if(i>=nums.size()-1){
        return ;
    }
   
   for(int j = 1;j<nums.size()-i;j++){
    if(nums[j-1]>nums[j]){
        swap(nums[j-1],nums[j]);
    }
   }
   bubble(nums,i+1);
}

int main(){
    vector<int> nums = {7,4,5,1,3};
    bubble(nums,0);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }
}