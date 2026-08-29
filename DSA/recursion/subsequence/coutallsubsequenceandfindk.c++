#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(vector<int>& nums,int index,int sum,int k,int& cnt){
    //base case
    
    if(index==nums.size()){
        if(sum==k){
            cnt+=1;
        }
        return ;
    }
    //exclude
    solve(nums,index+1,sum,k,cnt);

    //include
    solve(nums,index+1,sum+nums[index],k,cnt);
}
int main(){
    vector<int> nums={4,9,2,5,1};
    vector<vector<int>> ans;
    vector<int> output;
   int k=10;
    int index= 0;
   int cnt=0;

    solve(nums,index,0,k,cnt);
    cout<<cnt;

}

//brute force
/**
void solve(vector<int>& nums,int index,vector<int> output,vector<vector<int>>& ans){
    //base case
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }
    //exclude
    solve(nums,index+1,output,ans);

    //include
    int element = nums[index];
    output.push_back(element);
    solve(nums,index+1,output,ans);
}
int main(){
    vector<int> nums={4,9,2,5,1};
    vector<vector<int>> ans;
    vector<int> output;

    int index= 0;
    solve(nums,index,output,ans);
int k=10;
int cnt=0;
for(int i = 0;i<ans.size();i++){
    int sum =0;
    cout<<"{"<<" ";
    for(int j = 0;j<ans[i].size();j++){
        //cout<<ans[i][j]<<" ";
        sum = sum+ans[i][j];
    }
    cout<<sum;
    if(sum==k){
        cnt+=1;
    }
  cout<< " }";

}
cout<<cnt;
}**/