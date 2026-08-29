#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void solve(vector<int>& nums,int index,vector<int> temp,vector<vector<int>>& ans){

    //base case
           // Store current subset
        ans.push_back(temp);

    for(int i=index ; i<nums.size();i++){

           // duplicate skip
        if(i > index && nums[i] == nums[i-1]){
            continue;
        }

        //include
        temp.push_back(nums[i]);
         
        //exclude
        solve(nums,i+1,temp,ans);

        //backtracking
        temp.pop_back();
    }
    
  
}
int main(){
    vector<int> nums{4,4,4,1,4};
    int index = 0;
        sort(nums.begin(), nums.end());

    vector<int> temp;
    vector<vector<int>> ans;
    solve(nums,index,temp,ans);
    for(int i = 0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"]";
    }
   
}
/**
void solve(vector<int>& nums,int index,vector<int> temp,vector<vector<int>>& ans){

    //base case
    if(index>=nums.size()){
      
     ans.push_back(temp);
  
     return;
    }
    
    //recursion call

    //exclude
    solve(nums,index+1,temp,ans);
   
    int value = nums[index];
    temp.push_back(value);
    //include
    solve(nums,index+1,temp,ans);

}
int main(){
    vector<int> nums{1, 2, 2};
    int index = 0;
    
    vector<int> temp;
    vector<vector<int>> ans;
    solve(nums,index,temp,ans);
    for(int i = 0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"]";
    }
   
}*/