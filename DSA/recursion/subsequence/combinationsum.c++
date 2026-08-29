#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
void solve(int index,vector<int>& nums,vector<vector<int>>&ans, vector<int>& temp,int target){
 
    //base case
    if(target<0){
        return;
    }
   
    if(target==0){
        ans.push_back(temp);
        return;
    }

    if(index >= nums.size() ){
        return;
    }

    if(nums[index]<=target){
        //singleelement
     temp.push_back(nums[index]);
    solve(index,nums,ans,temp,target-nums[index]);

     //for exclude backtracing
      temp.pop_back();
    }

    //exclude call
    solve(index+1,nums,ans,temp,target);
    


}
int  main(){
    vector<int> nums{10,1,2,7,6,1,5};
    int  index = 0;
    vector<vector<int>> ans;
    vector<int> temp;
    
    int target = 8;

    solve(index,nums,ans,temp,target);


     sort(ans.begin(),ans.end());
    for(int i = 0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
    }
   

}