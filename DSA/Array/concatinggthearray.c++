#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> nums{1,2,1};

  vector<int> ans;

     for(int j=0;j<nums.size();j++){
      ans.push_back(nums[j]);
    }
       for(int j=0;j<nums.size();j++){
      ans.push_back(nums[j]);
    }
 
  
   for(int j=0;j<ans.size();j++){
      cout<<ans[j]<<" ";
    }
}